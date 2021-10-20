// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#pragma once

#define RGB_DI_PIN D3
#define RGBLIGHT_LAYERS
#define RGBLED_NUM 46
#define RGBLED_SPLIT {23,23}
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_LIMIT_VAL 192
#define RGBLIGHT_SLEEP 1
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL
#define RGBLIGHT_DEFAULT_SPD 0

#define XXX KC_NO


#define LAYOUT_miryoku(\
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09,\
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19,\
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29,\
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39\
)\
LAYOUT(\
KC_ASTR,           K00, K01,     K02,    K03, K04,           K05, K06, K07,       K08,     K09, KC_EQL,\
TD(TD_LR_PARENS),  K10, K11,     K12,    K13, K14,           K15, K16, K17,       K18,     K19, KC_UNDERSCORE_INV,\
TD(TD_LR_BRACKET), K20, K21,     K22,    K23, K24,           K25, K26, K27,       K28,     K29, KC_COLON_INV,\
                        KC_HYPR, KC_MEH, K32, K33, K34, K35, K36, K37, TG(GAMEL), RGB_TOG\
)

#define LED_LAYOUT( \
    L00, L01, L02, L03, L04, L05,             R00, R01, R02, R03, R04, R05,  \
    L10, L11, L12, L13, L14, L15,             R10, R11, R12, R13, R14, R15,  \
    L20, L21, L22, L23, L24, L25,             R20, R21, R22, R23, R24, R25,  \
              L30, L31, L32, L33, L34,   R30, R31, R32, R33, R34  \
    ) \
    { \
        L05, L04, L03, L02, L01, L00, \
        L15, L14, L13, L12, L11, L10, \
        L25, L24, L23, L22, L21, L20, \
        L34, L33, L32, L31, L30, \
        R00, R01, R02, R03, R04, R05, \
        R10, R11, R12, R13, R14, R15,  \
        R20, R21, R22, R23, R24, R25,  \
        R30, R31, R32, R33, R34  \
    }

#define RGBLIGHT_LED_MAP LED_LAYOUT( \
     0,  3,  6, 10, 14, 18,         27, 31, 35, 39, 42, 45,  \
     1,  4,  7, 11, 15, 19,         26, 30, 34, 38, 41, 44,  \
     2,  5,  8, 12, 16, 20,         25, 29, 33, 37, 40, 43,  \
             9, 13, 17, 21, 22, 23, 24, 28, 32, 36           \
)
