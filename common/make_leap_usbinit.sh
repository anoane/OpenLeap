#! /bin/bash

mydir=`dirname $0`

PCAP_FILE=$1
OUT_FILE=$2
shift
shift
firstbet=$1
while [ 0 ]; do
  if [ $1 ]; then
    echo "Testing address possibility: $1"
    export LEAP_DEV_ADDR=$1
    export LEAP_FILTER="usb.device_address == ${LEAP_DEV_ADDR} and usb.transfer_type == 0x02"
  else
    echo "Trying with very simple filter"
    export LEAP_DEV_ADDR=$firstbet
    export LEAP_FILTER="usb.transfer_type == 0x02"
  fi
  [ `tshark \
  -r ${PCAP_FILE} \
  -T fields \
  -e none \
  -R "$LEAP_FILTER and usb.endpoint_number.direction == 0 and usb.setup.bRequest == 1" \
  -Xlua_script:$mydir/usb_c.lua \
  | tee $OUT_FILE | wc -w` -gt 0 ] && echo "SUCCESS" && break || [ ! $1 ] && break
  shift
done
