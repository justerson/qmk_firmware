#pragma once

#include "quantum.h"

/* LAYOUT
 * ┌───┐
 * │USB│
 * ├───┼───┐
 * │K00│K01│
 * ├───┼───┤
 * │K10│K11│
 * └───┴───┘
 */
#define LAYOUT( \
	K00, K01, \
	K10, K11 \
) { \
	{ K00, K01 }, \
	{ K10, K11 } \
}
