#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0x2019
#define DEVICE_VER		0x0001
#define MANUFACTURER    Justerson
#define PRODUCT         2by2

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 2

/* ProMicro pinout https://imgur.com/a/fRSx8 */
/* key matrix pins */
#define MATRIX_ROW_PINS { D7, E6 }
#define MATRIX_COL_PINS { D4, C6 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
