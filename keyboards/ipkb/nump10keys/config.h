
#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xAAAA
#define PRODUCT_ID      0x2020
#define DEVICE_VER	    0x0001
#define MANUFACTURER    IPKB
#define PRODUCT         num10keys
#define DESCRIPTION     A small 10 key keypad

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 3

/* key matrix pins */
#define MATRIX_ROW_PINS { F7, F6, F5, F4 }
#define MATRIX_COL_PINS { D1, D0, D4 }
#define UNUSED_PINS

/* ws2812 RGB LED */
#define RGB_DI_PIN D5

#define RGBLED_NUM 1    // Number of LEDs

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define UNICODE_SELECTED_MODES UC_WINC
#define UNICODE_KEY_WINC KC_RALT
#define TAPPING_TERM 200
