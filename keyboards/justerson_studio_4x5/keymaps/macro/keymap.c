#include QMK_KEYBOARD_H

// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// 	[0] = LAYOUT(
//         KC_A,	KC_B,	KC_C,	KC_D,    KC_E,
//         KC_F,	KC_G,	KC_H,	KC_I,    KC_J,
//         KC_K,	KC_L,	KC_M,   KC_N,    KC_O,
//         KC_P,	KC_Q,	KC_R,   KC_S,    KC_T
//     ),
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
        KC_SPC,     LGUI(KC_Z),	    KC_LEFT,    KC_A,    KC_ESCAPE,
        LCTL(),	    LGUI(KC_X),	    KC_UP,      KC_W,    LGUI(KC_S),
        LGUI(),	    LGUI(KC_V),	    KC_DOWN,    KC_S,    LGUI(KC_A),
        KC_DELETE,	LGUI(KC_C),	    KC_RIGHT,   KC_D,    KC_ENTER
    ),
};
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// 	[0] = LAYOUT(
//         KC_UP,	    LCTL(KC_LEFT),	KC_WAKE,	       LGUI(KC_Z), KC_BSPC,
//         KC_DOWN,	LCTL(KC_RIGHT),	KC_KB_MUTE,	       LGUI(KC_X), KC_DELETE,
//         KC_ENTER,	KC_HOME,	    KC_KB_VOLUME_UP,   LGUI(KC_P), KC_ENTER,
//         LGUI(KC_K),	KC_END,	        KC_KB_VOLUME_DOWN, LGUI(KC_C), KC_ESCAPE
//     ),
// };


