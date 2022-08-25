#!/bin/env python3

"""generates dictionaries linking keycodes to their resepective output characters"""

UNPARSED_STRING = """
#define FR_SUP2 KC_GRV  // ²
#define FR_AMPR KC_1    // &
#define FR_EACU KC_2    // é
#define FR_DQUO KC_3    // "
#define FR_QUOT KC_4    // '
#define FR_LPRN KC_5    // (
#define FR_MINS KC_6    // -
#define FR_EGRV KC_7    // è
#define FR_UNDS KC_8    // _
#define FR_CCED KC_9    // ç
#define FR_AGRV KC_0    // à
#define FR_RPRN KC_MINS // )
#define FR_EQL  KC_EQL  // =
#define FR_A    KC_Q    // A
#define FR_Z    KC_W    // Z
#define FR_E    KC_E    // E
#define FR_R    KC_R    // R
#define FR_T    KC_T    // T
#define FR_Y    KC_Y    // Y
#define FR_U    KC_U    // U
#define FR_I    KC_I    // I
#define FR_O    KC_O    // O
#define FR_P    KC_P    // P
#define FR_CIRC KC_LBRC // ^ (dead)
#define FR_DLR  KC_RBRC // $
#define FR_Q    KC_A    // Q
#define FR_S    KC_S    // S
#define FR_D    KC_D    // D
#define FR_F    KC_F    // F
#define FR_G    KC_G    // G
#define FR_H    KC_H    // H
#define FR_J    KC_J    // J
#define FR_K    KC_K    // K
#define FR_L    KC_L    // L
#define FR_M    KC_SCLN // M
#define FR_UGRV KC_QUOT // ù
#define FR_ASTR KC_NUHS // *
#define FR_LABK KC_NUBS // <
#define FR_W    KC_Z    // W
#define FR_X    KC_X    // X
#define FR_C    KC_C    // C
#define FR_V    KC_V    // V
#define FR_B    KC_B    // B
#define FR_N    KC_N    // N
#define FR_COMM KC_M    // ,
#define FR_SCLN KC_COMM // ;
#define FR_COLN KC_DOT  // :
#define FR_EXLM KC_SLSH // !
#define FR_1    S(FR_AMPR) // 1
#define FR_2    S(FR_EACU) // 2
#define FR_3    S(FR_DQUO) // 3
#define FR_4    S(FR_QUOT) // 4
#define FR_5    S(FR_LPRN) // 5
#define FR_6    S(FR_MINS) // 6
#define FR_7    S(FR_EGRV) // 7
#define FR_8    S(FR_UNDS) // 8
#define FR_9    S(FR_CCED) // 9
#define FR_0    S(FR_AGRV) // 0
#define FR_DEG  S(FR_RPRN) // °
#define FR_PLUS S(FR_EQL)  // +
#define FR_DIAE S(FR_CIRC) // ¨ (dead)
#define FR_PND  S(FR_DLR)  // £
#define FR_PERC S(FR_UGRV) // %
#define FR_MICR S(FR_ASTR) // µ
#define FR_RABK S(FR_LABK) // >
#define FR_QUES S(FR_COMM) // ?
#define FR_DOT  S(FR_SCLN) // .
#define FR_SLSH S(FR_COLN) // /
#define FR_SECT S(FR_EXLM) // §
#define FR_TILD ALGR(FR_EACU) // ~ (dead)
#define FR_HASH ALGR(FR_DQUO) // #
#define FR_LCBR ALGR(FR_QUOT) // {
#define FR_LBRC ALGR(FR_LPRN) // [
#define FR_PIPE ALGR(FR_MINS) // |
#define FR_GRV  ALGR(FR_EGRV) // ` (dead)
#define FR_BSLS ALGR(FR_UNDS) // (backslash)
#define FR_AT   ALGR(FR_AGRV) // @
#define FR_RBRC ALGR(FR_RPRN) // ]
#define FR_RCBR ALGR(FR_EQL)  // }
#define FR_EURO ALGR(KC_E)   // €
#define FR_CURR ALGR(FR_DLR) // ¤
#define FR_AMP   FR_AMPR
#define FR_APOS  FR_QUOT
#define FR_LESS  FR_LABK
#define FR_OVRR  FR_DEG
#define FR_UMLT  FR_DIAE
#define FR_MU    FR_MICR
#define FR_GRTR  FR_RABK
#define FR_CCIRC FR_CIRC
#define FR_BULT  FR_CURR
#define fSUP2 KC_GRV  // ²
#define fAMPR KC_1    // &
#define fEACU KC_2    // é
#define fDQUO KC_3    // "
#define fQUOT KC_4    // '
#define fLPRN KC_5    // (
#define fMINS KC_6    // -
#define fEGRV KC_7    // è
#define fUNDS KC_8    // _
#define fCCED KC_9    // ç
#define fAGRV KC_0    // à
#define fRPRN KC_MINS // )
#define fEQL  KC_EQL  // =
#define fA    KC_Q    // A
#define fZ    KC_W    // Z
#define fE    KC_E    // E
#define fR    KC_R    // R
#define fT    KC_T    // T
#define fY    KC_Y    // Y
#define fU    KC_U    // U
#define fI    KC_I    // I
#define fO    KC_O    // O
#define fP    KC_P    // P
#define fCIRC KC_LBRC // ^ (dead)
#define fDLR  KC_RBRC // $
#define fQ    KC_A    // Q
#define fS    KC_S    // S
#define fD    KC_D    // D
#define fF    KC_F    // F
#define fG    KC_G    // G
#define fH    KC_H    // H
#define fJ    KC_J    // J
#define fK    KC_K    // K
#define fL    KC_L    // L
#define fM    KC_SCLN // M
#define fUGRV KC_QUOT // ù
#define fASTR KC_NUHS // *
#define fLABK KC_NUBS // <
#define fW    KC_Z    // W
#define fX    KC_X    // X
#define fC    KC_C    // C
#define fV    KC_V    // V
#define fB    KC_B    // B
#define fN    KC_N    // N
#define fCOMM KC_M    // ,
#define fSCLN KC_COMM // ;
#define fCOLN KC_DOT  // :
#define fEXLM KC_SLSH // !
#define f1    S(FR_AMPR) // 1
#define f2    S(FR_EACU) // 2
#define f3    S(FR_DQUO) // 3
#define f4    S(FR_QUOT) // 4
#define f5    S(FR_LPRN) // 5
#define f6    S(FR_MINS) // 6
#define f7    S(FR_EGRV) // 7
#define f8    S(FR_UNDS) // 8
#define f9    S(FR_CCED) // 9
#define f0    S(FR_AGRV) // 0
#define fDEG  S(FR_RPRN) // °
#define fPLUS S(FR_EQL)  // +
#define fDIAE S(FR_CIRC) // ¨ (dead)
#define fPND  S(FR_DLR)  // £
#define fPERC S(FR_UGRV) // %
#define fMICR S(FR_ASTR) // µ
#define fRABK S(FR_LABK) // >
#define fQUES S(FR_COMM) // ?
#define fDOT  S(FR_SCLN) // .
#define fSLSH S(FR_COLN) // /
#define fSECT S(FR_EXLM) // §
#define fTILD ALGR(FR_EACU) // ~ (dead)
#define fHASH ALGR(FR_DQUO) // #
#define fLCBR ALGR(FR_QUOT) // {
#define fLBRC ALGR(FR_LPRN) // [
#define fPIPE ALGR(FR_MINS) // |
#define fGRV  ALGR(FR_EGRV) // ` (dead)
#define fBSLS ALGR(FR_UNDS) // (backslash)
#define fAT   ALGR(FR_AGRV) // @
#define fRBRC ALGR(FR_RPRN) // ]
#define fRCBR ALGR(FR_EQL)  // }
#define fEURO ALGR(KC_E)   // €
#define fCURR ALGR(FR_DLR) // ¤
#define fAMP   FR_AMPR
#define fAPOS  FR_QUOT
#define fLESS  FR_LABK
#define fOVRR  FR_DEG
#define fUMLT  FR_DIAE
#define fMU    FR_MICR
#define fGRTR  FR_RABK
#define fCCIRC FR_CIRC
#define fBULT  FR_CURR
"""

keycode_to_char_dict = {}
char_to_keycode_dict = {}

def generate_dicts():
    global keycode_to_char_dict
    global char_to_keycode_dict
    keycode_to_char_dict = {}
    char_to_keycode_dict = {}

    for line in UNPARSED_STRING.split("\n"):
        try:
            print(line)
            parts = [x.strip() for x in line.split(" ")]
            # print( [x for x in line.split(" ")])
            # print(f"{parts:}")
            if len(parts) < 5:
                continue
            keycode = parts[1]
            comment_pos = parts.index("//")
            character = parts[comment_pos + 1]
            keycode_to_char_dict[keycode] = character
            print(keycode,character)
        except Exception as ex:
            print(ex)
            continue

    char_to_keycode_dict = {v:k for k,v in zip(keycode_to_char_dict.keys(), keycode_to_char_dict.values())}

char_to_keycode_dict = {v:k for k,v in zip(keycode_to_char_dict.keys(), keycode_to_char_dict.values())}

if __name__ == "__main__":
    import yaml
    generate_dicts()
    print(yaml.dump(keycode_to_char_dict))
    print(yaml.dump(char_to_keycode_dict))


