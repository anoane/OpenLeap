#! /bin/bash

mydir=`dirname $0`

PCAP_FILE=$1
OUT_FILE=$2
shift
shift
while [ $1 ]; do
  export LEAP_DEV_ADDR=$1
  shift
  [ `tshark \
  -r ${PCAP_FILE} \
  -T fields \
  -e none \
  -R "usb.device_address == ${LEAP_DEV_ADDR} and usb.transfer_type == 0x02 and usb.endpoint_number.direction == 0 and usb.setup.bRequest == 1" \
  -Xlua_script:$mydir/usb_c.lua \
  | tee $OUT_FILE | wc -l` -gt 0 ] && break
done
