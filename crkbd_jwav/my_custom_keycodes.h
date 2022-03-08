#pragma once

#include QMK_KEYBOARD_H
#include "my_french_keycode_aliases.h"
#include "my_homerow_mods.h"

#define LAYER_NUM 2
#define LAYER_SYM 1

enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    KC_ECIRC,
    KC_ICIRC,
    KC_OCIRC,
    KC_UCIRC,
    KC_ACIRC,
    MC_DELLINE,
    MC_DELHOME,
    MC_DELEND
};

#define X_DEADCIRC X_LBRC

// handle custom keycodes
bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode) 
    {
        case KC_ECIRC:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_DEADCIRC)"e");
                break;
            }
        case KC_ICIRC:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_DEADCIRC)"i");
                break;
            }
        case KC_OCIRC:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_DEADCIRC)"o");
                break;
            }
        case KC_UCIRC:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_DEADCIRC)"u");
                break;
            }
        case KC_ACIRC:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_DEADCIRC)"q");
                break;
            }
        case MC_DELLINE:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_HOME));
                SEND_STRING(SS_LSFT(SS_TAP(X_END)));
                SEND_STRING(SS_TAP(X_DEL));
                // SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_DEL))));
                // SEND_STRING(SS_LCTL(SS_LSFT(X_DEL)));
                // tap_code16( 
                break;
            }
        case MC_DELHOME:
            if (record->event.pressed) {
                // SEND_STRING(SS_TAP(X_HOME));
                SEND_STRING(SS_LSFT(SS_TAP(X_HOME)));
                SEND_STRING(SS_TAP(X_DEL));
                // SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_DEL))));
                // SEND_STRING(SS_LCTL(SS_LSFT(X_DEL)));
                // tap_code16( 
                break;
            }
        case MC_DELEND:
            if (record->event.pressed) {
                // SEND_STRING(SS_TAP(X_HOME));
                SEND_STRING(SS_LSFT(SS_TAP(X_END)));
                SEND_STRING(SS_TAP(X_DEL));
                // SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_DEL))));
                // SEND_STRING(SS_LCTL(SS_LSFT(X_DEL)));
                // tap_code16( 
                break;
            }
    }
    return true;
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) 
{
    switch (keycode) {
        case HOME_A:
        case HOME_S:
        case HOME_D:
        case HOME_F:
        case HOME_M:
        case HOME_L:
        case HOME_K:
        case HOME_J:
            return TAPPING_TERM_HOMEROWMODS;
            break;
        case HOME_NUM_0:
        case HOME_NUM_1:
        case HOME_NUM_2:
        case HOME_NUM_3:
            return TAPPING_TERM_HOMEROWMODS + 100;
            break;
        case KC_ENT:
            // return 20;
            return 100;
            break;
        default:
            return TAPPING_TERM;
    }
}


// working with TAPPING_FORCE_HOLD_PER_KEY
// basically, I want the thumb keys to output the mod when tapped-held, and not the key.
// for instance, if I double-tap the left inner thumb key, I want a shift and not a repeated backspace (this one is particularly egregious)
bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(2, KC_ENT):
        case LSFT_T(KC_TAB):
        case RSFT_T(KC_BSPC):
        case LT(1,KC_SPC):
            return true;
        default:
            return false;
    }
}
