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
                     KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, TG(3),                              TD(TD_MEDIA), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, 
                                    KC_LALT, KC_LGUI, MO(1),                                                  KC_SPC, MO(2), TG(4)),
  
  [_NAV] = LAYOUT(KC_GRV, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_EQL, 
                  KC_NO, LGUI(KC_Q), KC_NO, LALT(KC_BSPC), LGUI(KC_R), LGUI(KC_T),                         KC_NO, LALT(KC_LEFT), KC_UP, LALT(KC_RGHT), KC_NO, KC_NO, 
                  KC_TRNS, KC_NO, LGUI(KC_S), KC_BSPC, KC_DEL, LALT(KC_DEL),                               KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_ENT, KC_NO, 
                  KC_LSFT, LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), KC_NO, KC_NO,       LGUI(KC_R), KC_NO, LGUI(KC_BSPC), KC_NO, LGUI(KC_DEL), KC_NO, KC_NO, 
                                                   KC_TRNS, KC_TRNS, KC_TRNS,                              MO(5), KC_TRNS, KC_TRNS),
  
  [_SYMBOLS] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                     KC_NO, KC_P1, KC_P2, KC_P3, KC_P4, KC_P5,                                                KC_P6, KC_P7, KC_P8, KC_P9, KC_P0, KC_BSLS, 
                     KC_NO, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,                                         KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO, 
                     KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                  KC_MEDIA_PLAY_PAUSE, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_NO,
                                                   KC_TRNS, KC_TRNS, KC_TRNS,                                 KC_NO, KC_NO, KC_NO),
  
  [_LIGHTS] = LAYOUT(DEBUG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                                RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO,
                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                                KC_NO, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_NO,
                     KC_NO, BL_TOGG, BL_STEP, BL_BRTG, BL_ON, BL_INC,                                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                     KC_NO, KC_NO, KC_NO, KC_NO, BL_OFF, BL_DEC, KC_NO,                           LGUI(KC_W), RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, 9, 
                                                  KC_NO, KC_NO, KC_NO,                                        KC_NO, KC_NO, KC_NO),
  
  [_NUMPAD] = LAYOUT(KC_ESC, KC_NO, KC_NO, KC_PSLS, KC_PAST, KC_PMNS,                                         KC_NO, KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_NO,
                     KC_NO, KC_NO, KC_P7, KC_P8, KC_P9, KC_PPLS,                                              KC_NO, LALT(KC_LEFT), KC_UP, LALT(KC_RGHT), KC_NO, KC_NO, 
                     KC_PENT, KC_NO, KC_P4, KC_P5, KC_P6, KC_PCMM,                                            KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO,
                     KC_LSFT, KC_NO, KC_P1, KC_P2, KC_P3, KC_PEQL, KC_PENT,                            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PENT, 
                                                   KC_P0, KC_PDOT, KC_PENT,                                   KC_NO, KC_NO, KC_TRNS),
  
  [_MOUSE] = LAYOUT(KC_GESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                    KC_TAB, KC_NO, LGUI(KC_W), KC_WH_R, KC_WH_D, KC_WH_L,                                     KC_NO, LGUI(S(KC_LEFT)), KC_MS_U, LGUI(S(KC_RIGHT)), KC_NO, KC_NO, 
                    KC_NO, KC_ACL1, KC_ACL1, KC_BTN2, KC_BTN1, KC_BTN3,                                       KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_LGUI, KC_NO, 
                    KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_U, KC_NO, KC_NO,                   KC_MEDIA_PLAY_PAUSE, KC_NO, LGUI(KC_LEFT), KC_NO, LGUI(KC_RIGHT), KC_NO, KC_NO, 
                                                 KC_NO, KC_NO, KC_NO,                                         KC_TRNS, KC_NO, KC_NO) 
  
};


// Encoders
bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) {
    if (clockwise) {
      tap_code16(C(KC_RGHT));
    } else {
      tap_code16(C(KC_LEFT));
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
const rgblight_segment_t PROGMEM QWERTY_Layer[] = RGBLIGHT_LAYER_SEGMENTS(
  {61, 15, RGB_OFF}       // Turn off the underglow, because the left hand side is broken
);

const rgblight_segment_t PROGMEM NAV_Layer[] = RGBLIGHT_LAYER_SEGMENTS(
  //{0, 61, RGB_OFF}, // Set all lights to off
  {42, 1, HSV_CYAN}, // Nav to cyan (KC_I)
  {48, 3, HSV_CYAN}, // Nav to cyan (KC_J - KC_L)
  {43, 1, HSV_BLUE}, // Jump word left to blue (KC_O)
  {41, 1, HSV_BLUE}, // Jump word right to blue (KC_U)
  {8, 1, HSV_PURPLE}, // Ctrl backspace and delete keys to purple (KC_E)
  {15, 2, HSV_RED}, // Backspace and delete keys to red (KC_D - KC_G)
  {17, 1, HSV_PURPLE}, // Ctrl backspace and delete keys to purple (KC_G)
  {53, 1, HSV_PURPLE}, // Back page to green (KC_M)
  {55, 1, HSV_PURPLE} // Forward page to green (KC_>)
);

const rgblight_segment_t PROGMEM SYMBOLS_Layer[] = RGBLIGHT_LAYER_SEGMENTS(
  //{0, 61, RGB_OFF}, // Set all lights to off
  {6, 12, HSV_CHARTREUSE}, //Set Symbols layers to light up
  {40, 12, HSV_CHARTREUSE} //Set Symbols layers to light up
);

const rgblight_segment_t PROGMEM LIGHTS_Layer[] = RGBLIGHT_LAYER_SEGMENTS(
  {39, 1, HSV_RED}, // Set Off/On to be red (at KC_6)
  {35, 4, HSV_GREEN}, // Set the rest of that row to be green, these edit lights
  {44, 1, RGB_OFF}, // Cycle through effects (KC_P)
  {41, 1, HSV_PURPLE}, // Saturation down (KC_U)
  {42, 1, HSV_YELLOW}, // Cycle through colors (KC_I)
  {43, 1, HSV_WHITE} // Saturation down (KC_O)
);

const rgblight_segment_t PROGMEM NUMPAD_Layer[] = RGBLIGHT_LAYER_SEGMENTS(
  {0, 61, RGB_OFF}, // Set all lights to off
  {7, 3, HSV_GOLD}, // Numpad
  {14, 3, HSV_GOLD}, // Numpad
  {19, 3, HSV_GOLD}, // Numpad
  {24, 1, HSV_GOLD}, // Numpad
  {3, 3, HSV_SPRINGGREEN}, // Numpad functions (ie. +)
  {6, 1, HSV_SPRINGGREEN}, // Numpad functions (ie. +)
  {17, 1, HSV_SPRINGGREEN}, // Numpad functions (ie. +)
  {18, 1, HSV_SPRINGGREEN}, // Numpad functions (ie. +)
  {25, 1, HSV_SPRINGGREEN}, // Numpad functions (ie. +)
  {26, 1, HSV_RED}, // Enter to red
  {42, 1, HSV_CYAN}, // Nav to cyan (KC_I)
  {48, 3, HSV_CYAN} // Nav to cyan (KC_J - KC_L)
);

const rgblight_segment_t PROGMEM MOUSE_Layer[] = RGBLIGHT_LAYER_SEGMENTS(
  //{0, 61, RGB_OFF}, // Set all lights to off
  {43, 1, HSV_GREEN}, // Left tab to green (KC_O)
  {41, 1, HSV_GREEN}, // Right tab to green (KC_U)
  {42, 1, HSV_CYAN}, // Nav to cyan (KC_I)
  {48, 3, HSV_CYAN}, // Nav to cyan (KC_J - KC_L)
  {15, 2, HSV_RED}, // Left and right mouse to red (KC_D, KC_F)
  {7, 1, HSV_BLUE},  // Scroll up to green (KC_R)
  {19, 1, HSV_BLUE}, // Scroll up to green (KC_V)
  {6, 1, HSV_CYAN}, // Scroll right to green (KC_T)
  {8, 1, HSV_CYAN}, // Scroll left to green (KC_E)
  {13, 1, HSV_GREEN}, // Mouse speed adjust to yellow (KC_A)
  {53, 1, HSV_RED}, // Back page to green (KC_M)
  {55, 1, HSV_BLUE}, // Forward page to green (KC_>)
  {17, 1, HSV_PURPLE} // Middle mouse button to purple (KC_G)
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
  QWERTY_Layer,
  NAV_Layer,    
  SYMBOLS_Layer,    
  LIGHTS_Layer,     
  NUMPAD_Layer,
  MOUSE_Layer
);

void keyboard_post_init_user(void) {
  // Enable the LED layers
  rgblight_layers = my_rgb_layers;
}

// Enable and disabling lighting layers
layer_state_t default_layer_state_set_user(layer_state_t state) {
  // Both layers will light up if both kb layers are active
  rgblight_set_layer_state(0, layer_state_cmp(state, 0));
  return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  rgblight_set_layer_state(1, layer_state_cmp(state, 1));
  rgblight_set_layer_state(2, layer_state_cmp(state, 2));
  rgblight_set_layer_state(3, layer_state_cmp(state, 3));
  rgblight_set_layer_state(4, layer_state_cmp(state, 4));
  rgblight_set_layer_state(5, layer_state_cmp(state, 5));
  return state;
}
