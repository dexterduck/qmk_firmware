#pragma once

#include QMK_KEYBOARD_H

enum custom_codes {
    KC_UNDERSCORE_INV = SAFE_RANGE,
    KC_COLON_INV,
    KC_OLED_TGL
};

bool invert_shift(uint16_t key);

bool toggle_oled(void);

bool process_custom_codes(uint16_t keycode, keyrecord_t *record);
