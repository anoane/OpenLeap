#!/bin/bash
file=`mktemp`
file2=`mktemp`
[ `pgrep -f leapd | wc -l` -gt 0 ] && sudo stop leapd
[ `pgrep -f leapd | wc -l` -gt 0 ] && sudo killall leapd
[ `pgrep -f LeapControlPanel | wc -l` -gt 0 ] && sudo killall LeapControlPanel
tshark -i usbmon$1 -w $2 &> $file &
while [ `grep Capturing $file | wc -l` -eq 0 ]; do echo "Waiting for capture to start..."; sleep 1; done
echo "tshark is ready. Restarting leapd."
leapd 2>&1 | tee $file2 &
togo=$3
while [ $togo -gt 0 ]; do
    if [ `grep detected $file2 | wc -l` -ne 0 ]; then
        echo "Capturing: $togo seconds left"
        togo=`expr $togo - 1`
    else
        echo "Waiting for device to be detected"
    fi
    sleep 1    
done
rm $file $file2
sudo killall -15 tshark leapd
exit 0
