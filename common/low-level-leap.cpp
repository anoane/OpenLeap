#include "low-level-leap.h"

typedef struct _ctx_s _ctx_t;
struct _ctx_s
{
  libusb_context       *libusb_ctx;
  libusb_device_handle *dev_handle;
};
boost::function<void(int)> dataCallback;
unsigned char* data = NULL;
int position = 0;
_ctx_t _ctx_data;
_ctx_t *_ctx;

static void
fprintf_data(FILE *fp, const char * title, unsigned char *_data, size_t size)
{
  int i;

  debug_printf("%s", title);
  for (i = 0; i < size; i++) {
    if ( ! (i % 16) )
      debug_printf("\n");
    debug_printf("%02x ", _data[i]);
  }
  debug_printf("\n");
}

static void
leap_init(_ctx_t *ctx)
{
  int ret;

  data = (unsigned char *)malloc(256);
#include "leap_libusb_init.c.inc"
  free(data);
}

void setDataCallback(boost::function<void(int)> dc)
{
  dataCallback = dc;
}

void spin()
{
  data = (unsigned char *)malloc(16834);
  int transferred,ret;
  for ( ; ; ) {
    ret = libusb_bulk_transfer(_ctx->dev_handle, 0x83, data, sizeof(data), &transferred, 1000);
    if (ret != 0) {
      printf("libusb_bulk_transfer(): %i: %s\n", ret, libusb_error_name(ret));
      exit(EXIT_FAILURE);
    }
    printf("libusb_bulk_transfer(): %i\n", ret);

    debug_printf("read usb frame of %i bytes\n", transferred);

    dataCallback(transferred);
  }
  free(data);
  libusb_exit(_ctx->libusb_ctx);
}

void init()
{
  memset(&_ctx_data, 0, sizeof (_ctx_data));
  _ctx = &_ctx_data;
  libusb_init( & _ctx->libusb_ctx );
  _ctx->dev_handle = libusb_open_device_with_vid_pid(_ctx->libusb_ctx, LEAP_VID, LEAP_PID);
  if (_ctx->dev_handle == NULL) {
    fprintf(stderr, "ERROR: can't find leap.\n");
    exit(EXIT_FAILURE);
  }

  debug_printf("Found leap\n");

  int ret;

  ret = libusb_reset_device(_ctx->dev_handle);
  debug_printf("libusb_reset_device() ret: %i: %s\n", ret, libusb_error_name(ret));

  ret = libusb_kernel_driver_active(_ctx->dev_handle, 0);
  if ( ret == 1 ) {
    debug_printf("kernel active for interface 0\n");
    libusb_detach_kernel_driver(_ctx->dev_handle, 0);
  }
  else if (ret != 0) {
    printf("error\n");
    exit(EXIT_FAILURE);
  }

  ret = libusb_kernel_driver_active(_ctx->dev_handle, 1);
  if ( ret == 1 ) {
    debug_printf("kernel active\n");
    libusb_detach_kernel_driver(_ctx->dev_handle, 1);
  }
  else if (ret != 0) {
    printf("error\n");
    exit(EXIT_FAILURE);
  }

  ret = libusb_claim_interface(_ctx->dev_handle, 0);
  debug_printf("libusb_claim_interface() ret: %i: %s\n", ret, libusb_error_name(ret));

  ret = libusb_claim_interface(_ctx->dev_handle, 1);
  debug_printf("libusb_claim_interface() ret: %i: %s\n", ret, libusb_error_name(ret));

  leap_init(_ctx);

  debug_printf( "max %i\n",  libusb_get_max_packet_size(libusb_get_device( _ctx->dev_handle ), 0x83));
}
