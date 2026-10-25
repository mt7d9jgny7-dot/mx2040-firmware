#include "mx2040.h"

#define WIN_FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
    KC_LCTL,  KC_GRV,    KC_F1,    KC_F2,    KC_NO,     KC_5,     KC_6,     KC_EQL,   KC_F8,     KC_MINS,   KC_NO,     KC_F9,     KC_MUTE,   KC_NO,     KC_DEL,    KC_HOME,    KC_INS,         KC_PGUP,
    KC_F5,    KC_1,      KC_2,     KC_3,     KC_PSCR,   KC_4,     KC_7,     KC_8,     KC_9,      KC_0,      KC_NO,     KC_F10,    KC_NO,     KC_NO,     KC_NO,     KC_END,     KC_NO,          KC_PGDN,
    KC_PAUS,  KC_Q,      KC_W,     KC_E,     KC_SCRL,   KC_R,     KC_U,     KC_I,     KC_O,      KC_P,      KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_KP_7,   KC_KP_PLUS, KC_KP_8,        KC_KP_9,
    KC_NO,    KC_A,      KC_S,     KC_D,     MO(WIN_FN),KC_F,     KC_J,     KC_K,     KC_L,      KC_SCLN,   KC_RGUI,   KC_BSLS,   KC_NO,     KC_RSFT,   KC_KP_1,   KC_KP_ENTER,KC_KP_2,        KC_KP_3,
    KC_RCTL,  KC_Z,      KC_X,     KC_C,     KC_NO,     KC_V,     KC_M,     KC_COMM,  KC_DOT,    KC_NO,     KC_NO,     KC_ENT,    KC_NO,     KC_VOLU,   KC_NUM,    KC_KP_SLASH,KC_KP_ASTERISK, KC_NO,
    KC_NO,    KC_TAB,    KC_CAPS,  KC_F3,    KC_NO,     KC_T,     KC_Y,     KC_RBRC,  KC_F7,     KC_LBRC,   KC_NO,     KC_BSPC,   KC_LGUI,   KC_LSFT,   KC_KP_4,   KC_NO,      KC_KP_5,        KC_KP_6,
    KC_NO,    KC_ESC,    KC_LALT,  KC_F4,    KC_LALT,   KC_G,     KC_H,     KC_F6,    KC_NO,     KC_QUOT,   KC_NO,     KC_F11,    KC_NO,     KC_VOLD,   KC_SPC,    KC_UP,      KC_KP_0,        KC_KP_DOT,
    KC_NO,    KC_NO,     KC_NO,    KC_NO,    KC_RALT,   KC_B,     KC_N,     KC_NO,    KC_NO,     KC_SLSH,   KC_CALC,   KC_F12,    KC_NO,     KC_NO,     KC_DOWN,   KC_LEFT,    KC_RGHT,        KC_KP_MINUS
),
[WIN_FN] = LAYOUT(
    KC_LCTL,  KC_GRV,    KC_F1,    KC_F2,    KC_NO,     KC_5,     KC_6,     KC_EQL,   KC_F8,     KC_MINS,   KC_NO,     KC_F9,     KC_MUTE,   KC_NO,     KC_DEL,    KC_HOME,    KC_INS,         KC_PGUP,
    KC_F5,    KC_1,      KC_2,     KC_3,     KC_PSCR,   KC_4,     KC_7,     KC_8,     KC_9,      KC_0,      KC_NO,     KC_F10,    KC_NO,     KC_NO,     KC_NO,     KC_END,     KC_NO,          KC_PGDN,
    KC_PAUS,  KC_Q,      KC_W,     KC_E,     KC_SCRL,   KC_R,     KC_U,     KC_I,     KC_O,      KC_P,      KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_KP_7,   KC_KP_PLUS, KC_KP_8,        KC_KP_9,
    KC_NO,    KC_A,      KC_S,     KC_D,     KC_NO,     KC_F,     KC_J,     KC_K,     KC_L,      KC_SCLN,   KC_RGUI,   KC_BSLS,   KC_NO,     KC_RSFT,   KC_KP_1,   KC_KP_ENTER,KC_KP_2,        KC_KP_3,
    KC_RCTL,  KC_Z,      KC_X,     KC_C,     KC_NO,     KC_V,     KC_M,     KC_COMM,  KC_DOT,    KC_NO,     KC_NO,     KC_ENT,    KC_NO,     KC_VOLU,   KC_NUM,    KC_KP_SLASH,KC_KP_ASTERISK, KC_NO,
    KC_NO,    KC_TAB,    KC_CAPS,  KC_F3,    KC_NO,     KC_T,     KC_Y,     KC_RBRC,  KC_F7,     KC_LBRC,   KC_NO,     KC_BSPC,   KC_LGUI,   KC_LSFT,   KC_KP_4,   KC_NO,      KC_KP_5,        KC_KP_6,
    KC_NO,    KC_ESC,    KC_LALT,  KC_F4,    KC_LALT,   KC_G,     KC_H,     KC_F6,    KC_NO,     KC_QUOT,   KC_NO,     KC_F11,    KC_NO,     KC_VOLD,   KC_SPC,    KC_UP,      KC_KP_0,        KC_KP_DOT,
    KC_NO,    KC_NO,     KC_NO,    KC_NO,    KC_RALT,   KC_B,     KC_N,     KC_NO,    KC_NO,     KC_SLSH,   KC_CALC,   KC_F12,    KC_NO,     KC_NO,     KC_DOWN,   KC_LEFT,    KC_RGHT,        KC_KP_MINUS
)
};
