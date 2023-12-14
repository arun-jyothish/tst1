#! /bin/sh

export DISPLAY=:0
# echo $DISPLAY
./gst | tee /dev/tty
if test -f /path/to/file; then
	echo "File exists." 
else 
	echo "File Not Found."
	fi


