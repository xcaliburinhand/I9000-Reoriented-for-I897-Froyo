#!/system/bin/sh

if ! ls /etc/postboot ;
then
   `mkdir /system/etc/postboot`
fi

sleep 20 #delay to ensure /sdcard is online

if ! ls /sdcard/disablepostboot ;
then
for SCRIPT in `ls /etc/postboot`
   do
       `/etc/postboot/$SCRIPT`
   done
fi
