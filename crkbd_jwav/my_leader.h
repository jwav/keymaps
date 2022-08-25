#pragma once

LEADER_EXTERNS();
void matrix_scan_user(void) 
{
    LEADER_DICTIONARY()
    {
        leading = false;
        leader_end();
        // Replace the sequences below with your own sequences.
        SEQ_ONE_KEY(fU)
        {
            // When I press KC_LEAD and then T, this sends CTRL + SHIFT + T
            SEND_STRING(SS_LCTRL(SS_LSFT("t")));
        }
        // Note: This is not an array, you don't need to put any commas
        // or semicolons between sequences.
        SEQ_TWO_KEYS(fY, fY) 
        {
            SEND_STRING("aaa");
            // When I press KC_LEAD and then N followed by T, this sends CTRL + T
            // SEND_STRING(SS_TAP(X_HOME));
            // SEND_STRING(SS_LSFT(SS_TAP(X_END)));
            // SEND_STRING(SS_LCTL("v"));
        }
    }
}
