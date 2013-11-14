#! /bin/bash

mydir=`dirname $0`
if [ ! -f `dirname $0`/`basename $1` ]; then
    $0 `dirname $0`/leap_init.pcap `dirname $0`/leap_libusb_init.c.inc $*
    exit $?
elif [ $# -lt 2 ]; then
    echo "Usage: "
    echo "  $0 <pcap file> <destination file> [ USB device addresses ... ]"
    echo "or: "
    echo "  $0 [ USB device addresses ... ]"
    echo " "
    echo "Typically, the \"USB device addresses\" contains the device number output by \"lsusb -d f182:0003\", both with leading zeros removed, and with them present."    
    echo "If the usb device number from lsusb is 8, then you would call this script..."
    echo "  $0 8 008"
    exit 1
fi 
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
