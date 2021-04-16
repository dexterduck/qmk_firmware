// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#pragma once

#define RGB_DI_PIN D3
#define RGBLIGHT_LAYERS
#define RGBLED_NUM 72
#define RGBLED_SPLIT {36,36}
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_LIMIT_VAL 128
#define RGBLIGHT_SLEEP 1
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL
#define RGBLIGHT_DEFAULT_SPD 0

#define XXX KC_NO
#define OLED_STATES 2


#define LAYOUT_miryoku(\
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09,\
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19,\
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29,\
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39\
)\
LAYOUT(\
TG(GAMEL), KC_1, KC_2, KC_3, KC_4, KC_5,    KC_6, KC_7, KC_8, KC_9, KC_0, RGB_TOG,\
KC_ASTR, K00, K01, K02, K03, K04,                  K05, K06, K07, K08, K09, KC_EQL,\
TD(TD_LR_PARENS), K10, K11, K12, K13, K14,                  K15, K16, K17, K18, K19, KC_UNDERSCORE_INV,\
TD(TD_LR_BRACKET), K20, K21, K22, K23, K24, KC_MUTE,    KC_OLED_TGL, K25, K26, K27, K28, K29, KC_COLON_INV,\
       KC_HYPR, KC_MEH, K32, K33, K34,          K35, K36, K37, KC_MEH, KC_HYPR\
)

#define LED_LAYOUT( \
    L50, L51, L52, L53, L54, L55,             R50, R51, R52, R53, R54, R55,  \
                                                                             \
    L00, L01, L02, L03, L04, L05,             R00, R01, R02, R03, R04, R05,  \
    L10, L11, L12, L13, L14, L15,             R10, R11, R12, R13, R14, R15,  \
    L20, L21, L22, L23, L24, L25,             R20, R21, R22, R23, R24, R25,  \
    L30, L31, L32, L33, L34, L35, L45,   R40, R30, R31, R32, R33, R34, R35,  \
              L40, L41, L42, L43, L44,   R41, R42, R43, R44, R45  \
    ) \
    { \
        L45, \
        L50, L51, L52, L53, L54, L55, \
        L40, L30, L20, L10, L00, \
        L01, L11, L21, L31, L41, L42, \
        L32, L22, L12, L02, \
        L03, L13, L23, L33, L43, L44, \
        L34, L24, L14, L04, \
        L05, L15, L25, L35, \
        R40, \
        R50, R51, R52, R53, R54, R55,  \
        R45, R35, R25, R15, R05, \
        R04, R14, R24, R34, R44, R43, \
        R33, R23, R13, R03, \
        R02, R12, R22, R32, R42, R41, \
        R31, R21, R11, R01, \
        R00, R10, R20, R30, \
    }

#define RGBLIGHT_LED_MAP LED_LAYOUT( \
    34, 33, 32, 31, 30, 29,             65, 66, 67, 68, 69, 70,  \
                                                                 \
    25, 21, 16, 11,  6,  1,             37, 42, 47, 52, 57, 61,  \
    26, 22, 17, 12,  7,  2,             38, 43, 48, 53, 58, 62,  \
    27, 23, 18, 13,  8,  3,             39, 44, 49, 54, 59, 63,  \
    28, 24, 19, 14,  9,  4, 35,     71, 40, 45, 50, 55, 60, 64,  \
            20, 15, 10,  5,  0,     36, 41, 46, 51, 56  \
)
