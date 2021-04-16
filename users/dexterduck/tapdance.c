#include "tapdance.h"

void dance_parens_fin(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        register_code16(KC_LPRN);
    } else {
        register_code16(KC_RPRN);
    }
}

void dance_parens_rst(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code16(KC_LPRN);
    } else {
        unregister_code16(KC_RPRN);
    }
}

void dance_bracket_fin(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        register_code16(KC_LBRC);
    } else {
        register_code(KC_RBRC);
    }
}

void dance_bracket_rst(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code16(KC_LBRC);
    } else {
        unregister_code(KC_RBRC);
    }
}
