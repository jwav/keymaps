#pragma once
#include "my_french_keycode_aliases.h"
#include "my_keypos_aliases.h"


enum combo_events
{
    CB_UGRV_022021,
    CB_DUMMY,
    MY_NB_COMBOS
};
uint16_t COMBO_LEN = MY_NB_COMBOS;


const uint16_t PROGMEM cb_ugrv_022021 = { km022, km021, COMBO_END };


combo_t key_combos[MY_NB_COMBOS] = 
{
    [CB_UGRV_022021] = COMBO_ACTION(cb_ugrv_022021),
};


void process_combo_event(uint16_t combo_index, bool pressed)
{
switch(combo_index) {
    case CB_UGRV_022021:
        if(pressed) tap_code16(fUGRV);
        break;
    }
}

