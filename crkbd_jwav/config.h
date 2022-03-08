/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

// #define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS

#define USE_SERIAL_PD2

// EVERYTHING TAPPING-RELATED

#define IGNORE_MOD_TAP_INTERRUPT
// #define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200 // default QMK value: 200
#define TAPPING_TERM_HOMEROWMODS 300

#define TAPPING_TERM_PER_KEY
// if defined, disables double-tap
// #define TAPPING_FORCE_HOLD
#define TAPPING_FORCE_HOLD_PER_KEY

// #undef RGBLED_NUM
// #define RGBLIGHT_ANIMATIONS
// #define RGBLED_NUM 27
// #define RGBLIGHT_LIMIT_VAL 120
// #define RGBLIGHT_HUE_STEP 10
// #define RGBLIGHT_SAT_STEP 17

// EVERYTHING COMBO-RELATED. See https://beta.docs.qmk.fm/using-qmk/software-features/feature_combo
// #include "my_combos_definitions.h"
// #define COMBO_COUNT MY_NB_COMBOS // defined in my_combos_definitions.h
#define COMBO_COUNT 41

// the longer COMBO_TERM is, the more time it leaves to complete the combo. However, it will result in more mistypes.
// #define COMBO_TERM 50 // 50 is a pretty good value, used it for long with little mistypes
#define COMBO_TERM 30
#define COMBO_MUST_HOLD_MODS
#define COMBO_HOLD_TERM 50
// #ifdef RGBLIGHT_ENABLE
//     #undef RGBLED_NUM
//     #define RGBLIGHT_ANIMATIONS
//     #define RGBLED_NUM 27
//     #define RGBLIGHT_LIMIT_VAL 120
//     #define RGBLIGHT_HUE_STEP 10
//     #define RGBLIGHT_SAT_STEP 17
//     #define RGBLIGHT_VAL_STEP 17
// #endif

// #define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
