#pragma once
#include "my_french_keycode_aliases.h"
#include "my_keypos_aliases.h"


enum combo_events
{
    CB_EACU_BASE_RIGHT,
    CB_EGRV_BASE_RIGHT,
    CB_AGRV_BASE_RIGHT,
    CB_CCED_BASE_RIGHT,
    CB_UGRV_BASE_RIGHT,
    CB_DUMMY,
    MY_NB_COMBOS
};
uint16_t COMBO_LEN = MY_NB_COMBOS;


const uint16_t PROGMEM cb_eacu_base_right = { km023, km024, COMBO_END };
const uint16_t PROGMEM cb_egrv_base_right = { km022, km023, COMBO_END };
const uint16_t PROGMEM cb_agrv_base_right = { km024, km022, COMBO_END };
const uint16_t PROGMEM cb_cced_base_right = { km025, km021, COMBO_END };
const uint16_t PROGMEM cb_ugrv_base_right = { km022, km021, COMBO_END };


combo_t key_combos[MY_NB_COMBOS] = 
{
    [CB_EACU_BASE_RIGHT] = COMBO_ACTION(cb_eacu_base_right),
    [CB_EGRV_BASE_RIGHT] = COMBO_ACTION(cb_egrv_base_right),
    [CB_AGRV_BASE_RIGHT] = COMBO_ACTION(cb_agrv_base_right),
    [CB_CCED_BASE_RIGHT] = COMBO_ACTION(cb_cced_base_right),
    [CB_UGRV_BASE_RIGHT] = COMBO_ACTION(cb_ugrv_base_right),
};


void process_combo_event(uint16_t combo_index, bool pressed)
{
switch(combo_index) {
    case CB_EACU_BASE_RIGHT:
        if(pressed) tap_code16(fEACU);
        break;
    case CB_EGRV_BASE_RIGHT:
        if(pressed) tap_code16(fEGRV);
        break;
    case CB_AGRV_BASE_RIGHT:
        if(pressed) tap_code16(fAGRV);
        break;
    case CB_CCED_BASE_RIGHT:
        if(pressed) tap_code16(fCCED);
        break;
    case CB_UGRV_BASE_RIGHT:
        if(pressed) tap_code16(fUGRV);
        break;
    }
}

