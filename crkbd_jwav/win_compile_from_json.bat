rem qmk json2c ./crkbd_jwav.json -o my_keymap.h
qmk.exe json2c ./crkbd_jwav.json -o my_keymap.h
python3.exe keypos.py
qmk.exe compile --keyboard crkbd --keymap jwav
