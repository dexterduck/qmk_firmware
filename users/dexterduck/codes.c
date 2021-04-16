#include "codes.h"
#include "eeprom.h"

bool invert_shift(uint16_t key) {
    const uint8_t LEFT_SHIFT = keyboard_report->mods & MOD_BIT(KC_LSFT);
	const uint8_t RGHT_SHIFT = keyboard_report->mods & MOD_BIT(KC_RSFT);
	const uint8_t SHIFTED = LEFT_SHIFT | RGHT_SHIFT;
	if (LEFT_SHIFT) unregister_code(KC_LSFT);
	if (RGHT_SHIFT) unregister_code(KC_RSFT);
	if (!SHIFTED) {
		register_code(KC_LSFT);
		register_code(key);
		unregister_code(key);
		unregister_code(KC_LSFT);
	} else {
		register_code(key);
		unregister_code(key);
	}
	if (LEFT_SHIFT) register_code(KC_LSFT);
	if (RGHT_SHIFT) register_code(KC_RSFT);
    return false;
}

bool toggle_oled(void) {
    if (user_config.oled_state == OLED_STATES - 1) {
        user_config.oled_state = 0;
    } else {
        user_config.oled_state++;
    }
    eeconfig_update_user(user_config.raw);
    return false;
}

bool process_custom_codes(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case KC_UNDERSCORE_INV: return invert_shift(KC_MINUS);
            case KC_COLON_INV: return invert_shift(KC_SCOLON);
            case KC_OLED_TGL: return toggle_oled();
            default: return true;
        }
    }
    return true;
}
