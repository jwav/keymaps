#!/bin/bash
qmk json2c ./ferris_jwav.json -o my_keymap.h
python3 keypos.py
qmk compile --keyboard ferris/sweep --keymap jwav
exit 0
