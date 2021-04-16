const rgblight_segment_t PROGMEM rgb_colemak_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {35, 1, 0, 0, 0},
    {71, 1, 0, 0, 0},
    {0, 1, HSV_WHITE},
    {2, 4, HSV_WHITE},
    {7, 4, HSV_WHITE},
    {12, 3, HSV_WHITE},
    {17, 3, HSV_WHITE},
    {22, 3, HSV_WHITE},
    {36, 1, HSV_WHITE},
    {38, 4, HSV_WHITE},
    {43, 4, HSV_WHITE},
    {48, 3, HSV_WHITE},
    {53, 3, HSV_WHITE},
    {58, 3, HSV_WHITE}
);

const rgblight_segment_t PROGMEM rgb_media_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {35, 1, HSV_MAGENTA},  // Left indicator
    {71, 1, HSV_MAGENTA}, // Right indicator
    {10, 1, HSV_MAGENTA}, // Mod key
    {44, 1, HSV_MAGENTA},
    {49, 1, HSV_MAGENTA},
    {54, 1, HSV_MAGENTA},
    {59, 1, HSV_MAGENTA},
    {41, 1, HSV_MAGENTA},
    {46, 1, HSV_MAGENTA},
    {36, 1, HSV_MAGENTA}
);

const rgblight_segment_t PROGMEM rgb_nav_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {35, 1, HSV_CYAN},  // Left indicator
    {71, 1, HSV_CYAN}, // Right indicator
    {5, 1, HSV_CYAN}, // Mod key
    {36, 1, HSV_CYAN},
    {38, 4, HSV_CYAN},
    {43, 4, HSV_CYAN},
    {48, 3, HSV_CYAN},
    {53, 3, HSV_CYAN},
    {58, 3, HSV_CYAN}
);

const rgblight_segment_t PROGMEM rgb_mouse_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {35, 1, HSV_GOLD},  // Left indicator
    {71, 1, HSV_GOLD}, // Right indicator
    {0, 1, HSV_GOLD}, // Mod key
    {44, 3, HSV_GOLD},
    {49, 2, HSV_GOLD},
    {54, 2, HSV_GOLD},
    {59, 2, HSV_GOLD},
    {41, 1, HSV_GOLD},
    {36, 1, HSV_GOLD}
);

const rgblight_segment_t PROGMEM rgb_sym_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {35, 1, HSV_GREEN},  // Left indicator
    {71, 1, HSV_GREEN}, // Right indicator
    {36, 1, HSV_GREEN}, // Mod key
    {0, 1,  HSV_GREEN},
    {2, 4,  HSV_GREEN},
    {7, 4,  HSV_GREEN},
    {12, 3, HSV_GREEN},
    {17, 3, HSV_GREEN},
    {22, 3, HSV_GREEN}
);

const rgblight_segment_t PROGMEM rgb_num_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {35, 1, HSV_BLUE},  // Left indicator
    {71, 1, HSV_BLUE}, // Right indicator
    {41, 1, HSV_BLUE}, // Mod key
    {0, 1,  HSV_BLUE},
    {2, 4,  HSV_BLUE},
    {7, 4,  HSV_BLUE},
    {12, 3, HSV_BLUE},
    {17, 3, HSV_BLUE},
    {22, 3, HSV_BLUE}
);

const rgblight_segment_t PROGMEM rgb_fn_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {35, 1, HSV_RED},  // Left indicator
    {71, 1, HSV_RED}, // Right indicator
    {46, 1, HSV_RED}, // Mod key
    {0, 1,  HSV_RED},
    {2, 4,  HSV_RED},
    {7, 4,  HSV_RED},
    {12, 3, HSV_RED},
    {17, 3, HSV_RED},
    {22, 3, HSV_RED}
);

const rgblight_segment_t PROGMEM rgb_game_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {35, 1, HSV_PURPLE},  // Left indicator
    {71, 1, HSV_PURPLE}, // Right indicator
    {18, 1, HSV_PURPLE}, // D
    {12, 2, HSV_PURPLE}, // W, S
    {8, 1, HSV_PURPLE}, // S
    {25, 1, HSV_PURPLE}, // Mod key
    {0, 1, HSV_PURPLE},
    {5, 1, HSV_PURPLE},
    {10, 1, HSV_PURPLE}
);

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    rgb_colemak_layer,
    rgb_media_layer,
    rgb_nav_layer,
    rgb_mouse_layer,
    rgb_sym_layer,
    rgb_num_layer,
    rgb_fn_layer,
    rgb_game_layer
);

void lighting_init(void) {
    rgblight_layers = rgb_layers;
    rgblight_set_layer_state(0, true);
    rgblight_mode(RGBLIGHT_MODE_RAINBOW_SWIRL);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, MEDR));
    rgblight_set_layer_state(2, layer_state_cmp(state, NAVR));
    rgblight_set_layer_state(3, layer_state_cmp(state, MOUR));
    rgblight_set_layer_state(4, layer_state_cmp(state, NSSL));
    rgblight_set_layer_state(5, layer_state_cmp(state, NSL));
    rgblight_set_layer_state(6, layer_state_cmp(state, FUNL));
    rgblight_set_layer_state(7, layer_state_cmp(state, GAMEL));
    return state;
}
