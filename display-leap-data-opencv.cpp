/*
 ** Author: Elina Lijouvni, Eric McCann
 ** License: GPL v3
 */

#include "low-level-leap.h"
#include <cv.h>
#include <highgui.h>

#define NUM_BUFFERS 2

typedef struct ctx_s ctx_t;
struct ctx_s
{
  int quit;
};

typedef struct frame_s frame_t;
struct frame_s
{
  IplImage* frame;
  uint32_t id;
  uint32_t data_len;
  uint32_t state;
};

ctx_t ctx_data;
ctx_t *ctx;
frame_t frame[NUM_BUFFERS];
unsigned int position=0;

void process_video_frame(ctx_t *ctx)
{
  int key;

  cvShowImage("mainWin", frame[position].frame );
  key = cvWaitKey(1);
  if (key == 'q' || key == 0x1B)
    ctx->quit = 1;
}

void process_usb_frame(ctx_t *ctx, unsigned char *data, int size)
{
  int i;

  int bHeaderLen = data[0];
  int bmHeaderInfo = data[1];

  uint32_t dwPresentationTime = *( (uint32_t *) &data[2] );
  
  int next = (position + 1) % NUM_BUFFERS;
  frame_t* f = &(frame[next]);
  
  //printf("frame time: %u\n", dwPresentationTime);

  if (f->id == 0)  
    f->id = dwPresentationTime;
  for (i = bHeaderLen; i < size ; i += 2) {
    if (f->data_len >= VFRAME_SIZE)
      break ;

    CvScalar s;
    s.val[2] = data[i];
    s.val[1] = data[i+1];
    s.val[0] = 0;
    int x = f->data_len % VFRAME_WIDTH;
    int y = (int)floor((1.0f * f->data_len) / (1.0f * VFRAME_WIDTH));
    cvSet2D(f->frame, 2 * y,     x, s);
    cvSet2D(f->frame, 2 * y + 1, x, s);
    f->data_len++;
  }

  if (dwPresentationTime != f->id && f->id > 0) {
    printf("mixed frame TS: (id=%i, dwPresentationTime=%i) -- dropping frame\n", f->id, dwPresentationTime);
    f->data_len = 0;
    f->id = 0;
    return ;
  }
  if (bmHeaderInfo & UVC_STREAM_EOF) {
    //printf("End-of-Frame.  Got %i\n", f->data_len);
    if (f->data_len != VFRAME_SIZE) {
      printf("wrong frame size got %i expected %i\n", f->data_len, VFRAME_SIZE);
      f->data_len = 0;
      f->id = 0;
      return ;
    }

    position = next;
    process_video_frame(ctx);
    f->data_len = 0;
    f->id = 0;
  }
}

void gotData(unsigned char* data, int usb_frame_size)
{
  process_usb_frame(ctx, data, usb_frame_size);
}

int main(int argc, char *argv[])
{
  memset(&ctx_data, 0, sizeof (ctx_data));
  ctx = &ctx_data;
  cvNamedWindow("mainWin", 0);
  cvResizeWindow("mainWin", VFRAME_WIDTH, VFRAME_HEIGHT * 2);
  for(int i=0;i<NUM_BUFFERS;i++) {
      memset(&frame[i], 0, sizeof (frame[i]));
      frame[i].frame = cvCreateImage( cvSize(VFRAME_WIDTH, 2 * VFRAME_HEIGHT), IPL_DEPTH_8U, 3);
  }

  init();
  setDataCallback(&gotData);
  spin();
  for(int i=0;i<NUM_BUFFERS;i++)
    cvReleaseImage(&frame[i].frame);

  return (0);
}
