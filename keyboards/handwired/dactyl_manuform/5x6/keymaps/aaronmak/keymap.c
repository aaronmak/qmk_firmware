#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _RAISE 1

#define RAISE MO(_RAISE)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_QWERTY] = LAYOUT_5x6(
        KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5,                   KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
        KC_GRV, KC_Q, KC_W, KC_E, KC_R, KC_T,                   KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
        KC_LGUI, KC_A, KC_S, KC_D, KC_F, KC_G,                  KC_H, KC_J, KC_K, KC_L, KC_SCLN, RGUI_T(KC_QUOT),
        KC_LSFT, LCTL_T(KC_Z), KC_X, KC_C, KC_V, KC_B,          KC_N, KC_M, KC_COMM, KC_DOT, RCTL_T(KC_SLSH), KC_RSFT,
                 KC_LALT, OSM(MOD_MEH),                                     KC_LBRC, KC_RBRC,
                                KC_SPC, KC_BSPC,                KC_TAB, KC_ENT,
                                    MO(_RAISE), KC_DEL,           KC_ESC, KC_RGUI,
                                    KC_LEFT, KC_RGHT,        KC_UP, KC_DOWN
    ),

	[_RAISE] = LAYOUT_5x6(
        KC_PLUS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS,
        KC_TILD, KC_BRID, KC_BRIU, _______, _______, _______,   _______, _______, _______, KC_VOLD, KC_VOLU, KC_PIPE,
        _______, KC_HOME, KC_PGUP, KC_PGDN, KC_END, _______,    _______, _______, _______, _______, KC_COLN, KC_DQUO,
        _______, _______, _______, _______, _______, _______,   _______, _______, KC_LT, KC_GT, KC_QUES, _______,
                 _______, _______,                                                KC_LCBR, KC_RCBR,
                                  _______, _______,             _______, _______,
                                    _______, _______,         _______, _______,
                                    _______, KC_SLEP,         KC_WAKE, _______
    )
};
