#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0x2019
#define DEVICE_VER		0x0001
#define MANUFACTURER    Justerson
#define PRODUCT         Stomp_Box_Studio_Macropad

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 5

/* ProMicro pinout https://imgur.com/a/fRSx8 */
/* key matrix pins */

// ProMicro pins of the rows, from top to bottom
//                        10, 16, 14, 15
#define MATRIX_ROW_PINS { B6, B2, B3, B1 }

// ProMicro pins of the columns, from left to right
//                        5,  6,  7,  8,  9
#define MATRIX_COL_PINS { C6, D7, E6, B4, B5 }

#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
