#!/bin/bash
qmk json2c ./crkbd_jwav.json -o my_keymap.h
python3 keypos.py
qmk compile --keyboard crkbd --keymap jwav
exit 0
