/*
 ** Author: Elina Lijouvni, Eric McCann
 ** License: GPL v3
 */

#include "low-level-leap.h"
#include <cv.h>
#include <highgui.h>

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
frame_t frame;

static void process_video_frame(ctx_t *ctx, frame_t *frame)
{
  int key;

  cvShowImage("mainWin", frame->frame );
  key = cvWaitKey(1);
  if (key == 'q' || key == 0x1B)
    ctx->quit = 1;
}

static void process_usb_frame(ctx_t *ctx, frame_t *frame, unsigned char *data, int size)
{
  int i;

  int bHeaderLen = data[0];
  int bmHeaderInfo = data[1];

  uint32_t dwPresentationTime = *( (uint32_t *) &data[2] );
  //printf("frame time: %u\n", dwPresentationTime);

  if (frame->id == 0)
    frame->id = dwPresentationTime;

  for (i = bHeaderLen; i < size ; i += 2) {
    if (frame->data_len >= VFRAME_SIZE)
      break ;

    CvScalar s;
    s.val[2] = data[i];
    s.val[1] = data[i+1];
    s.val[0] = 0;
    int x = frame->data_len % VFRAME_WIDTH;
    int y = frame->data_len / VFRAME_WIDTH;
    cvSet2D(frame->frame, 2 * y,     x, s);
    cvSet2D(frame->frame, 2 * y + 1, x, s);
    frame->data_len++;
  }

  if (bmHeaderInfo & UVC_STREAM_EOF) {
    //printf("End-of-Frame.  Got %i\n", frame->data_len);

    if (frame->data_len != VFRAME_SIZE) {
      //printf("wrong frame size got %i expected %i\n", frame->data_len, VFRAME_SIZE);
      frame->data_len = 0;
      frame->id = 0;
      return ;
    }

    process_video_frame(ctx, frame);
    frame->data_len = 0;
    frame->id = 0;
  }
  else {
    if (dwPresentationTime != frame->id && frame->id > 0) {
      //printf("mixed frame TS: dropping frame\n");
      frame->id = dwPresentationTime;
      /* frame->data_len = 0; */
      /* frame->id = 0; */
      /* return ; */
    }
  }
}

void gotData(unsigned char* data, int usb_frame_size)
{
  process_usb_frame(ctx, &frame, data, usb_frame_size);
}

int main(int argc, char *argv[])
{
  memset(&ctx_data, 0, sizeof (ctx_data));
  ctx = &ctx_data;
  cvNamedWindow("mainWin", 0);
  cvResizeWindow("mainWin", VFRAME_WIDTH, VFRAME_HEIGHT * 2);
  memset(&frame, 0, sizeof (frame));
  frame.frame = cvCreateImage( cvSize(VFRAME_WIDTH, 2 * VFRAME_HEIGHT), IPL_DEPTH_8U, 3);

  init();
  setDataCallback(&gotData);
  spin();

  cvReleaseImage(&frame.frame);

  return (0);
}
