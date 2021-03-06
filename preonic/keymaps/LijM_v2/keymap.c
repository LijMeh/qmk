/* Copyright 2015-2017 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
*
* This file was generated by qmk json2c. You may or may not want to
* edit it directly.
*/

enum {
  TD_FN = 0,
  TD_CMD,
  TD_BCK,
  TD_FWD,
  TD_PGDWN,
  TD_PGUP,
  /* TD_SHFT, */
  TD_MENU
  /* TD_LSHFT */
};

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_FN] = ACTION_TAP_DANCE_LAYER_TOGGLE(KC_F13, 3),
  [TD_CMD] = ACTION_TAP_DANCE_DOUBLE(KC_LGUI, LALT(KC_SPC)),
  [TD_BCK] = ACTION_TAP_DANCE_DOUBLE(SGUI(KC_LBRC), LGUI(KC_LBRC)),
  [TD_FWD] = ACTION_TAP_DANCE_DOUBLE(SGUI(KC_RBRC), LGUI(KC_RBRC)),
  [TD_PGDWN] = ACTION_TAP_DANCE_DOUBLE(KC_PGDOWN, KC_END),
  [TD_PGUP] = ACTION_TAP_DANCE_DOUBLE(KC_PGUP, KC_HOME),
  /*[TD_SHFT] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS), */
  [TD_MENU] = ACTION_TAP_DANCE_DOUBLE(LALT(KC_F1), LALT(KC_F2))
  /*[TD_LSHFT] = ACTION_TAP_DANCE_DOUBLE(KC_LSHIFT, KC_ENT) */
};

/* This isn't working for now, but hopefully will be updated down the line to function */
enum combo_events {
  CMDSHFT_ENTER
};

const uint16_t PROGMEM cmdshft_combo[] = {KC_LGUI, KC_LSHIFT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [CMDSHFT_ENTER] = COMBO_ACTION(cmdshft_combo)
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case CMDSHFT_ENTER:
      if (pressed) {
        tap_code16(LGUI(KC_ENT));
      }
      break;
  }
}
/* Don't forget to update the number of combos in the config.h file! */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_preonic_1x2uC(
    KC_GESC,         KC_1,        KC_2,    KC_3,           KC_4,  KC_5,    KC_6,   KC_7,  KC_8,           KC_9,      KC_0,        KC_MINS, 
    KC_TAB,          KC_Q,        KC_W,    KC_E,           KC_R,  KC_T,    KC_Y,   KC_U,  KC_I,           KC_O,      KC_P,        KC_BSLS, 
    LCTL_T(KC_ENT),          KC_A,        KC_S,    KC_D,           KC_F,  KC_G,    KC_H,   KC_J,  KC_K,           KC_L,      KC_SCLN,     KC_QUOT, 
    KC_LSFT,         KC_Z,        KC_X,    KC_C,           KC_V,  KC_B,    KC_N,   KC_M,  KC_COMM,        KC_DOT,    KC_SLSH,     LT(5,KC_ENT), 
    TD(TD_MENU),       TD(TD_FN), KC_LALT, TD(TD_CMD), MO(1),      KC_SPC,     MO(2), TD(TD_BCK), TD(TD_PGDWN), TD(TD_PGUP),   TD(TD_FWD)
  ),
  
  [1] = LAYOUT_preonic_1x2uC(
    KC_GRV,         SGUI(KC_F), SGUI(KC_4), KC_NO,         KC_NO,      KC_NO,        KC_NO, KC_NO,         KC_NO,         KC_LBRC,       KC_RBRC,    KC_EQL,
    KC_NO,          LGUI(KC_Q), LGUI(KC_W), LALT(KC_BSPC), LGUI(KC_R), LGUI(KC_T),   KC_NO, LALT(KC_LEFT), KC_UP,         LALT(KC_RGHT), KC_NO,      KC_NO, 
    LCTL_T(KC_ENT), KC_NO,      LGUI(KC_S), KC_BSPC,       KC_DEL,     LALT(KC_DEL), KC_NO, KC_LEFT,       KC_DOWN,       KC_RGHT,       KC_ENT,     KC_NO, 
    KC_LSFT,   LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C),    LGUI(KC_V), KC_NO,        KC_NO, KC_NO,         KC_NO, KC_NO, KC_MPLY, KC_MUTE,
    KC_NO,        KC_NO,    KC_TRNS,    KC_TRNS,       KC_NO,          KC_SPC,    MO(4),       KC_MPRV, KC_VOLD,    KC_VOLU,                KC_MNXT
  ),
  
  [2] = LAYOUT_preonic_1x2uC(
    KC_GRV,         SGUI(KC_F),  SGUI(KC_4), KC_NO,          KC_NO,      KC_NO,        KC_NO,   KC_NO,         KC_NO,   KC_LBRC,       KC_RBRC, KC_EQL, 
    KC_GESC,         KC_1,        KC_2,    KC_3,           KC_4,  KC_5,    KC_6,   KC_7,  KC_8,           KC_9,      KC_0,        KC_MINS, 
    KC_TILD,          KC_EXLM,    KC_AT,   KC_HASH,        KC_DLR, KC_PERC, KC_CIRC, KC_AMPR,    KC_ASTR,    KC_LPRN, KC_RPRN, KC_EQL,
    KC_LSFT, LGUI(KC_Z),  LGUI(KC_X),   LGUI(KC_C),     LGUI(KC_V), KC_NO,        KC_NO,   KC_NO,         KC_NO,   KC_LBRC,       KC_RBRC,   KC_NO, 
    KC_NO,        KC_NO,     KC_TRNS,    KC_TRNS,        MO(4),             KC_SPC,         KC_NO,       KC_MPRV, KC_VOLD, KC_VOLU,     KC_MNXT
  ),
  
  [3] = LAYOUT_preonic_1x2uC(
    KC_NO,   KC_NO, KC_PSLS, KC_PAST, KC_PMNS, KC_NO,        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, 
    KC_TAB,  KC_P7, KC_P8,   KC_P9,   KC_PPLS, KC_NO,        KC_NO, KC_NO,   KC_UP,   KC_NO,   KC_NO, KC_NO, 
    KC_ENT, KC_P4, KC_P5,   KC_P6,   KC_COMM, KC_NO,        KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO, 
    KC_BSPC,  KC_P1, KC_P2,   KC_P3,   KC_PEQL, KC_NO,        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_ENT, 
    KC_NO, TD(TD_FN), KC_DOT,   KC_P0,   MO(1),       KC_SPC,        KC_NO, KC_LEFT, KC_DOWN, KC_UP,      KC_RGHT
  ),
  
  [4] = LAYOUT_preonic_1x2uC(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO, 
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_WH_D, KC_NO,       KC_NO,  KC_NO,   KC_MS_U, KC_NO,   KC_NO,  KC_NO, 
    KC_NO, KC_ACL1, KC_ACL1, KC_BTN2, KC_BTN1, KC_NO,       KC_NO,  KC_MS_L, KC_MS_D, KC_MS_R, KC_ENT, KC_NO, 
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_WH_U, KC_NO,       KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO, 
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_TRNS,       KC_SPC,        KC_TRNS, KC_NO,   KC_NO,   KC_NO,  KC_NO
  ),
  
  [5] = LAYOUT_preonic_1x2uC(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_TRNS,       KC_SPC,        KC_TRNS,   KC_NO, KC_SLCK, KC_PAUSE, KC_NO
  )

};
