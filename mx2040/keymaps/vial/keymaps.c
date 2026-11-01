#include QMK_KEYBOARD_H

#define WIN_FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: 默认层 */
    [0] = LAYOUT(
        KC_LCTL,  KC_GRV,    KC_F1,    KC_F2,    KC_NO,     KC_5,     KC_6,     KC_EQL,   KC_F8,     KC_MINS,   KC_NO,     KC_F9,     KC_MUTE,   KC_NO,     KC_DEL,    KC_HOME,    KC_INS,         KC_PGUP,
        KC_F5,    KC_1,      KC_2,     KC_3,     KC_PSCR,   KC_4,     KC_7,     KC_8,     KC_9,      KC_0,      KC_NO,     KC_F10,    KC_NO,     KC_NO,     KC_NO,     KC_END,     KC_NO,          KC_PGDN,
        KC_PAUS,  KC_Q,      KC_W,     KC_E,     KC_SCRL,   KC_R,     KC_U,     KC_I,     KC_O,      KC_P,      KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_KP_7,   KC_KP_PLUS, KC_KP_8,        KC_KP_9,
        KC_NO,    KC_A,      KC_S,     KC_D,     MO(WIN_FN),KC_F,     KC_J,     KC_K,     KC_L,      KC_SCLN,   KC_RGUI,   KC_BSLS,   KC_NO,     KC_RSFT,   KC_KP_1,   KC_KP_ENTER,KC_KP_2,        KC_KP_3,
        KC_RCTL,  KC_Z,      KC_X,     KC_C,     KC_NO,     KC_V,     KC_M,     KC_COMM,  KC_DOT,    KC_NO,     KC_NO,     KC_ENT,    KC_NO,     KC_VOLU,   KC_NUM,    KC_NO,      KC_KP_SLASH,    KC_KP_ASTERISK,
        KC_NO,    KC_TAB,    KC_CAPS,  KC_F3,    KC_NO,     KC_T,     KC_Y,     KC_RBRC,  KC_F7,     KC_LBRC,   KC_NO,     KC_BSPC,   KC_LGUI,   KC_LSFT,   KC_KP_4,   KC_NO,      KC_KP_5,        KC_KP_6,
        KC_NO,    KC_ESC,    KC_LALT,  KC_F4,    KC_LALT,   KC_G,     KC_H,     KC_F6,    KC_NO,     KC_QUOT,   KC_NO,     KC_F11,    KC_NO,     KC_VOLD,   KC_SPC,    KC_UP,      KC_KP_0,        KC_KP_DOT,
        KC_NO,    KC_NO,     KC_NO,    KC_NO,    KC_RALT,   KC_B,     KC_N,     KC_NO,    KC_NO,     KC_SLSH,   KC_CALC,   KC_F12,    KC_NO,     KC_NO,     KC_DOWN,   KC_LEFT,    KC_RGHT,        KC_KP_MINUS
    ),

    /* Layer 1: WIN_FN 纯功能键层（全部填充，无透传） */
    [WIN_FN] = LAYOUT(
        /* Row 0: 媒体控制 + 音量 + 亮度 + 系统应用 */
        KC_MPRV,  KC_MPLY,   KC_MNXT,  KC_MSTP,  KC_MFFD,   KC_MRWD,  KC_EJCT,  KC_MUTE,  KC_VOLD,   KC_VOLU,   KC_BRID,   KC_BRIU,   KC_CALC,   KC_MAIL,   KC_MYCM,   KC_WSCH,    KC_WHOM,        KC_MSEL,

        /* Row 1: 浏览器 + F13~F24 + 截屏 */
        KC_WBAK,  KC_WFWD,   KC_WREF,  KC_WSTP,  KC_WFAV,   KC_F13,   KC_F14,   KC_F15,   KC_F16,    KC_F17,    KC_F18,    KC_F19,    KC_F20,    KC_F21,    KC_F22,    KC_F23,     KC_F24,         KC_PSCR,

        /* Row 2: 系统控制 + 编辑键 + 数字键盘上部 */
        KC_PWR,   KC_SLEP,   KC_WAKE,  QK_LOCK,  KC_APP,    KC_PAUS,  KC_SCRL,  KC_NUM,   KC_INS,    KC_DEL,    KC_HOME,   KC_END,    KC_PGUP,   KC_PGDN,   KC_KP_7,   KC_KP_PLUS, KC_KP_8,        KC_KP_9,

        /* Row 3: 鼠标控制 + 数字键盘中部 */
        KC_ACL0,  KC_ACL1,   KC_ACL2,  KC_MS_U,  KC_WH_U,   KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_WH_D,   KC_BTN1,   KC_BTN2,   KC_BTN3,   KC_BTN4,   KC_BTN5,   KC_KP_1,   KC_KP_ENTER,KC_KP_2,        KC_KP_3,

        /* Row 4: 修饰键 + 方向键 + 数字键盘中部 */
        KC_LSFT,  KC_LCTL,   KC_LALT,  KC_LGUI,  KC_RCTL,   KC_RSFT,  KC_RALT,  KC_RGUI,  KC_UP,     KC_DOWN,   KC_LEFT,   KC_RGHT,   KC_HOME,   KC_END,    KC_KP_4,   KC_KP_5,    KC_KP_6,        KC_KP_0,

        /* Row 5: 编辑键 + 方向键 + 数字键盘中部 */
        KC_ESC,   KC_TAB,    KC_CAPS,  KC_ENT,   KC_BSPC,   KC_DEL,   KC_INS,   KC_UP,    KC_DOWN,   KC_LEFT,   KC_RGHT,   KC_HOME,   KC_END,    KC_PGUP,   KC_KP_4,   KC_KP_5,    KC_KP_6,        KC_KP_0,

        /* Row 6: 修饰键 + 方向键 + 数字键盘底部 */
        KC_LSFT,  KC_LCTL,   KC_LALT,  KC_LGUI,  KC_RCTL,   KC_RSFT,  KC_RALT,  KC_RGUI,  KC_UP,     KC_DOWN,   KC_LEFT,   KC_RGHT,   KC_PGDN,   KC_INS,    KC_KP_0,   KC_KP_DOT,  KC_KP_4,        KC_KP_5,

        /* Row 7: 修饰键 + 方向键 + 数字键盘底部 */
        KC_LSFT,  KC_LCTL,   KC_LALT,  KC_LGUI,  KC_RALT,   KC_RSFT,  KC_UP,    KC_DOWN,  KC_LEFT,   KC_RGHT,   KC_HOME,   KC_END,    KC_PGUP,   KC_PGDN,   KC_KP_0,   KC_KP_DOT,  KC_KP_MINUS,    KC_KP_MINUS
    )
};