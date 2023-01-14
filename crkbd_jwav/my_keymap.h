#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(KC_LCTL, KC_A, KC_Z, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RCTL, KC_LALT, HOME_A, HOME_S, HOME_D, HOME_F, KC_G, KC_H, HOME_J, HOME_K, HOME_L, HOME_M, KC_LALT, KC_LGUI, HOME_Z, HOME_X, KC_C, KC_V, KC_B, KC_N, fCOMM, fDOT, HOME_SLSH, HOME_QUOT, KC_RGUI, LT(3,KC_SPC), LT(2,KC_ENT), LSFT_T(KC_TAB), RSFT_T(KC_BSPC), LT(1,KC_SPC), LT(2,KC_ENT)),
	[1] = LAYOUT_split_3x6_3(KC_TRNS, fAMP, fBSLS, FR_AT, fPIPE, fTILD, fDEG, fPLUS, fSCLN, fEQL, fSUP2, KC_TRNS, KC_TRNS, fHASH, fDQUO, fUNDS, fLPRN, fDLR, fGRV, fRPRN, fMINS, fCOLN, fASTR, KC_TRNS, KC_TRNS, fQUES, fLCBR, fLBRC, fLABK, fPERC, fMICR, fRABK, fRBRC, fRCBR, fEXLM, KC_TRNS, LCTL_T(KC_ENT), LT(3,KC_SPC), KC_TRNS, DF(2), DF(0), KC_RALT),
	[2] = LAYOUT_split_3x6_3(KC_TRNS, KC_PAST, KC_P1, KC_P2, KC_P3, KC_PPLS, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_PSCR, KC_TRNS, KC_TRNS, HOME_NUM_0, HOME_NUM_4, HOME_NUM_5, HOME_NUM_6, KC_PDOT, LCTL(KC_LEFT), KC_LEFT, KC_DOWN, KC_RGHT, LCTL(KC_RGHT), KC_TRNS, KC_TRNS, KC_PSLS, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_PGDN, KC_BSPC, KC_CAPS, KC_DEL, KC_NUM, KC_TRNS, LCTL_T(KC_ENT), DF(0), DF(2), KC_TRNS, LT(3,KC_ENT), LALT_T(KC_SPC)),
	[3] = LAYOUT_split_3x6_3(KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TRNS, LGUI_T(KC_F1), LCTL_T(KC_F2), LALT_T(KC_F3), LSFT_T(KC_F4), KC_F5, KC_F6, LSFT_T(KC_F7), LALT_T(KC_F8), LCTL_T(KC_F9), LGUI_T(KC_F10), KC_TRNS, KC_TRNS, TO(4), KC_MRWD, KC_MPLY, KC_MFFD, KC_F11, KC_F12, KC_BRID, KC_MUTE, KC_BRIU, DF(3), LGUI_T(KC_ENT), KC_TRNS, DF(0), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT_split_3x6_3(KC_TRNS, KC_NO, KC_ESC, KC_ESC, KC_NO, KC_NO, KC_NO, KC_WH_U, KC_MS_U, KC_WH_D, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_NO, KC_WH_L, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_R, KC_TRNS, KC_TRNS, DF(5), DF(6), DF(7), DF(8), DF(9), KC_BTN4, KC_BTN1, KC_BTN3, KC_BTN2, KC_BTN5, KC_TRNS, KC_TRNS, TO(0), KC_TRNS, KC_BTN1, KC_ACL2, KC_TRNS),
	[5] = LAYOUT_split_3x6_3(KC_TRNS, KC_A, KC_Z, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, fCOLN, KC_TRNS, KC_TRNS, KC_Q, KC_R, KC_S, KC_T, KC_G, FR_M, KC_N, KC_E, KC_I, KC_O, KC_TRNS, KC_TRNS, KC_W, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, fCOMM, fDOT, fSLSH, KC_TRNS, DF(0), LT(7,KC_ENT), LSFT_T(KC_TAB), LSFT_T(KC_BSPC), LT(1,KC_SPC), LALT_T(KC_ENT)),
	[6] = LAYOUT_split_3x6_3(KC_TRNS, KC_A, KC_Z, KC_D, KC_R, KC_F, KC_Y, KC_J, KC_K, KC_L, KC_P, KC_TRNS, KC_TRNS, KC_Q, KC_S, KC_E, KC_T, KC_G, KC_H, KC_N, KC_I, KC_O, FR_M, KC_TRNS, KC_TRNS, KC_W, KC_X, KC_C, KC_V, KC_B, KC_U, fCOMM, fDOT, fSLSH, fCOLN, KC_TRNS, DF(0), LT(2,KC_ENT), LSFT_T(KC_TAB), LSFT_T(KC_BSPC), LT(1,KC_SPC), LALT_T(KC_ENT)),
	[7] = LAYOUT_split_3x6_3(KC_TRNS, KC_PSCR, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_PAST, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_TRNS, KC_TRNS, LCTL(KC_LEFT), KC_LEFT, KC_DOWN, KC_RGHT, LCTL(KC_RGHT), KC_P0, KC_P1, KC_P2, KC_P3, KC_PDOT, KC_TRNS, KC_TRNS, KC_NUM, KC_DEL, KC_CAPS, KC_BSPC, KC_PGDN, KC_PSLS, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_TRNS, KC_SPC, DF(0), KC_TRNS, KC_TRNS, KC_ENT, KC_SPC),
	[8] = LAYOUT_split_3x6_3(KC_LCTL, KC_P, KC_O, KC_I, KC_U, KC_Y, KC_T, KC_R, KC_E, KC_Z, KC_A, KC_RCTL, KC_LALT, HOME_M, HOME_L, HOME_K, HOME_J, KC_H, KC_G, HOME_F, HOME_D, HOME_S, HOME_A, KC_LALT, KC_LGUI, fQUOT, fSLSH, fDOT, fCOMM, KC_N, KC_B, KC_V, KC_C, KC_X, KC_W, KC_RGUI, LALT_T(KC_ENT), DF(0), LSFT_T(KC_BSPC), LSFT_T(KC_TAB), DF(0), LCTL_T(KC_SPC)),
	[9] = LAYOUT_split_3x6_3(KC_NO, KC_TRNS, KC_TRNS, KC_D, KC_F, KC_TRNS, KC_Y, KC_J, KC_K, KC_L, KC_P, KC_NO, KC_NO, KC_TRNS, KC_S, KC_E, KC_R, KC_G, KC_H, KC_T, KC_I, KC_O, KC_N, KC_NO, KC_NO, KC_TRNS, KC_X, KC_C, KC_V, KC_B, KC_U, fCOMM, fDOT, fSLSH, fQUOT, KC_NO, LT(3,KC_SPC), LT(2,KC_ENT), LSFT_T(KC_TAB), RSFT_T(KC_BSPC), LT(1,KC_SPC), LT(2,KC_ENT))
};

