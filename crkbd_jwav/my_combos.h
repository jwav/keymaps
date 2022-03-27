// NOTE: I voluntarily disabled the include guard
// because if this file is included more than once
// I need to know about it.
// #pragma once

#include "my_french_keycode_aliases.h"
#include "my_keypos_aliases.h"
// #include "my_combos_definitions.h"

enum combo_events {
    CB_EACU_BASE_RIGHT,
    CB_EGRV_BASE_RIGHT,
    CB_AGRV_BASE_RIGHT,
    CB_CCED_BASE_RIGHT,
    CB_UGRV_BASE_RIGHT,

    // not using these combos anymore
    // CB_ECIRC_SYM_LEFT,
    // CB_ACIRC_SYM_LEFT,
    // CB_OCIRC_SYM_LEFT,
    // CB_ICIRC_SYM_LEFT,
    // CB_UCIRC_SYM_LEFT,
    // CB_EACU_SYM_RIGHT,
    // CB_EGRV_SYM_RIGHT,
    // CB_AGRV_SYM_RIGHT,
    // CB_CCED_SYM_RIGHT,
    // CB_UGRV_SYM_RIGHT,
    // CB_EACU_SYM_LEFT,
    // CB_EGRV_SYM_LEFT,
    // CB_AGRV_SYM_LEFT,
    // CB_CCED_SYM_LEFT,
    // CB_UGRV_SYM_LEFT,
    // CB_ECIRC_SYM_RIGHT,
    // CB_ACIRC_SYM_RIGHT,
    // CB_OCIRC_SYM_RIGHT,
    // CB_ICIRC_SYM_RIGHT,
    // CB_UCIRC_SYM_RIGHT,

    CB_ESC_BASE_LEFT,
    // CB_ESC_BASE_RIGHT,
    CB_ESC_BASE_BIS,
    CB_DEADCIRC_BASE_RIGHT,
    CB_DEADCIRC_BASE_LEFT,
    CB_DEADDIAE_BASE_RIGHT,
    CB_ESC_NUM_LEFT,
    CB_BSP_NUM_LEFT,
    CB_DEL_NUM_LEFT,
    CB_ESC_SYM_LEFT,
    CB_BSP_SYM_LEFT,
    CB_ESC_SYM_RIGHT,
    CB_BSP_SYM_RIGHT,
    CB_ENT_BASE_RIGHT,
    CB_SPC_BASE_LEFT,
    CB_SPC_NUM_LEFT,
    CB_SWITCHHANDS_NUM_LEFT,
    CB_RALT_OSM_BASE_RIGHT,
    CB_GUI_SYM_LEFT,
    CB_GUI_SYM_RIGHT,
    CB_ALT_SYM_LEFT,
    CB_ALT_SYM_RIGHT,
    CB_DUMMY, // I don't know why, but adding this dummy combo at the end prevents the "combo characters repeat themselves when pressed only once" bug
    MY_NB_COMBOS // will contain the number of elements in this enum
};

uint16_t COMBO_LEN = MY_NB_COMBOS;

// symbols layer, left side
// const uint16_t PROGMEM combo_eacu_sym_left[] = {k103, k104, COMBO_END};
// const uint16_t PROGMEM combo_egrv_sym_left[] = {k102, k103, COMBO_END};
// const uint16_t PROGMEM combo_agrv_sym_left[] = {k102, k104, COMBO_END};
// const uint16_t PROGMEM combo_cced_sym_left[] = {k122, k123, COMBO_END};
// const uint16_t PROGMEM combo_ugrv_sym_left[] = {k123, k124, COMBO_END};
// const uint16_t PROGMEM combo_ecirc_sym_left[] = {k113, k114, COMBO_END};
// const uint16_t PROGMEM combo_acirc_sym_left[] = {k112, k114, COMBO_END};
// const uint16_t PROGMEM combo_ocirc_sym_left[] = {k112, k113, COMBO_END};
// const uint16_t PROGMEM combo_ucirc_sym_left[] = {k114, k111, COMBO_END};
// const uint16_t PROGMEM combo_icirc_sym_left[] = {k114, k115, COMBO_END};

// symbols layer, right side
// const uint16_t PROGMEM combo_eacu_sym_right[] = {km113, km114, COMBO_END};
// const uint16_t PROGMEM combo_egrv_sym_right[] = {km112, km113, COMBO_END};
// const uint16_t PROGMEM combo_agrv_sym_right[] = {km112, km114, COMBO_END};
// const uint16_t PROGMEM combo_cced_sym_right[] = {km120, km121, COMBO_END};
// const uint16_t PROGMEM combo_ugrv_sym_right[] = {km123, km124, COMBO_END};

// const uint16_t PROGMEM combo_ecirc_sym_right[] = {km113, km114, COMBO_END};
// const uint16_t PROGMEM combo_acirc_sym_right[] = {km112, km114, COMBO_END};
// const uint16_t PROGMEM combo_ocirc_sym_right[] = {km112, km113, COMBO_END};
// const uint16_t PROGMEM combo_ucirc_sym_right[] = {km114, km111, COMBO_END};
// const uint16_t PROGMEM combo_icirc_sym_right[] = {km114, km115, COMBO_END};

// base layer, right side
const uint16_t PROGMEM combo_eacu_base_right[] = {km023, km024, COMBO_END};
const uint16_t PROGMEM combo_egrv_base_right[] = {km022, km023, COMBO_END};
const uint16_t PROGMEM combo_agrv_base_right[] = {km024, km022, COMBO_END};
const uint16_t PROGMEM combo_cced_base_right[] = {km025, km024, COMBO_END};
const uint16_t PROGMEM combo_ugrv_base_right[] = {km024, km021, COMBO_END};

const uint16_t PROGMEM combo_deadcirc_base_right[] = {km004, km002, COMBO_END};
const uint16_t PROGMEM combo_deadcirc_base_left[] = {k004, k002, COMBO_END};
const uint16_t PROGMEM combo_deaddiae_base_right[] = {km005, km003, COMBO_END};

// esc, bsp combos
const uint16_t PROGMEM combo_esc_base_left[] = {k002, k003, COMBO_END}; // upper row base layer left esc
const uint16_t PROGMEM combo_esc_base_right[] = {km002, km003, COMBO_END}; // 
const uint16_t PROGMEM combo_esc_base_bis[] = {k022, k023, COMBO_END}; // alternate base layer left esc
const uint16_t PROGMEM combo_esc_num_left[] = {k222, k223, COMBO_END};
const uint16_t PROGMEM combo_spc_num_left[] = {k202, k204, COMBO_END};
const uint16_t PROGMEM combo_bsp_num_left[] = {k202, k203, COMBO_END};
const uint16_t PROGMEM combo_del_num_left[] = {k204, k203, COMBO_END};
const uint16_t PROGMEM combo_esc_sym_left[] = {k102, k104, COMBO_END};
const uint16_t PROGMEM combo_bsp_sym_left[] = {k102, k103, COMBO_END};
const uint16_t PROGMEM combo_esc_sym_right[] = {km102, km104, COMBO_END};
const uint16_t PROGMEM combo_bsp_sym_right[] = {km102, km103, COMBO_END};
const uint16_t PROGMEM combo_ent_base_right[] = {km003, km004, COMBO_END};
const uint16_t PROGMEM combo_spc_base_left[] = {k001, k004, COMBO_END};
const uint16_t PROGMEM combo_switchhands_num_left[] = {k222, k224, COMBO_END};
const uint16_t PROGMEM combo_ralt_osm_base_right[] = {km001, km004, COMBO_END};


const uint16_t PROGMEM combo_gui_sym_left[] = {k111, k112, COMBO_END};
const uint16_t PROGMEM combo_gui_sym_right[] = {km111, km112, COMBO_END};
const uint16_t PROGMEM combo_alt_sym_left[] = {k113, k114, COMBO_END};
const uint16_t PROGMEM combo_alt_sym_right[] = {km113, km114, COMBO_END};


// dummy combo to avoid the "repeating key" bug. set to unused keys to that effect
const uint16_t PROGMEM combo_dummy[] = {KC_F23, KC_F24, COMBO_END};

//original way: with a rigidly defined macro
// combo_t key_combos[COMBO_COUNT] = {
// new way: using the last id of the enum to determine the number of combos
combo_t key_combos[MY_NB_COMBOS] = {
    // conflict wih other combos, I'm disabling these three
    // [CB_EACU_SYM_RIGHT] = COMBO(combo_eacu_sym_left, fEACU),
    // [CB_EGRV_SYM_RIGHT] = COMBO(combo_egrv_sym_left, fEGRV),
    // [CB_AGRV_SYM_RIGHT] = COMBO(combo_agrv_sym_left, fAGRV),
    // [CB_UGRV_SYM_RIGHT] = COMBO(combo_ugrv_sym_left, fUGRV),
    // [CB_CCED_SYM_RIGHT] = COMBO(combo_cced_sym_left, fCCED),

    // [CB_ECIRC_SYM_LEFT] = COMBO_ACTION(combo_ecirc_sym_left),
    // [CB_ACIRC_SYM_LEFT] = COMBO_ACTION(combo_acirc_sym_left),
    // [CB_OCIRC_SYM_LEFT] = COMBO_ACTION(combo_ocirc_sym_left),
    // [CB_ICIRC_SYM_LEFT] = COMBO_ACTION(combo_icirc_sym_left),
    // [CB_UCIRC_SYM_LEFT] = COMBO_ACTION(combo_ucirc_sym_left),

    // [CB_ECIRC_SYM_RIGHT] = COMBO_ACTION(combo_ecirc_sym_right),
    // [CB_ACIRC_SYM_RIGHT] = COMBO_ACTION(combo_acirc_sym_right),
    // [CB_OCIRC_SYM_RIGHT] = COMBO_ACTION(combo_ocirc_sym_right),
    // [CB_ICIRC_SYM_RIGHT] = COMBO_ACTION(combo_icirc_sym_right),
    // [CB_UCIRC_SYM_RIGHT] = COMBO_ACTION(combo_ucirc_sym_right),

    [CB_EACU_BASE_RIGHT] = COMBO(combo_eacu_base_right, fEACU),
    [CB_EGRV_BASE_RIGHT] = COMBO(combo_egrv_base_right, fEGRV),
    [CB_AGRV_BASE_RIGHT] = COMBO(combo_agrv_base_right, fAGRV),
    [CB_CCED_BASE_RIGHT] = COMBO(combo_cced_base_right, fCCED), 
    [CB_UGRV_BASE_RIGHT] = COMBO(combo_ugrv_base_right, fUGRV),

    [CB_ESC_BASE_LEFT] = COMBO(combo_esc_base_left, KC_ESC),
    [CB_ESC_BASE_BIS] = COMBO(combo_esc_base_bis, KC_ESC),
    // [CB_ESC_BASE_RIGHT] = COMBO(combo_esc_base_right, KC_ESC),
    [CB_DEADCIRC_BASE_RIGHT] = COMBO(combo_deadcirc_base_right, fCIRC),
    [CB_DEADCIRC_BASE_LEFT] = COMBO(combo_deadcirc_base_left, fCIRC),
    [CB_DEADDIAE_BASE_RIGHT] = COMBO(combo_deaddiae_base_right, fDIAE),

    [CB_ESC_NUM_LEFT] = COMBO(combo_esc_num_left, KC_ESC),
    [CB_BSP_NUM_LEFT] = COMBO(combo_bsp_num_left, KC_BSPC),
    [CB_DEL_NUM_LEFT] = COMBO(combo_del_num_left, KC_DEL),
    [CB_ESC_SYM_LEFT] = COMBO(combo_esc_sym_left, KC_ESC),
    [CB_BSP_SYM_LEFT] = COMBO(combo_bsp_sym_left, KC_BSPC),
    [CB_ESC_SYM_RIGHT] = COMBO(combo_esc_sym_right, KC_ESC),
    [CB_BSP_SYM_RIGHT] = COMBO(combo_bsp_sym_right, KC_BSPC),
    [CB_ENT_BASE_RIGHT] = COMBO(combo_ent_base_right, KC_ENT),
    [CB_SPC_BASE_LEFT] = COMBO(combo_spc_base_left, KC_SPC),
    [CB_SPC_NUM_LEFT] = COMBO(combo_spc_num_left, KC_SPC),
    [CB_SWITCHHANDS_NUM_LEFT] = COMBO(combo_switchhands_num_left, OSL(8)),
    [CB_RALT_OSM_BASE_RIGHT] = COMBO(combo_ralt_osm_base_right, OSM(MOD_RALT)),

    [CB_GUI_SYM_LEFT] =  COMBO(combo_gui_sym_left,  KC_LGUI),
    [CB_GUI_SYM_RIGHT] = COMBO(combo_gui_sym_right, KC_LGUI),
    [CB_ALT_SYM_LEFT] =  COMBO(combo_alt_sym_left,  KC_LALT),
    [CB_ALT_SYM_RIGHT] = COMBO(combo_alt_sym_right, KC_LALT),

    [CB_DUMMY] = COMBO(combo_dummy, KC_ESC),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    // switch(combo_index)
    // {
    //     case CB_ECIRC_SYM_LEFT:
    //     case CB_ECIRC_SYM_RIGHT:
    //         if (pressed) SEND_STRING(SS_TAP(X_DEADCIRC)"e");
    //         break;
    //     case CB_ACIRC_SYM_LEFT:
    //     case CB_ACIRC_SYM_RIGHT:
    //         if (pressed) SEND_STRING(SS_TAP(X_DEADCIRC)"q");
    //         break;
    //     case CB_OCIRC_SYM_LEFT:
    //     case CB_OCIRC_SYM_RIGHT:
    //         if (pressed) SEND_STRING(SS_TAP(X_DEADCIRC)"o");
    //         break;
    //     case CB_ICIRC_SYM_LEFT:
    //     case CB_ICIRC_SYM_RIGHT:
    //         if (pressed) SEND_STRING(SS_TAP(X_DEADCIRC)"i");
    //         break;
    //     case CB_UCIRC_SYM_LEFT:
    //     case CB_UCIRC_SYM_RIGHT:
    //         if (pressed) SEND_STRING(SS_TAP(X_DEADCIRC)"u");
    //         break;
    // }
}

