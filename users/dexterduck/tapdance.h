#pragma once

#include QMK_KEYBOARD_H

enum tapdance_codes { TD_LR_PARENS, TD_LR_BRACKET };

#define TAP_PARENS_FN ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_parens_fin, dance_parens_rst)
#define TAP_BRACKET_FN ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_bracket_fin, dance_bracket_rst)

void dance_parens_fin(qk_tap_dance_state_t *state, void *user_data);

void dance_parens_rst(qk_tap_dance_state_t *state, void *user_data);

void dance_bracket_fin(qk_tap_dance_state_t *state, void *user_data);

void dance_bracket_rst(qk_tap_dance_state_t *state, void *user_data);
