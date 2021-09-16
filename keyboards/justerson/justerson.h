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

#define ____

#define LAYOUT( \
    LH00, LH01, LH02, LH03, LH04, LH05, LH06, LH07,    RH00, RH01, RH02, RH03, RH04, RH05, RH06, RH07, \
    LH10, LH11, LH12, LH13, LH14, LH15, LH16,          RH10, RH11, RH12, RH13, RH14, RH15, RH16, RH17, \
    LH20, LH21, LH22, LH23, LH24, LH25,       LH27,    RH20, RH21, RH22, RH23, RH24, RH25,       RH27, \
    LH30, LH31, LH32, LH33, LH34, LH35, LH36, LH37,    RH30, RH31, RH32,       RH34, RH35, RH36, RH37, \
    LH40, LH41,       LH43, LH44,       LH46,          RH40,       RH42,       RH44, RH45, RH46, RH47 \
) \
{ \
    { LH00, LH01, LH02, LH03, LH04, LH05, LH06, LH07 }, \
    { LH10, LH11, LH12, LH13, LH14, LH15, LH16, ____ }, \
    { LH20, LH21, LH22, LH23, LH24, LH25, ____, LH27 }, \
    { LH30, LH31, LH32, LH33, LH34, LH35, LH36, LH37 }, \
    { LH40, LH41, ____, LH43, LH44, ____, LH46, ____ }, \
    \
    { RH00, RH01, RH02, RH03, RH04, RH05, RH06, RH07 }, \
    { RH10, RH11, RH12, RH13, RH14, RH15, RH16, RH17 }, \
    { RH20, RH21, RH22, RH23, RH24, RH25, ____, RH27 }, \
    { RH30, RH31, RH32, ____, RH34, RH35, RH36, RH37 }, \
    { RH40, ____, RH42, ____, RH44, RH45, RH46, RH47 }  \
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
