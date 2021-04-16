#include QMK_KEYBOARD_H

#include "eeprom.h"

void init_user_eeprom(void) {
    user_config.raw = eeconfig_read_user();
}

uint8_t oled_state(void) {
    user_config_t c;
    c.raw = eeconfig_read_user();
    return c.oled_state;
}
