#include QMK_KEYBOARD_H

// TapDance
enum {
  TD_MEDIA,
};

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_MEDIA] = ACTION_TAP_DANCE_DOUBLE(KC_MEDIA_PLAY_PAUSE, KC_MNXT),
};

// Keycodes
#define _QWERTY 0
#define _NAV 1
#define _SYMBOLS 2
#define _LIGHTS 3
#define _NUMPAD 4
#define _MOUSE 5

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  NAV,
  SYMBOLS,
  LIGHTS,
  NUMPAD,
  MOUSE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  
  [_QWERTY] = LAYOUT(KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5,                                                   KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, 
                     KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                                                    KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, 
                     LCTL_T(KC_ENT), KC_A, KC_S, KC_D, KC_F, KC_G,                                            KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
                     KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, MO(3),                              TD(TD_MEDIA), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, 
                                    KC_LALT, KC_LGUI, MO(1),                                                  KC_SPC, MO(2), TG(4)),
  
  [_NAV] = LAYOUT(KC_GRV, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_EQL, 
                     KC_NO, LGUI(KC_Q), KC_NO, LALT(KC_BSPC), LGUI(KC_R), LGUI(KC_T),                         KC_NO, LALT(KC_LEFT), KC_UP, LALT(KC_RGHT), KC_NO, KC_NO, 
                     KC_NO, KC_NO, LGUI(KC_S), KC_BSPC, KC_DEL, LALT(KC_DEL),                                 KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_ENT, KC_NO, 
                     KC_NO, LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), KC_NO, KC_NO,         LGUI(KC_R), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                                                                KC_NO, KC_NO, KC_TRNS,                        MO(5), KC_NO, KC_NO),
  
  [_SYMBOLS] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                     KC_NO, KC_P1, KC_P2, KC_P3, KC_P4, KC_P5,                                                KC_P6, KC_P7, KC_P8, KC_P9, KC_P0, KC_BSLS, 
                     KC_NO, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,                                         KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO, 
                      KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                 KC_MEDIA_PLAY_PAUSE, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_NO,
                                                      KC_NO, KC_NO, KC_NO,                                    KC_NO, KC_NO, KC_NO),
  
  [_LIGHTS] = LAYOUT(DEBUG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                                RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO,
                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                                KC_NO, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_NO,
                     KC_NO, BL_TOGG, BL_STEP, BL_BRTG, BL_ON, BL_INC,                                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                     KC_NO, KC_NO, KC_NO, KC_NO, BL_OFF, BL_DEC, KC_NO,                           LGUI(KC_W), RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, 9, 
                                                  KC_NO, KC_NO, KC_NO,                                        KC_NO, KC_NO, KC_NO),
  
  [_NUMPAD] = LAYOUT(KC_ESC, KC_NO, KC_NO, KC_PSLS, KC_PAST, KC_PMNS,                                         KC_NO, KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_NO,
                     KC_NO, KC_NO, KC_P7, KC_P8, KC_P9, KC_PPLS,                                              KC_NO, LALT(KC_LEFT), KC_UP, LALT(KC_RGHT), KC_NO, KC_NO, 
                     KC_PENT, KC_NO, KC_P4, KC_P5, KC_P6, KC_PCMM,                                            KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO,
                     KC_LSFT, KC_NO, KC_P1, KC_P2, KC_P3, KC_PEQL, KC_PENT,                            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PENT, 
                                                   KC_P0, KC_PDOT, KC_NO,                                     KC_NO, KC_NO, KC_TRNS),
  
  [_MOUSE] = LAYOUT(KC_GESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                    KC_TAB, KC_NO, LGUI(KC_W), KC_NO, KC_WH_D, KC_NO,                                        KC_NO, LGUI(S(KC_LEFT)), KC_MS_U, LGUI(S(KC_RIGHT)), KC_NO, KC_NO, 
                    KC_NO, KC_ACL1, KC_ACL1, KC_BTN2, KC_BTN1, KC_NO,                                         KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_LGUI, KC_NO, 
                    KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_U, KC_NO, KC_NO,                   KC_MEDIA_PLAY_PAUSE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                                                 KC_NO, KC_NO, KC_NO,                                         KC_TRNS, KC_NO, KC_NO) 
  
};


// Encoders
bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) {
    if (clockwise) {
      tap_code(KC_VOLD);
    } else {
      tap_code(KC_VOLU);
    }
  }
  else if (index == 1) {
    switch(biton32(layer_state)) {
    case 5:
      if (clockwise) {
      tap_code16(KC_VOLD);
      } else {
      tap_code16(KC_VOLU);
      }
      break;
    case 4:
      if (clockwise) {
        tap_code16((KC_LEFT));
      } else {
        tap_code16((KC_RGHT));
      }
      break;
    case 3:
      if (clockwise) {
        tap_code16(S(C(KC_TAB)));
      } else {
        tap_code16(C(KC_TAB));
      }
      break;
    case 2:
      if (clockwise) {
        tap_code16(KC_VOLD);
      } else {
        tap_code16(KC_VOLU);
      }
      break;
    case 1:
      if (clockwise) {
        tap_code16(C(KC_LEFT));
      } else {
        tap_code16(C(KC_RGHT));
      }
      break;
    default:
      if (clockwise) {
        tap_code16(KC_VOLD);
      } else {
        tap_code16(KC_VOLU);
      }
      break;
  }
  }
  return true;
}


//Lights https://github.com/qmk/qmk_firmware/blob/master/docs/feature_rgblight.md
/*
void rgb_matrix_indicators_user(void) {
  uint8_t layer = biton32(layer_state);
  switch (layer) {
    case 0: // QWERTY Layer
      rgb_matrix_set_color_all(255, 100, 0); //Light up all the keys in Yellow
            break;
    case 1: // Nav Layer
      rgb_matrix_set_color_all(0, 100, 255); // rest of keys
            break;
    case 2: //Symbols layer
      //rgb_matrix_set_color(index, red, green, blue); >> this is the template
      rgb_matrix_set_color_all(0, 100, 255); // rest of keys
      break;
    case 3: // Lights layer
      //rgb_matrix_set_color(index, red, green, blue); >> this is the template
      rgb_matrix_set_color_all(0,0,255); // rest of keys
      break;
    case 4: // Numpad Layer
      //rgb_matrix_set_color(index, red, green, blue); >> this is the template
      rgb_matrix_set_color_all(0,0,255); // rest of keys
      break;
    case 5: // Mouse Layer
      //rgb_matrix_set_color(index, red, green, blue); >> this is the template
      rgb_matrix_set_color_all(0,0,255); // rest of keys
      break;
  }
}
*/





