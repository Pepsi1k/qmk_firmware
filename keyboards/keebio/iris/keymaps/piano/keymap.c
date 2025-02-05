#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT(
           KC_ESC,    KC_1, KC_2, KC_3, KC_4,    KC_5,                        KC_6, KC_7, KC_8,    KC_9,    KC_0,    KC_BSPC, 
           KC_TAB,    KC_Q, KC_W, KC_E, KC_R,    KC_T,                        KC_Y, KC_U, KC_I,    KC_O,    KC_P,    KC_BSLS,
           KC_LCTL,   KC_A, KC_S, KC_D, KC_F,    KC_G,                        KC_H, KC_J, KC_K,    KC_L,    KC_SCLN, KC_QUOT,
           KC_LSFT,   KC_Z, KC_X, KC_C, KC_V,    KC_B,  KC_CAPS,     KC_NO,   KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, 
                                        KC_LGUI, MO(1), KC_ENT,      KC_SPC,  MO(2), KC_LALT),
   
        [1] = LAYOUT(
           KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_INS,   KC_PSCR, KC_SLCK, KC_PAUS, KC_NO,   KC_BSPC, 
           KC_NO, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                      KC_CIRC,  KC_AMPR, KC_ASTR, KC_MINS, KC_PLUS, KC_PEQL, 
           KC_NO, KC_LSFT, KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN,                      KC_LEFT,  KC_DOWN, KC_UP,   KC_RGHT, KC_NO,   KC_DEL, 
           KC_NO, KC_NO,   KC_LCBR, KC_RCBR, KC_LT,   KC_GT,   KC_NO,      KC_NO,   KC_HOME,  KC_PGDN, KC_PGUP, KC_END,  KC_NO,   KC_NO, 
                                             KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,    KC_NO),


        [2] = LAYOUT(
           KC_NO, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                       KC_F6,    KC_F7,   KC_F8, KC_F9,  KC_F10,  KC_F11, 
           KC_NO, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,     KC_7,    KC_8,  KC_9,   KC_0,    KC_F12, 
           KC_NO, KC_DQUO, KC_LPRN, KC_TILD, KC_MINS, KC_LCBR,                     KC_EQL,   KC_NO,   KC_NO, KC_NO,  KC_NO,   KC_NO, 
           KC_NO, KC_QUOT, KC_NO,   KC_GRV,  KC_UNDS, KC_LBRC, KC_NO,      KC_NO,  KC_PLUS,  KC_NO,   KC_NO, KC_NO,  KC_NO,   KC_NO, 
                                             TO(3),   KC_NO,   KC_NO,      KC_NO,  KC_NO,    KC_NO),
        [3] = LAYOUT(
           KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO, KC_NO,                 KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
           RGB_TOG, KC_NO,    KC_NO,   KC_NO,   KC_NO, KC_NO,                 KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
           RGB_MOD, KC_MPRV,  KC_MNXT, KC_VOLU, KC_NO, KC_NO,                 KC_NO, RGB_SPI, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO, 
           KC_MUTE, KC_MSTP,  KC_MPLY, KC_VOLD, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, RGB_SPD, RGB_HUD, RGB_SAD, RGB_VAD, KC_NO, 
                                                TG(3), KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO)
};
