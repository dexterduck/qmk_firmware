#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFC32
#define PRODUCT_ID      0x0287
#define DEVICE_VER      0x0001
#define MANUFACTURER    dexterduck
#define PRODUCT         Dactyl
/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }
#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 100
#define DEBOUNCE 5

#define TAP_CODE_DELAY 10

/* communication between sides */
#define USE_SERIAL
#define SERIAL_USE_MULTI_TRANSACTION
#define SOFT_SERIAL_PIN D2

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
