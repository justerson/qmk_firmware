#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define ___ KC_NO

#define LAYOUT( \
    LH00, LH01, LH02, LH03, LH04, LH05, LH06, LH07,    RH00, RH01, RH02, RH03, RH04, RH05, RH06, RH07 \
    LH10, LH11, LH12, LH13, LH14, LH15, LH16,          RH10, RH11, RH12, RH13, RH14, RH15, RH16, RH17 \
    LH20, LH21, LH22, LH23, LH24, LH25,       LH27,    RH20, RH21, RH22, RH23, RH24, RH25,       RH27 \
    LH30, LH31, LH32, LH33, LH34, LH35, LH36, LH37,    RH30, RH31, RH32,       RH34, RH35, RH36, RH37 \
    LH40, LH41,       LH43, LH44,       LH46,          RH40,       RH42,       RH44, RH45, RH46, RH47 \
) \
{ \
    { LH00, LH01, LH02, LH03, LH04, LH05, LH06, LH07}, \
    { LH10, LH11, LH12, LH13, LH14, LH15, LH16, ____}, \
    { LH20, LH21, LH22, LH23, LH24, LH25, ____, LH27}, \
    { LH30, LH31, LH32, LH33, LH34, LH35, LH36, LH37}, \
    { LH40, LH41, ____, LH43, LH44, ____, LH46, ____}, \
\
    { RH00, RH01, RH02, RH03, RH04, RH05, RH06, RH07}, \
    { RH10, RH11, RH12, RH13, RH14, RH15, RH16, RH17}, \
    { RH20, RH21, RH22, RH23, RH24, RH25, ____, RH27}, \
    { RH30, RH31, RH32, ____, RH34, RH35, RH36, RH37}, \
    { RH40, ____, RH42, ____, RH44, RH45, RH46, RH47}  \
}

/* LAYOUT
 * ┌───┐                                           ┌───┐
 * │USB│                                           │USB│
 * ├───┴┬────┬────┬────┬────┬────┬────┬────┐     ┌─┴──┬┴───┬────┬────┬────┬────┬────┬────┐
 * │LH00│LH01│LH02│LH03│LH04│LH05│LH06│LH07│     │RH00│RH01│RH02│RH03│RH04│RH05│RH06│RH07│
 * ├────┼────┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┘   ┌─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴────┤
 * │LH10│ LH11 │LH12│LH13│LH14│LH15│LH16│      │RH10│RH11│RH12│RH13│RH14│RH15│RH16│ RH17 │
 * └──┬─┴──┬───┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┐   └─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴──────┤
 *    │LH20│ LH21 │LH22│LH23│LH24│LH25│LH27│     │RH20│RH21│RH22│RH23│RH24│RH25│  RH27   │
 * ┌──┴─┬──┴─┬────┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┐   └──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴────┬────┤
 * │LH30│LH31│ LH32 │LH33│LH34│LH35│LH36│LH37│      │RH30│RH31│RH32│RH34│RH35│ RH36 │RH37│
 * └──┬─┴──┬─┴────┬─┴────┼────┴─┬──┴────┴─┬──┘   ┌──┴────┴─┬──┴───┬┴───┬┴───┬┴───┬──┴─┬──┘
 *    │LH40│ LH41 │ LH43 │ LH44 │  LH46   │      │  RH40   │ RH42 │RH44│RH45│RH46│RH47│
 *    └────┴──────┴──────┴──────┴─────────┘      └─────────┴──────┴────┴────┴────┴────┘
 */

/* ********************************************************************* */
// Don't think I need this, but just in case since it was in 2x2 POC
// #include "config_common.h"


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
#define MATRIX_ROW_PINS { F4, F5, F6, F7, B1, B3, B2, B6 }

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
