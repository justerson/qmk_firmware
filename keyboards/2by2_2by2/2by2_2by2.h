#pragma once

#include "quantum.h"

/* LAYOUT
 * ┌───┐     ┌───┐
 * │USB│     │USB│
 * ├───┼───┐ ├───┼───┐
 * │L00│L01│ │R00│R01│
 * ├───┼───┤ ├───┼───┤
 * │R10│R11│ │R10│R11│
 * └───┴───┘ └───┴───┘
 */

// from config.h
// #define MATRIX_ROWS 4
// #define MATRIX_COLS 2

#define LAYOUT( \
	L00, L01, R00, R01, \
	L10, L11, R10, R11 \
) { \
	{ L00, L01 }, \
	{ L10, L11 }, \
	{ R00, R01 }, \
	{ R10, R11 } \
}
