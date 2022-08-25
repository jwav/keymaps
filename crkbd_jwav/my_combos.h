// NOTE: I voluntarily disabled the include guard
// because if this file is included more than once
// I need to know about it.
#pragma once

#include "my_french_keycode_aliases.h"
#include "my_keypos_aliases.h"
// #include "my_combos_definitions.h"

//TODO: sort these CB_* enums into something more orderly

enum combo_events {
    CB_LEADER_BASE,

    CB_EACU_BASE_RIGHT,
    CB_EGRV_BASE_RIGHT,
    CB_AGRV_BASE_RIGHT,
    CB_CCED_BASE_RIGHT,
    CB_UGRV_BASE_RIGHT,
    CB_UGRV_BASE_RIGHT_BIS,

    // experimental, does not work yet
    CB_EACU_MAJ,

    CB_ECIRC_BASE_RIGHT,
    CB_CTLBSP_BASE,

    CB_ESC_BASE_LEFT,
    CB_ESC_BASE_RIGHT,
    CB_ESC_BASE_BIS,
    CB_DEADCIRC_BASE_RIGHT,
    CB_DEADCIRC_BASE_LEFT,

    CB_CTLTAB_BASE,
    CB_CTLSFTTAB_BASE,
    CB_CTLW_BASE,
    CB_ALTTAB_BASE,
    CB_ALTSFTTAB_BASE,
    CB_ALTTAB_BASE_BIS,

    CB_CTLTAB_BASE_RIGHT,
    CB_CTLSFTTAB_BASE_RIGHT,
    CB_CTLW_BASE_RIGHT,

    CB_TAB_BASE,
    CB_SFTTAB_BASE,


    CB_ESC_NUM_LEFT,
    CB_BSP_NUM_LEFT,
    CB_CTLBSP_NUM_LEFT,
    CB_DEL_NUM_LEFT,
    CB_COLON_NUM_LEFT,
    CB_LPRN_NUM_LEFT,
    CB_RPRN_NUM_LEFT,
    CB_LBRC_NUM_LEFT,
    CB_RBRC_NUM_LEFT,
    CB_DF0_NUM_RIGHT,
    CB_DOWN_NUM_LEFT,
    CB_UP_NUM_LEFT,
    CB_EQL_NUM_LEFT,
    CB_COMMA_NUM_LEFT,

    CB_ESC_SYM_LEFT,
    CB_BSP_SYM_LEFT,
    CB_ESC_SYM_RIGHT,
    CB_BSP_SYM_RIGHT,
    CB_ENT_BASE_RIGHT,
    CB_ENT_BASE_RIGHT_BIS,
    CB_SPC_BASE_LEFT,
    CB_SPC_NUM_LEFT,
    CB_SWITCHNUM_NUM_LEFT,
    CB_SWITCHHANDS_BASE_LEFT,
    CB_SWITCHHANDS_BASE_RIGHT,
    CB_PLAY_BASE_LEFT,
    CB_RALT_OSM_BASE_RIGHT,
    CB_MSWHUP_BASE_RIGHT,
    CB_MSWHDOWN_BASE_RIGHT,
    CB_MSWHLEFT_BASE_RIGHT,
    CB_MSWHRIGHT_BASE_RIGHT,
    CB_LEFTCLICK_BASE_LEFT, // supremely useful when using the touchpad with the right hand!

    CB_GUI_SYM_LEFT,
    CB_CTL_SYM_LEFT,
    CB_ALT_SYM_LEFT,
    CB_GUI_SYM_RIGHT,
    CB_CTL_SYM_RIGHT,
    CB_ALT_SYM_RIGHT,

    CB_VOLD_SYM_RIGHT,
    CB_VOLU_SYM_RIGHT,

    CB_APP_BASE_RIGHT,
    CB_DUMMY, // I don't know why, but adding this dummy combo at the end prevents the "combo characters repeat themselves when pressed only once" bug
    MY_NB_COMBOS // will contain the number of elements in this enum
};

uint16_t COMBO_LEN = MY_NB_COMBOS;

const uint16_t PROGMEM combo_leader_base[] = {KC_E, KC_I, COMBO_END};
// BASE LAYER - RIGHT SIDE
const uint16_t PROGMEM combo_eacu_base_right[] = {km013, km014, COMBO_END};
const uint16_t PROGMEM combo_egrv_base_right[] = {km012, km013, COMBO_END};
const uint16_t PROGMEM combo_agrv_base_right[] = {km014, km012, COMBO_END};
// const uint16_t PROGMEM combo_cced_base_right[] = {km015, km014, COMBO_END};
const uint16_t PROGMEM combo_cced_base_right[] = {km011, km014, COMBO_END};
const uint16_t PROGMEM combo_ugrv_base_right[] = {km011, km012, COMBO_END};

const uint16_t PROGMEM combo_ugrv_base_right_bis[] = {km001, km004, COMBO_END};

const uint16_t PROGMEM combo_ecirc_base_right[] = {km002, km003, km004, COMBO_END};




// const uint16_t PROGMEM combo_eacu_base_right[] = {SFT(km013), SFT(km014), COMBO_END};
// const uint16_t PROGMEM combo_eacu_maj[] = {LSFT(km013), LSFT(km014), COMBO_END};
const uint16_t PROGMEM combo_eacu_maj[] = {FR_O, FR_J, COMBO_END};


/////////////////

const uint16_t PROGMEM combo_deadcirc_base_right[] = {km004, km002, COMBO_END};



const uint16_t PROGMEM combo_deadcirc_base_left[] = {k004, k002, COMBO_END};
const uint16_t PROGMEM combo_esc_base_right[] = {km002, km003, COMBO_END}; // 


// const uint16_t PROGMEM combo_switchhands_base_left[] = {k014, k015, COMBO_END};
// const uint16_t PROGMEM combo_switchhands_base_left[] = {k014, k002, COMBO_END};
const uint16_t PROGMEM combo_switchhands_base_left[] = {k002, k014, COMBO_END};

const uint16_t PROGMEM combo_switchhands_base_right[] = {km014, km015, COMBO_END};
const uint16_t PROGMEM combo_ralt_osm_base_right[] = {km021, km024, COMBO_END};
const uint16_t PROGMEM combo_app_base_right[] = {km021, km011, COMBO_END};

const uint16_t PROGMEM combo_mswhup_base_right[] = {km003, km013, COMBO_END};
const uint16_t PROGMEM combo_mswhdown_base_right[] = {km004, km014, COMBO_END};
const uint16_t PROGMEM combo_mswhleft_base_right[] = {km005, km015, COMBO_END};
const uint16_t PROGMEM combo_mswhright_base_right[] = {km002, km012, COMBO_END};




const uint16_t PROGMEM combo_ctltab_base_right[] =    {KC_NO, KC_NO, COMBO_END};
const uint16_t PROGMEM combo_ctlsfttab_base_right[] = {KC_NO, KC_NO, COMBO_END};
const uint16_t PROGMEM combo_ctlw_base_right[] =      {KC_NO, KC_NO, COMBO_END};

const uint16_t PROGMEM combo_tab_base[] =      {km020, km025, COMBO_END};
const uint16_t PROGMEM combo_sfttab_base[] =      {km020, km024, COMBO_END};
const uint16_t PROGMEM combo_ent_base_right[] = {km020, km024, COMBO_END};


const uint16_t PROGMEM combo_ctltab_base[] =    {k023, k024, COMBO_END};
const uint16_t PROGMEM combo_ctlsfttab_base[] = {k022, k023, COMBO_END};
const uint16_t PROGMEM combo_ctlw_base[] = {k022, k024, COMBO_END};
const uint16_t PROGMEM combo_alttab_base[] =    {km022, km023, COMBO_END};
const uint16_t PROGMEM combo_altsfttab_base[] = {km023, km024, COMBO_END};
const uint16_t PROGMEM combo_alttab_base_bis[] =    {k024, k025, COMBO_END};
// const uint16_t PROGMEM combo_ent_base_right_bis[] = {km022, km024, COMBO_END};
const uint16_t PROGMEM combo_ent_base_right_bis[] = {km003, km004, COMBO_END};


// const uint16_t PROGMEM combo_ctlbsp_base[] = {km003, km004, COMBO_END};
const uint16_t PROGMEM combo_ctlbsp_base[] = {k002, k003, k004, COMBO_END};

// BASE LAYER - LEFT SIDE
const uint16_t PROGMEM combo_esc_base_left[] = {k002, k003, COMBO_END};
const uint16_t PROGMEM combo_spc_base_left[] = {k001, k004, COMBO_END};
const uint16_t PROGMEM combo_esc_base_bis[] = {k022, k023, COMBO_END};
const uint16_t PROGMEM combo_play_base_left[] = {k004, k014, COMBO_END};
const uint16_t PROGMEM combo_leftclick_base_left[] = {k004, k005, COMBO_END};

// NUM LAYER
// esc currently overridden by cb_lbrc_num_left
const uint16_t PROGMEM combo_esc_num_left[] = {k222, k223, COMBO_END};
const uint16_t PROGMEM combo_spc_num_left[] = {k212, k214, COMBO_END};
const uint16_t PROGMEM combo_bsp_num_left[] = {k202, k203, COMBO_END};
const uint16_t PROGMEM combo_ctlbsp_num_left[] = {k202, k203, k204, COMBO_END};
const uint16_t PROGMEM combo_del_num_left[] = {k204, k203, COMBO_END};
const uint16_t PROGMEM combo_colon_num_left[] = {k202, k204, COMBO_END};
const uint16_t PROGMEM combo_lprn_num_left[] = {k212, k213, COMBO_END};
const uint16_t PROGMEM combo_rprn_num_left[] = {k213, k214, COMBO_END};
const uint16_t PROGMEM combo_lbrc_num_left[] = {k222, k223, COMBO_END};
const uint16_t PROGMEM combo_rbrc_num_left[] = {k223, k224, COMBO_END};

const uint16_t PROGMEM combo_df0_num_right[] = {km224, km225, COMBO_END};
const uint16_t PROGMEM combo_down_num_left[] = {k213, k223, COMBO_END};
const uint16_t PROGMEM combo_up_num_left[] =   {k203, k213, COMBO_END};
const uint16_t PROGMEM combo_eql_num_left[] =   {k222, k224, COMBO_END};
const uint16_t PROGMEM combo_comma_num_left[] =   {k211, k214, COMBO_END};

// SYM LAYER
const uint16_t PROGMEM combo_esc_sym_left[] = {k102, k104, COMBO_END};
const uint16_t PROGMEM combo_bsp_sym_left[] = {k102, k103, COMBO_END};
const uint16_t PROGMEM combo_esc_sym_right[] = {km102, km104, COMBO_END};
const uint16_t PROGMEM combo_bsp_sym_right[] = {km102, km103, COMBO_END};
const uint16_t PROGMEM cb_switchnum_num_left[] = {k214, k215, COMBO_END};


const uint16_t PROGMEM combo_gui_sym_left[] =  { k121,  k122, COMBO_END};
const uint16_t PROGMEM combo_ctl_sym_left[] =  { k122,  k123, COMBO_END};
const uint16_t PROGMEM combo_alt_sym_left[] =  { k123,  k124, COMBO_END};
const uint16_t PROGMEM combo_gui_sym_right[] = {km121, km122, COMBO_END};
const uint16_t PROGMEM combo_ctl_sym_right[] = {km122, km123, COMBO_END};
const uint16_t PROGMEM combo_alt_sym_right[] = {km123, km124, COMBO_END};

const uint16_t PROGMEM combo_vold_sym_right[] = {km113, km114, COMBO_END};
const uint16_t PROGMEM combo_volu_sym_right[] = {km112, km113, COMBO_END};

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

    [CB_LEADER_BASE] = COMBO(combo_leader_base, KC_LEAD),

    [CB_EACU_BASE_RIGHT] = COMBO(combo_eacu_base_right, fEACU),
    [CB_EGRV_BASE_RIGHT] = COMBO(combo_egrv_base_right, fEGRV),
    [CB_AGRV_BASE_RIGHT] = COMBO(combo_agrv_base_right, fAGRV),
    [CB_CCED_BASE_RIGHT] = COMBO(combo_cced_base_right, fCCED), 
    [CB_UGRV_BASE_RIGHT] = COMBO(combo_ugrv_base_right, fUGRV),
    [CB_UGRV_BASE_RIGHT_BIS] = COMBO(combo_ugrv_base_right_bis, fUGRV),
    [CB_ECIRC_BASE_RIGHT] = COMBO_ACTION(combo_ecirc_base_right),


    [CB_EACU_MAJ] = COMBO_ACTION(combo_eacu_maj),

    [CB_ESC_BASE_LEFT] = COMBO(combo_esc_base_left, KC_ESC),
    [CB_ESC_BASE_BIS] = COMBO(combo_esc_base_bis, KC_ESC),
    [CB_ESC_BASE_RIGHT] = COMBO(combo_esc_base_right, KC_ESC),
    [CB_DEADCIRC_BASE_RIGHT] = COMBO(combo_deadcirc_base_right, fCIRC),
    [CB_DEADCIRC_BASE_LEFT] = COMBO(combo_deadcirc_base_left, fCIRC),


    [CB_CTLBSP_BASE] = COMBO(combo_ctlbsp_base, LCTL(KC_BSPC)),

    [CB_CTLTAB_BASE] =    COMBO(combo_ctltab_base, LCTL(KC_TAB)),
    [CB_CTLSFTTAB_BASE] = COMBO(combo_ctlsfttab_base, LCTL(LSFT(KC_TAB))),
    [CB_CTLW_BASE] = COMBO(combo_ctlw_base, LCTL(FR_W)),
    [CB_ALTTAB_BASE] =    COMBO(combo_alttab_base, LALT(KC_TAB)),
    [CB_ALTSFTTAB_BASE] = COMBO(combo_altsfttab_base, LALT(LSFT(KC_TAB))),
    [CB_ALTTAB_BASE_BIS] =    COMBO(combo_alttab_base_bis, LALT(KC_TAB)),

    [CB_CTLTAB_BASE_RIGHT] =    COMBO(combo_ctltab_base_right, LCTL(KC_TAB)),
    [CB_CTLSFTTAB_BASE_RIGHT] = COMBO(combo_ctlsfttab_base_right, LCTL(LSFT(KC_TAB))),
    [CB_CTLW_BASE_RIGHT] = COMBO(combo_ctlw_base_right, LCTL(FR_W)),
    [CB_TAB_BASE] = COMBO(combo_tab_base, KC_TAB),
    [CB_SFTTAB_BASE] = COMBO(combo_sfttab_base, LSFT(KC_TAB)),

    [CB_ESC_NUM_LEFT] = COMBO(combo_esc_num_left, KC_ESC),
    [CB_BSP_NUM_LEFT] = COMBO(combo_bsp_num_left, KC_BSPC),
    [CB_CTLBSP_NUM_LEFT] = COMBO(combo_ctlbsp_num_left, LCTL(KC_BSPC)),
    [CB_DEL_NUM_LEFT] = COMBO(combo_del_num_left, KC_DEL),
    [CB_COLON_NUM_LEFT] = COMBO(combo_colon_num_left, fCOLN),
    [CB_LPRN_NUM_LEFT] = COMBO(combo_lprn_num_left, fLPRN),
    [CB_RPRN_NUM_LEFT] = COMBO(combo_rprn_num_left, fRPRN),
    [CB_LBRC_NUM_LEFT] = COMBO(combo_lbrc_num_left, fLBRC),
    [CB_RBRC_NUM_LEFT] = COMBO(combo_rbrc_num_left, fRBRC),
    [CB_DF0_NUM_RIGHT] = COMBO(combo_df0_num_right, DF(0)),

    [CB_DOWN_NUM_LEFT] = COMBO(combo_down_num_left, KC_DOWN),
    [CB_UP_NUM_LEFT] =   COMBO(combo_up_num_left, KC_UP),
    [CB_EQL_NUM_LEFT] =   COMBO(combo_eql_num_left, fEQL),
    [CB_COMMA_NUM_LEFT] =   COMBO(combo_comma_num_left, fCOMM),

    [CB_ESC_SYM_LEFT] = COMBO(combo_esc_sym_left, KC_ESC),
    [CB_BSP_SYM_LEFT] = COMBO(combo_bsp_sym_left, KC_BSPC),
    [CB_ESC_SYM_RIGHT] = COMBO(combo_esc_sym_right, KC_ESC),
    [CB_BSP_SYM_RIGHT] = COMBO(combo_bsp_sym_right, KC_BSPC),
    [CB_ENT_BASE_RIGHT] = COMBO(combo_ent_base_right, KC_ENT),
    [CB_ENT_BASE_RIGHT_BIS] = COMBO(combo_ent_base_right_bis, KC_ENT),
    [CB_SPC_BASE_LEFT] = COMBO(combo_spc_base_left, KC_SPC),
    [CB_SPC_NUM_LEFT] = COMBO(combo_spc_num_left, KC_SPC),
    [CB_SWITCHNUM_NUM_LEFT] = COMBO(cb_switchnum_num_left, DF(7)),
    [CB_SWITCHHANDS_BASE_LEFT] = COMBO(combo_switchhands_base_left, OSL(8)),
    [CB_SWITCHHANDS_BASE_RIGHT] = COMBO(combo_switchhands_base_right, OSL(8)),
    [CB_PLAY_BASE_LEFT] = COMBO(combo_play_base_left, KC_MPLY),

    [CB_RALT_OSM_BASE_RIGHT] = COMBO(combo_ralt_osm_base_right, OSM(MOD_RALT)),

    [CB_MSWHUP_BASE_RIGHT] = COMBO(combo_mswhup_base_right, KC_MS_WH_UP),
    [CB_MSWHDOWN_BASE_RIGHT] = COMBO(combo_mswhdown_base_right, KC_MS_WH_DOWN),
    [CB_MSWHLEFT_BASE_RIGHT] = COMBO(combo_mswhleft_base_right, KC_MS_WH_LEFT),
    [CB_MSWHRIGHT_BASE_RIGHT] = COMBO(combo_mswhright_base_right, KC_MS_WH_RIGHT),
    [CB_LEFTCLICK_BASE_LEFT] = COMBO(combo_leftclick_base_left, KC_MS_BTN1),
    
    // "left click" key is called KC_APP
    [CB_APP_BASE_RIGHT] = COMBO(combo_app_base_right, KC_APP),

    [CB_GUI_SYM_LEFT] =  COMBO(combo_gui_sym_left,  KC_LGUI),
    [CB_CTL_SYM_LEFT] =  COMBO(combo_ctl_sym_left,  KC_LCTL),
    [CB_ALT_SYM_LEFT] =  COMBO(combo_alt_sym_left,  KC_LALT),

    [CB_GUI_SYM_RIGHT] = COMBO(combo_gui_sym_right, KC_RGUI),
    [CB_CTL_SYM_RIGHT] =  COMBO(combo_ctl_sym_right,  KC_RCTL),
    [CB_ALT_SYM_RIGHT] = COMBO(combo_alt_sym_right, KC_LALT),


    [CB_VOLD_SYM_RIGHT] = COMBO(combo_vold_sym_right, KC_VOLD),
    [CB_VOLU_SYM_RIGHT] = COMBO(combo_volu_sym_right, KC_VOLU),

    [CB_DUMMY] = COMBO(combo_dummy, KC_ESC),
};

// /*
#define X_DEADCIRC X_LBRC
void process_combo_event(uint16_t combo_index, bool pressed)
{
    // const uint8_t mods = get_mods();
    // const bool ctrl_held = (mods & MOD_MASK_CTRL) != 0;
    // const bool shift_down = (mods & MOD_MASK_SHIFT) != 0;

    switch(combo_index)
    {
        // case CB_ECIRC_SYM_LEFT:
        // case CB_ECIRC_SYM_RIGHT:
        case CB_ECIRC_BASE_RIGHT:
            if (pressed)
                SEND_STRING( SS_TAP(X_DEADCIRC)"e");
                // SEND_STRING( SS_TAP(X_DEADCIRC)"e");
            break;
        // case CB_ACIRC_SYM_LEFT:
        // case CB_ACIRC_SYM_RIGHT:
        //     if (pressed) SEND_STRING(SS_TAP(X_DEADCIRC)"q");
        //     break;
        // case CB_OCIRC_SYM_LEFT:
        // case CB_OCIRC_SYM_RIGHT:
        //     if (pressed) SEND_STRING(SS_TAP(X_DEADCIRC)"o");
        //     break;
        // case CB_ICIRC_SYM_LEFT:
        // case CB_ICIRC_SYM_RIGHT:
        //     if (pressed) SEND_STRING(SS_TAP(X_DEADCIRC)"i");
        //     break;
        // case CB_UCIRC_SYM_LEFT:
        // case CB_UCIRC_SYM_RIGHT:
        //     if (pressed) SEND_STRING(SS_TAP(X_DEADCIRC)"u");
        //     break;
        case CB_EACU_MAJ:
            if (pressed)
                SEND_STRING("mlkj");
                // tap_code(KC_CAPS);tap_code(fEACU);tap_code(KC_CAPS);
            break;

        default:
            break;
    }
}
// */

