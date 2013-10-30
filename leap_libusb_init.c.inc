  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x00, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x01, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x02, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x03, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x04, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x05, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x07, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x08, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x09, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x0a, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x0b, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x0c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x0d, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x90, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x11, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x13, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x12, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x8a, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x13, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x35, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x2c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0xfd, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x2d, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0xc2, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x2e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x65, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x2f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x02, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x14, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x15, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x16, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x18, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x19, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x1a, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x1b, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x1c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x1d, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x1e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x1f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x20, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x96, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x21, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x25, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x22, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x8c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x23, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x0c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x24, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0xfe, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x25, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0xba, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x26, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x0f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x27, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x76, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x62, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x63, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x64, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x65, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x66, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x67, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x68, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x69, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x6a, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x6b, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x6c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x6d, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x6e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x6f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x70, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x71, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x72, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x73, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x74, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x75, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x76, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x77, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x78, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x79, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x7a, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x7b, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x7c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x7d, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x7e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x7f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x80, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x81, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x82, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x83, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x84, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x85, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x86, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x87, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x88, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x89, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x8a, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x8b, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x8c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x8d, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x8e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x8f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x90, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x91, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x92, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x93, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x94, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x95, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x96, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x97, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x98, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x99, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x9a, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x9b, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x9c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x9d, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x9e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x9f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xa0, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xa1, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xa2, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xa3, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xa4, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xa5, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xa6, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xa7, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xa8, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xa9, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xaa, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xab, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xac, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xad, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xae, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xaf, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xb0, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xb1, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xb2, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xb3, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xb4, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xb5, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xb6, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xb7, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xb8, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xb9, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xba, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xbb, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xbc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xbd, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xbe, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xbf, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xc0, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xc1, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xc2, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xc3, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xc4, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xc5, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xc6, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xc7, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xc8, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xc9, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xca, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xcb, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xcc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xcd, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xce, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xcf, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xd0, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xd1, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xd2, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xd3, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xd4, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xd5, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xd6, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xd7, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xd8, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xd9, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xda, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xdb, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xdd, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xde, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xdf, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xe0, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xe1, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xe2, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xe3, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xe4, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xe5, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xe6, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xe7, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xe8, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xe9, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xea, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xeb, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xec, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xed, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xee, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xef, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xf0, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xf1, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xf2, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xf3, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xf4, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xf5, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xf6, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xf7, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xf8, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xf9, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xfa, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xfb, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xfc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xfd, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xfe, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xff, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x00, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x01, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x02, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x03, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x04, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x05, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x07, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x08, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x09, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x0a, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x0b, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x0c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x0d, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x90, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x11, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x13, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x12, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x8a, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x13, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x35, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x2c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0xfd, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x2d, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0xc2, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x2e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x65, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x2f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x02, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x14, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x15, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x16, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x18, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x19, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x1a, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x1b, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x1c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x1d, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x1e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x1f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x20, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x96, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x21, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x25, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x22, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x8c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x23, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x0c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x24, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0xfe, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x25, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0xba, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x26, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x0f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x27, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x76, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 256, 1, (unsigned char[]){ 0x01, 0x00, 0x01, 0x02, 0xac, 0x53, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0b, 0x00, 0x00, 0x40, 0x00, 0x00 }, 26, 1000);
  if (ret != 26) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 256, 1, data, 26, 1000);
  fprintf_data(stdout, "ctrl in:", data, 26);

  if (ret != 26) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 512, 1, (unsigned char[]){ 0x00, 0x00, 0x01, 0x02, 0xac, 0x53, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0b, 0x00, 0x00, 0x40, 0x00, 0x00 }, 26, 1000);
  if (ret != 26) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1536, 512, (unsigned char[]){ 0xe8, 0x03 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xc8, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2304, 1280, (unsigned char[]){ 0x01, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x00, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x01, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x42, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x43, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x44, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2560, 1280, (unsigned char[]){ 0x7f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x00, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x01, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x02, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x03, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x04, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x05, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x07, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x08, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x09, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x0a, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x0b, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x0c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x0d, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x90, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x11, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x13, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x12, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x8a, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x13, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x35, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x2c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0xfd, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x2d, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0xc2, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x2e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x65, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x2f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x02, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x14, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x15, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x16, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x18, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x19, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x1a, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x1b, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x1c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x1d, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x1e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x1f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x20, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x96, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x21, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x25, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x22, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x8c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x23, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x0c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x24, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0xfe, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x25, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0xba, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x26, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x0f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x27, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1792, 1280, (unsigned char[]){ 0x76, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 256, 1, (unsigned char[]){ 0x01, 0x00, 0x01, 0x02, 0xac, 0x53, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0b, 0x00, 0x00, 0x40, 0x00, 0x00 }, 26, 1000);
  if (ret != 26) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 256, 1, data, 26, 1000);
  fprintf_data(stdout, "ctrl in:", data, 26);

  if (ret != 26) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 512, 1, (unsigned char[]){ 0x00, 0x00, 0x01, 0x02, 0xac, 0x53, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0b, 0x00, 0x00, 0x40, 0x00, 0x00 }, 26, 1000);
  if (ret != 26) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x64, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x65, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x66, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x67, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x68, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x69, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x6a, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x6b, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x6c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x6d, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x6e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x6f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x70, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x71, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x72, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x73, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x74, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x75, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x76, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x77, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x78, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x79, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x7a, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x7b, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x7c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x7d, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x7e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x7f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x80, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x81, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x82, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x83, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x84, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x85, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x86, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x87, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x88, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x89, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x8a, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x8b, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x8c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x8d, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x8e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x8f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x90, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x91, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x92, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x93, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x94, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x95, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x96, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x97, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x98, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x99, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x9a, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x9b, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x9c, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x9d, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x9e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0x9f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xa0, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xa1, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xa2, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xa3, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xa4, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xa5, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xa6, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xa7, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xa8, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xa9, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xaa, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xab, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xac, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xad, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xae, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xaf, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xb0, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xb1, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xb2, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xb3, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xb4, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xb5, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xb6, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xb7, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xb8, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xb9, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xba, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xbb, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xbc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xbd, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xbe, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xbf, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xc0, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xc1, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xc2, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xc3, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xc4, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xc5, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xc6, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xc7, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xc8, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xc9, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xca, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xcb, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xcc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xcd, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xce, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xcf, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xd0, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xd1, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xd2, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xd3, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xd4, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xd5, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xd6, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xd7, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xd8, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xd9, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xda, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xdb, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xdd, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xde, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xdf, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xe0, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xe1, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xe2, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xe3, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xe4, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xe5, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xe6, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xe7, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xe8, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xe9, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xea, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xeb, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xec, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xed, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xee, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xef, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xf0, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xf1, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xf2, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xf3, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xf4, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xf5, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xf6, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xf7, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xf8, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xf9, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xfa, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xfb, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xfc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xfd, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xfe, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2048, 1280, (unsigned char[]){ 0xff, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 161, 129, 1792, 1280, data, 2, 1000);
  fprintf_data(stdout, "ctrl in:", data, 2);

  if (ret != 2) {
    printf("ctrl in: ret == %i\n", ret);
  }

  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x41, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x16, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x13, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xd8, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xd5, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xc5, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xc5, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xb0, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x01, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xa3, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0x97, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0x9b, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0x9f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xad, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xbc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xc6, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xd1, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x11, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x11, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xcd, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xce, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xbd, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xd1, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x11, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x12, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x12, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x11, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xd6, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xbf, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xb3, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xa8, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0x9d, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0x94, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0x89, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0x7e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0x7e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0x7e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0x7e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0x7e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0x7e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0x7e, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0x7f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0x80, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0x83, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0x86, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0x8f, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0x99, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xc2, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x10, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x12, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x14, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x16, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x06, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 768, 1280, (unsigned char[]){ 0x05, 0x3c }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 2816, 512, (unsigned char[]){ 0xdc, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }


  ret = libusb_control_transfer(ctx->dev_handle, 33, 1, 1024, 1280, (unsigned char[]){ 0x17, 0x00 }, 2, 1000);
  if (ret != 2) {
    printf("strl out: ret == %i\n", ret);
  }
