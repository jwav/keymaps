#pragma once

// This file is meant to:
// 1. define which combos are enabled
// 2. programmatically determine how many combos there are and pass this value to config.h and my_combos.h

enum combo_events {
    CB_EACU_BASE_RIGHT,
    CB_EGRV_BASE_RIGHT,
    CB_AGRV_BASE_RIGHT,
    CB_CCED_BASE_RIGHT,
    CB_UGRV_BASE_RIGHT,
    CB_ECIRC_SYM_LEFT,
    CB_ACIRC_SYM_LEFT,
    CB_OCIRC_SYM_LEFT,
    CB_ICIRC_SYM_LEFT,
    CB_UCIRC_SYM_LEFT,
    CB_EACU_SYM_RIGHT,
    CB_EGRV_SYM_RIGHT,
    CB_AGRV_SYM_RIGHT,
    CB_CCED_SYM_RIGHT,
    CB_UGRV_SYM_RIGHT,
    CB_EACU_SYM_LEFT,
    CB_EGRV_SYM_LEFT,
    CB_AGRV_SYM_LEFT,
    CB_CCED_SYM_LEFT,
    CB_UGRV_SYM_LEFT,
    CB_ECIRC_SYM_RIGHT,
    CB_ACIRC_SYM_RIGHT,
    CB_OCIRC_SYM_RIGHT,
    CB_ICIRC_SYM_RIGHT,
    CB_UCIRC_SYM_RIGHT,
    CB_DEADCIRC,
    CB_ESC_NUM_LEFT,
    CB_BSP_NUM_LEFT,
    CB_ESC_SYM_LEFT,
    CB_BSP_SYM_LEFT,
    MY_NB_COMBOS // will contain the number of elements in this enum
};

