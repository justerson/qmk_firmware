#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───────┬───────┬───────┬───────┬───────┐
     * │ SPACE │ CMD-Z │ LEFT  │   A   │  ESC  │
     * ├───────┼───────┼───────┼───────┤───────┤
     * │ CTRL  │ CMD-X │ UP    │   W   │ CMD-S │
     * ├───────┼───────┼───────┼───────┤───────┤
     * │ CMD   │ CMD-V │ DOWN  │   S   │ CMD-A │
     * ├───────┼───────┼───────┼───────┤───────┤
     * │ BACK  │ CMD-C │ RIGHT │   D   │ ENTER │
     * └───────┴───────┴───────┴───────┴───────┘
     */
    [0] = LAYOUT(
        KC_SPC,     LGUI(KC_Z),	    KC_LEFT,    KC_A,    KC_ESCAPE,
        KC_LCTL,    LGUI(KC_X),	    KC_UP,      KC_W,    LGUI(KC_S),
        KC_LCMD,    LGUI(KC_V),	    KC_DOWN,    KC_S,    LGUI(KC_A),
        KC_BSPC,	LGUI(KC_C),	    KC_RIGHT,   KC_D,    KC_ENTER
    ),
};
