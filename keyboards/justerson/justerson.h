#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the Keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define LAYOUT( \
    K00,     K01, K02, K03, K04, K05, K06,        K07, K08, K09, K0a, K0b, K0c,     K0d \
    K10,  K11, K12, K13, K14, K15, K16,         K17, K18, K19, K1a, K1b, K1c, K1d,  K1e \
    K20,    K21, K22, K23, K24, K25, K26,         K27, K28, K29, K2a, K2b, K2c,     K2d \
    K30,      K31, K32, K33, K34, K35, K36,         K37, K38, K39, K3a, K3b,   K3c, K3d \
    K40,    K41,   K42,   K43,        K44,        K45,     K46,    K47,    K48,     K49 \
) \

{ \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0a, K0b, K0c, K0d }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1a, K1b, K1c, K1e }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2a, K2b, K1d, K2d }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3a, K3b, K2c, K3d },  \
    { K40, K41, K42, K43, XXX, K44, XXX, K45, XXX, K46, K47, K48, K3c, K49}   \
}