// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#include QMK_KEYBOARD_H
#include "config.h"
#include "oled.c"
#include "encoder.c"
#include "lighting.c"

void keyboard_post_init_user(void) {
    init_user_eeprom();
    lighting_init();
}


qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_LR_PARENS] = TAP_PARENS_FN,
    [TD_LR_BRACKET] = TAP_BRACKET_FN
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return process_custom_codes(keycode, record);
}

