 /* Copyright 2020 Josef Adamcik
  * Modification for VIA support and RGB underglow by Jens Bonk-Wiltfang
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */

//Sets up what the OLED screens display.

#ifdef OLED_DRIVER_ENABLE

#include "stdio.h"
#include "manna-harbour_miryoku.h"
#include "eeprom.h"

#define WPM_MAX 80

enum oled_states {
    _LOGO,
    _WPM
};

static void print_status_narrow(void) {
    oled_write_P(PSTR("\n\n\n\n"), false);
    oled_write_ln_P(PSTR("Layer"), false);
    switch (get_highest_layer(layer_state)) {
        case BASE:
            oled_write_ln_P(PSTR("BASE"), false);
            break;
        case MBO:
            oled_write_ln_P(PSTR("MBTN"), false);
            break;
        case MEDR:
            oled_write_ln_P(PSTR("MEDIA"), false);
            break;
        case NAVR:
            oled_write_ln_P(PSTR("NAV"), false);
            break;
        case MOUR:
            oled_write_ln_P(PSTR("MOUSE"), false);
            break;
        case NSSL:
            oled_write_ln_P(PSTR("SYM"), false);
            break;
        case NSL:
            oled_write_ln_P(PSTR("NUM"), false);
            break;
        case FUNL:
            oled_write_ln_P(PSTR("FN"), false);
            break;
        case GAMEL:
            oled_write_ln_P(PSTR("GAME"), false);
            break;
        default:
            oled_write_ln_P(PSTR("OTHER"), false);
    }
    oled_write_P(PSTR("\n\n\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
}

static void print_wpm(void) {
    uint8_t wpm = get_current_wpm();
    char wpm_str [10];
    sprintf(wpm_str, "\nWPM:\n%u\n", wpm);
    oled_write_ln(wpm_str, false);
    if (wpm > WPM_MAX) {
        wpm = WPM_MAX;
    }

    uint16_t height = wpm * (oled_max_lines() - 4) / WPM_MAX;
    uint16_t start = oled_max_lines() - 4 - height;
    for (uint8_t i=0; i<start; i++) {
        oled_advance_page(true);
    }
    uint16_t chars = height * oled_max_chars();

    for (uint8_t i=0; i<chars; i++) {
        oled_write_char(' ', true);
    }
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        print_wpm();
    }
}

#endif
