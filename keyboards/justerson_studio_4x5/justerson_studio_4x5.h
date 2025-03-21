#pragma once

#include "quantum.h"

/*
 *
 * Flash a new build to the keyboard https://docs.qmk.fm/#/newbs_flashing?id=flash-your-keyboard-from-the-command-line
 * $ qmk flash -kb <my_keyboard> -km <my_keymap>
 *
 */

#define LAYOUT( \
  K00, K01, K02, K03, K04, \
  K10, K11, K12, K13, K14, \
  K20, K21, K22, K23, K24, \
  K30, K31, K32, K33, K34  \
) { \
  { K00, K01, K02, K03, K04 }, \
  { K10, K11, K12, K13, K14 }, \
  { K20, K21, K22, K23, K24 }, \
  { K30, K31, K32, K33, K34 }  \
}
