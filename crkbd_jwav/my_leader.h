#pragma once

LEADER_EXTERNS();

void my_select_whole_line(void)
{
    SEND_STRING(SS_TAP(X_HOME));
    SEND_STRING(SS_LSFT(SS_TAP(X_END)));
}

void my_select_text_till_end(void)
{
    SEND_STRING(SS_LSFT(SS_TAP(X_END)));
}

void my_select_text_till_word_end(void)
{
    SEND_STRING(SS_LSFT(SS_LCTL(SS_TAP(X_RIGHT))));
}

void my_select_words_forward(int nbwords)
{
    for(int i=0; i < nbwords; i++)
        SEND_STRING(SS_LSFT(SS_LCTL(SS_TAP(X_RIGHT))));
}

void my_select_text_till_word_beginning(void)
{
    SEND_STRING(SS_LSFT(SS_LCTL(SS_TAP(X_LEFT))));
}

void my_select_text_till_beginning(void)
{
    SEND_STRING(SS_LSFT(SS_TAP(X_HOME)));
}

void my_select_word(void)
{
    SEND_STRING(SS_LCTL(SS_TAP(X_LEFT)));
    SEND_STRING(SS_LSFT(SS_LCTL(SS_TAP(X_RIGHT))));
}

// it's not like just passing an int, but I don't have time to
// unravel this macro hell
// void my_capslock_oneshot(int keycode)
// {
//     SEND_STRING(SS_TAP(X_CAPS));
//     SEND_STRING(SS_TAP(keycode));
//     SEND_STRING(SS_TAP(X_CAPS));
// }

void matrix_scan_user(void) 
{
    LEADER_DICTIONARY()
    {
        leading = false;
        leader_end();
        // Replace the sequences below with your own sequences.
        
        SEQ_TWO_KEYS(fA, fZ)
        {
            layer_move(0);
        }
        SEQ_TWO_KEYS(fA, fS)
        {
            layer_move(9);
        }
        SEQ_TWO_KEYS(fE, fA)
        {
            SEND_STRING(SS_TAP(X_CAPS));
            SEND_STRING(SS_TAP(X_2));
            SEND_STRING(SS_TAP(X_CAPS));
        }
        SEQ_TWO_KEYS(fE, fG)
        {
            SEND_STRING(SS_TAP(X_CAPS));
            SEND_STRING(SS_TAP(X_7));
            SEND_STRING(SS_TAP(X_CAPS));
        }
        SEQ_TWO_KEYS(fA, fG)
        {
            SEND_STRING(SS_TAP(X_CAPS));
            SEND_STRING(SS_TAP(X_0));
            SEND_STRING(SS_TAP(X_CAPS));
            SEND_STRING(SS_TAP(X_SPC));
        }
        // SEQ_TWO_KEYS(fU, fG)
        // {
        //     SEND_STRING(SS_TAP(X_QUOT)); //fUGRV == KC_QUOT
        // }
        // SEQ_TWO_KEYS(fO, fU)
        // {
        //     SEND_STRING(SS_TAP(X_O));
        //     SEND_STRING(SS_TAP(X_QUOT)); //fUGRV == KC_QUOT
        // }
        SEQ_ONE_KEY(fC)
        {
            SEND_STRING(SS_TAP(X_CAPS));
            SEND_STRING(SS_TAP(X_9));
            SEND_STRING(SS_TAP(X_CAPS));
        }
        // save current selection in ctrl group 0,
        // queue one villager,
        // then go back to the selection
        SEQ_ONE_KEY(fQ)
        {
            SEND_STRING(SS_LCTL(SS_TAP(X_P0)));
            SEND_STRING(SS_DELAY(20));
            SEND_STRING(SS_TAP(X_H));
            SEND_STRING(SS_DELAY(20));
            SEND_STRING(SS_TAP(X_A));
            SEND_STRING(SS_DELAY(20));
            SEND_STRING(SS_LALT(SS_TAP(X_P0)));
        }
        SEQ_ONE_KEY(fA)
        {
            SEND_STRING(SS_LCTL(SS_TAP(X_P0)));
            SEND_STRING(SS_DELAY(20));
            SEND_STRING(SS_TAP(X_H));
            SEND_STRING(SS_DELAY(20));
            SEND_STRING(SS_LSFT(SS_TAP(X_A)));
            SEND_STRING(SS_DELAY(20));
            SEND_STRING(SS_LALT(SS_TAP(X_P0)));
        }
        SEQ_ONE_KEY(fU)
        {
            SEND_STRING(SS_LCTL("w")); // "w" is azerty for "z"
        }
        // SEQ_TWO_KEYS(fE, fU)
        // {
        //     SEND_STRING(SS_RALT("e")); // €
        // }
        SEQ_TWO_KEYS(fV, fZ)
        {
            SEND_STRING(SS_LSFT(SS_TAP(X_END)));
        }
        SEQ_TWO_KEYS(fV, fA)
        {
            my_select_text_till_beginning();
        }
        SEQ_TWO_KEYS(fV, fW)
        {
            my_select_word();
        }
        SEQ_TWO_KEYS(fV, fE)
        {
            my_select_text_till_word_end();
        }
        SEQ_THREE_KEYS(fV, fE, fE)
        {
            my_select_words_forward(2);
        }
        SEQ_TWO_KEYS(fV, fB)
        {
            my_select_text_till_word_beginning();
        }
        SEQ_TWO_KEYS(fD, fW)
        {
            my_select_word();
            SEND_STRING(SS_TAP(X_DEL));
        }
        SEQ_TWO_KEYS(fD, fE)
        {
            my_select_text_till_word_end();
            SEND_STRING(SS_TAP(X_DEL));
        }
        SEQ_TWO_KEYS(fD, fB)
        {
            my_select_text_till_word_beginning();
            SEND_STRING(SS_TAP(X_DEL));
        }
        SEQ_TWO_KEYS(fV, fV)
        {
            my_select_whole_line();
        }
        SEQ_TWO_KEYS(fY, fY) 
        {
            my_select_whole_line();
            SEND_STRING(SS_LCTL("c"));
            SEND_STRING(SS_TAP(X_RIGHT));
        }
        SEQ_TWO_KEYS(fY, fW) 
        {
            my_select_word();
            SEND_STRING(SS_LCTL("c"));
            SEND_STRING(SS_TAP(X_LEFT));
        }
        SEQ_TWO_KEYS(fC, fW) 
        {
            my_select_word();
            SEND_STRING(SS_LCTL("x"));
            SEND_STRING(SS_TAP(X_LEFT));
        }
        SEQ_TWO_KEYS(fD, fD) 
        {
            my_select_whole_line();
            SEND_STRING(SS_TAP(X_DEL));
            SEND_STRING(SS_TAP(X_DEL));
        }
        SEQ_TWO_KEYS(fC, fD) 
        {
            my_select_whole_line();
            SEND_STRING(SS_TAP(X_DEL));
        }
        SEQ_TWO_KEYS(fD, fZ) 
        {
            my_select_text_till_end();
            SEND_STRING(SS_TAP(X_DEL));
        }
        SEQ_TWO_KEYS(fD, fA) 
        {
            my_select_text_till_beginning();
            SEND_STRING(SS_TAP(X_DEL));
        }
        SEQ_TWO_KEYS(fC, fC) 
        {
            my_select_whole_line();
            SEND_STRING(SS_LCTL("x"));
            SEND_STRING(SS_TAP(X_DEL));
        }
        SEQ_TWO_KEYS(fC, fZ) 
        {
            my_select_text_till_end();
            SEND_STRING(SS_LCTL("x"));
        }
        SEQ_TWO_KEYS(fC, fA) 
        {
            SEND_STRING(SS_TAP(X_CAPS));
            SEND_STRING(SS_TAP(X_9));
            SEND_STRING(SS_TAP(X_CAPS));
            SEND_STRING(SS_TAP(X_Q));
            SEND_STRING(SS_TAP(X_SPC));
        }
        SEQ_THREE_KEYS(fC, fA, KC_SPC)
        {
            SEND_STRING(SS_TAP(X_CAPS));
            SEND_STRING(SS_TAP(X_9));
            SEND_STRING(SS_TAP(X_CAPS));
            SEND_STRING(SS_TAP(X_Q));
            SEND_STRING(SS_TAP(X_SPC));
        }
        SEQ_TWO_KEYS(fP, fU) 
        {
            SEND_STRING(SS_TAP(X_HOME));
            SEND_STRING(SS_TAP(X_ENT));
            SEND_STRING(SS_TAP(X_UP));
            SEND_STRING(SS_LCTL("v"));
        }
        SEQ_TWO_KEYS(fP, fD) 
        {
            SEND_STRING(SS_TAP(X_END));
            SEND_STRING(SS_TAP(X_ENT));
            SEND_STRING(SS_LCTL("v"));
        }
        SEQ_TWO_KEYS(fO, fJ) 
        {
            SEND_STRING(SS_TAP(X_END));
            SEND_STRING(SS_TAP(X_ENT));
        }
        SEQ_TWO_KEYS(fO, fK) 
        {
            SEND_STRING(SS_TAP(X_HOME));
            SEND_STRING(SS_TAP(X_ENT));
            SEND_STRING(SS_TAP(X_UP));
        }
        SEQ_TWO_KEYS(fG, fG) 
        {
            SEND_STRING(SS_LCTL(SS_TAP(X_HOME)));
        }
        SEQ_TWO_KEYS(fG, fB)
        {
            SEND_STRING(SS_LCTL(SS_TAP(X_END)));
        }
        SEQ_TWO_KEYS(fG, fA)
        {
            SEND_STRING(SS_TAP(X_HOME));
        }
        SEQ_TWO_KEYS(fG, fZ)
        {
            SEND_STRING(SS_TAP(X_END));
        }
    }
}
