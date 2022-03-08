#!/bin/sh
# cd ~/qmk_firmware_0.2.2/ && make crkbd:jwav:dfu
# found the answer at https://gist.github.com/saesh/dd26b6d51dab8b33c8f6d4ad97d1cd7c

echo "in case the following error is encountered: 
avrdude: Error: butterfly programmer uses avr_write_page() but does not provide a cmd() method."
echo "do 'sudo systemctl stop ModemManager.service'"

cd ~/qmk_firmware/ && make crkbd:jwav:avrdude
exit 0

