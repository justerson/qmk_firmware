#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
        KC_ESC,   KC_GRV,   KC_1,    KC_2,     KC_3,    KC_4,    KC_5,    KC_6,
        KC_CAPS,  KC_TAB,   KC_Q,    KC_W,     KC_E,    KC_R,    KC_T,    KC_NO,
        KC_UP,    KC_ENT,   KC_A,    KC_S,     KC_D,    KC_F,    KC_NO,   KC_G,
        KC_LEFT,  KC_RIGHT, KC_LSFT, KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,
        KC_DOWN,  KC_LCTL,  KC_NO,   KC_LALT,  KC_LOPT, KC_NO,   KC_SPC,  KC_NO,
        KC_7,     KC_8,     KC_9,    KC_0,     KC_MINS, KC_EQL,  KC_DEL,  KC_BSPC,
        KC_Y,     KC_U,     KC_I,    KC_O,     KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_H,     KC_J,     KC_K,    KC_L,     KC_SCLN, KC_QUOT, KC_NO,   KC_ENT,
        KC_N,     KC_M,     KC_COMM, KC_NO,    KC_DOT,  KC_SLSH, KC_RSFT, KC_ESC,
        KC_SPS,   KC_NO,    KC_ROPT, KC_NO,    KC_LEFT, KC_UP,   KC_DOWN, KC_RIGHT
    ),
};


/* Right Rows
 *
 * Yellow - 4
 * White - 6
 * Green - 7
 * Blue - 8
 * Yellow - 9
 */

/* Right Columns
 *
 * White - A3
 * Green - A2
 * Blue - A1
 * Yellow - A0
 * White - 15
 * Green - 14
 * Blue - 16
 * Yellow - 10
 */
