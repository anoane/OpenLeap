RAWBUS=$(shell lsusb -d f182:0003 | cut -d ' ' -f 2)
RAWDEVICE=$(shell lsusb -d f182:0003 | cut -d ' ' -f 4 | sed 's/:*//g')
BUS=$(shell echo $(RAWBUS) | sed 's/^0*//')
DEVICE=$(shell echo $(RAWDEVICE) | sed 's/^0*//')
file=$(shell mktemp)
tempcap=/tmp/tmp.pcap

default all: leap_libusb_init.c.inc leap_init.pcap

leap_init.pcap:
	lsmod | grep usbmon || echo Requesting root permissions to modprobe usbmon && sudo modprobe usbmon
	leapd &
	sudo tshark -i usbmon${BUS} -w $(tempcap) &
	sleep 5
	sudo killall leapd tshark
	sudo chown $(shell whoami).$(shell whoami) $(tempcap)
	mv $(tempcap) leap_init.pcap

leap_libusb_init.c.inc: leap_init.pcap
	 make_leap_usbinit.sh $(RAWDEVICE) leap_init.pcap > leap_libusb_init.c.inc

clean:
	@rm -f *.pcap leap_libusb_init.c.inc
