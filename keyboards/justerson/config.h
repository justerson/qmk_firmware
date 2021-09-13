#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0x2019
#define DEVICE_VER		0x0001
#define MANUFACTURER    Justerson
#define PRODUCT         Stomp_Box_Split

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 8

/* ProMicro pinout https://imgur.com/a/fRSx8 */
/* key matrix pins */

// ProMicro pins of the rows, from top to bottom
//                        4,  6,  7,  8,  9
#define MATRIX_ROW_PINS { D4, D7, E6, B4, B5 }

// ProMicro pins of the columns, from left to right
//                        A3, A2, A1, A0, 15, 14, 16, 10
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2, B6 }

#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* added for custom split keyboard */
#define MASTER_LEFT
#define SOFT_SERIAL_PIN D0

/* might not be necessary, but just in case */
#define SPLIT_USB_DETECT
