#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0x2019
#define DEVICE_VER		0x0001
#define MANUFACTURER    Justerson
#define PRODUCT         2by2_2by2

/* key matrix size */
#define MATRIX_ROWS 4
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

/* added for custom split keyboard */
#define MASTER_LEFT
#define SOFT_SERIAL_PIN D0

/* might not be necessary, but just in case */
#define SPLIT_USB_DETECT

// Left board

// Column 1 - Pin 4 - PURPLE
// - green wire/brown tape
// - green wire/orange tape
// Column 2 - Pin 5 - BROWN
// - green wire/grey tape
// - green wire/yellow tape
// Row 1 - Pin 6 - RED
// - blue wire/brown tape
// - blue wire/grey tape
// Row 2 - Pin 7 - GREEN
// - blue wire/orange tape
// - blue wire/yellow tape

// Right board

// Column 1 - Pin 4 - BLUE
// - black wire/blue tape
// - black wire/purple tape
// Column 2 - Pin 5 - WHITE
// - black wire/green tape
// - black wire/red tape
// Row 1 - Pin 6 - ORANGE
// - red wire/blue tape
// - red wire/green tape
// Row 2 - Pin 7 - YELLOW
// - red wire/purple tape
// - red wire/red tape
