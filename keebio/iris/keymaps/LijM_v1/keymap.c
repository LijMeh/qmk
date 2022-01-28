#include QMK_KEYBOARD_H

#define _LAYER0 0

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [_LAYER0] = LAYOUT(KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, LCTL_T(KC_ENT), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, LT(3,KC_ENT), KC_MEDIA_PLAY_PAUSE, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, KC_LALT, KC_LGUI, MO(1), KC_SPC, MO(2), TG(4)),
    
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (IS_LAYER_ON(_LAYER0)) {
        if (clockwise) {
            tap_code16(KC_VOLU);;
        } else {
            tap_code16(S(KC_VOLD));
        }
    } else {
        if (clockwise) {
            tap_code16(C(KC_PGDN));;
        } else {
            tap_code16(C(KC_PGUP));
        }
    }
    return false;
}
