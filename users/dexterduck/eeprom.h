#pragma once

typedef union {
    uint32_t raw;
    struct {
        uint8_t oled_state :8;
    };
} user_config_t;

user_config_t user_config;

void init_user_eeprom(void);

uint8_t oled_state(void);
