/* Copyright 2018 Carlos Filoteo
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
#ifdef LED_ENABLE
  #include "protocol/serial.h"
#endif

#define _______ KC_TRNS
#define LT3_TAB LT(3, KC_TAB)
#define MT_RSFT_ENT MT(MOD_RSFT, KC_ENT)

enum custom_keycodes {
    LED_TOG = SAFE_RANGE,
    LED_CHG
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Base Layer
   * ,-------------------------------------------------------------------------.
   * | Esc |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |Bspace |
   * |-------------------------------------------------------------------------+
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
   * |Tab/L3|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  | Sh/En|
=======
   * |Tab/L3|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |   '  |
>>>>>>> initial UT47
=======
   * |Tab/L3|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  | Sh/En|
>>>>>>> some changes in my UT47
   * |-------------------------------------------------------------------------+
   * | Shift |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  Up |  /  |
   * |-------------------------------------------------------------------------+
<<<<<<< HEAD
<<<<<<< HEAD
   * | App | Ctrl| Alt | Gui |  L2  |   Space   |  L1  | ' | Left | Down |Right|
=======
   * |Tab/L3|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |   '  |
=======
   * |Tab/L3|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  | Sh/En|
>>>>>>> changes in keymap for a test
   * |-------------------------------------------------------------------------+
   * | Shift |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  Up |  /  |
   * |-------------------------------------------------------------------------+
<<<<<<< HEAD
<<<<<<< HEAD
   * | Ctrl| Alt | Gui | App |  L2  |   Space   |  L1  | Left| Down|  Up |Right|
>>>>>>> initial UT47
=======
   * | App | Ctrl| Alt | Gui |  L2  |   Space   |  L1  | / | Left | Down |Right|
>>>>>>> modified keymap with audio & volume, keys more macish
=======
   * | App | Ctrl| Alt | Gui |  L2  |   Space   |  L1  | ' | Left | Down |Right|
>>>>>>> changes in keymap for a test
=======
   * |Tab/L3|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |   '  |
=======
   * |Tab/L3|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  | Sh/En|
>>>>>>> changes in keymap for a test
=======
   * |Tab/L3|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |   '  |
>>>>>>> initial UT47
=======
   * |Tab/L3|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  | Sh/En|
>>>>>>> some changes in my UT47
   * |-------------------------------------------------------------------------+
   * | Shift |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  Up |  /  |
   * |-------------------------------------------------------------------------+
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
   * | Ctrl| Alt | Gui | App |  L2  |   Space   |  L1  | Left| Down|  Up |Right|
>>>>>>> initial UT47
=======
   * | App | Ctrl| Alt | Gui |  L2  |   Space   |  L1  | / | Left | Down |Right|
>>>>>>> modified keymap with audio & volume, keys more macish
=======
   * | App | Ctrl| Alt | Gui |  L2  |   Space   |  L1  | ' | Left | Down |Right|
>>>>>>> changes in keymap for a test
=======
   * | Ctrl| Alt | Gui | App |  L2  |   Space   |  L1  | Left| Down|  Up |Right|
>>>>>>> initial UT47
=======
   * | App | Ctrl| Alt | Gui |  L2  |   Space   |  L1  | ' | Left | Down |Right|
>>>>>>> some changes in my UT47
=======
   * | Ctrl| Alt | Gui | App |  L2  |   Space   |  L1  | Left| Down|  Up |Right|
>>>>>>> initial UT47
=======
   * | App | Ctrl| Alt | Gui |  L2  |   Space   |  L1  | ' | Left | Down |Right|
>>>>>>> some changes in my UT47
=======
   * |Tab/L3|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  | Sh/En|
   * |-------------------------------------------------------------------------+
   * | Shift |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  Up |  /  |
   * |-------------------------------------------------------------------------+
   * | App | Ctrl| Alt | Gui |  L2  |   Space   |  L1  | ' | Left | Down |Right|
>>>>>>> current ut47 re-add
   * `-------------------------------------------------------------------------'
   */

LAYOUT(
  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  LT3_TAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, MT_RSFT_ENT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_SLSH,
  KC_APP,  KC_LCTL, KC_LALT, KC_LGUI, MO(2),      KC_SPC,        MO(1),   KC_QUOT, KC_LEFT, KC_DOWN, KC_RGHT
=======
  LT3_TAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
<<<<<<< HEAD
<<<<<<< HEAD
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, MT_RSFT_ENT,
  KC_LCTL, KC_LALT, KC_LGUI, KC_APP,  MO(2),      KC_SPC,        MO(1),  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
>>>>>>> initial UT47
=======
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   MT_RSFT_ENT,
  KC_APP,  KC_LCTL, KC_LALT, KC_LGUI, MO(2),      KC_SPC,        MO(1),   KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT
>>>>>>> modified keymap with audio & volume, keys more macish
=======
  LT3_TAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, MT_RSFT_ENT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_SLSH,
  KC_APP,  KC_LCTL, KC_LALT, KC_LGUI, MO(2),      KC_SPC,        MO(1),   KC_QUOT, KC_LEFT, KC_DOWN, KC_RGHT
>>>>>>> changes in keymap for a test
=======
  LT3_TAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, MT_RSFT_ENT,
  KC_LCTL, KC_LALT, KC_LGUI, KC_APP,  MO(2),      KC_SPC,        MO(1),  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
>>>>>>> initial UT47
=======
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   MT_RSFT_ENT,
  KC_APP,  KC_LCTL, KC_LALT, KC_LGUI, MO(2),      KC_SPC,        MO(1),   KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT
>>>>>>> modified keymap with audio & volume, keys more macish
=======
  LT3_TAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, MT_RSFT_ENT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_SLSH,
  KC_APP,  KC_LCTL, KC_LALT, KC_LGUI, MO(2),      KC_SPC,        MO(1),   KC_QUOT, KC_LEFT, KC_DOWN, KC_RGHT
>>>>>>> changes in keymap for a test
=======
  LT3_TAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, MT_RSFT_ENT,
  KC_LCTL, KC_LALT, KC_LGUI, KC_APP,  MO(2),      KC_SPC,        MO(1),  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
>>>>>>> initial UT47
=======
  LT3_TAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, MT_RSFT_ENT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_SLSH,
  KC_APP,  KC_LCTL, KC_LALT, KC_LGUI, MO(2),      KC_SPC,        MO(1),   KC_QUOT, KC_LEFT, KC_DOWN, KC_RGHT
>>>>>>> some changes in my UT47
=======
  LT3_TAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, MT_RSFT_ENT,
  KC_LCTL, KC_LALT, KC_LGUI, KC_APP,  MO(2),      KC_SPC,        MO(1),  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
>>>>>>> initial UT47
=======
  LT3_TAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, MT_RSFT_ENT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_SLSH,
  KC_APP,  KC_LCTL, KC_LALT, KC_LGUI, MO(2),      KC_SPC,        MO(1),   KC_QUOT, KC_LEFT, KC_DOWN, KC_RGHT
>>>>>>> some changes in my UT47
=======
  LT3_TAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, MT_RSFT_ENT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_SLSH,
  KC_APP,  KC_LCTL, KC_LALT, KC_LGUI, MO(2),      KC_SPC,        MO(1),   KC_QUOT, KC_LEFT, KC_DOWN, KC_RGHT
>>>>>>> current ut47 re-add
),

  /* FN Layer 1
   * ,-------------------------------------------------------------------------.
   * | ` ~ |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  | Delete|
   * |-------------------------------------------------------------------------+
   * |      |     |     |     |     |     |  #  |  -  |  =  |  [  |  ]  |  \   |
   * |-------------------------------------------------------------------------+
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
   * |       | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | MUT |
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       |     | VU- | VU+ | >|  |
=======
   * |       | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 |     |
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       | Home| PgDn| PgUp| End |
>>>>>>> initial UT47
=======
   * |       | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | VU+ | MUT |
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       |     |     | VU- | >|  |
>>>>>>> modified keymap with audio & volume, keys more macish
=======
   * |       | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | MUT |
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       |     | VU- | VU+ | >|  |
>>>>>>> changes in keymap for a test
=======
   * |       | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 |     |
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       | Home| PgDn| PgUp| End |
>>>>>>> initial UT47
=======
   * |       | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | VU+ | MUT |
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       |     |     | VU- | >|  |
>>>>>>> modified keymap with audio & volume, keys more macish
=======
   * |       | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | MUT |
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       |     | VU- | VU+ | >|  |
>>>>>>> changes in keymap for a test
=======
   * |       | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 |     |
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       | Home| PgDn| PgUp| End |
>>>>>>> initial UT47
=======
   * |       | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | MUT |
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       |     | VU- | VU+ | >|  |
>>>>>>> some changes in my UT47
=======
   * |       | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 |     |
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       | Home| PgDn| PgUp| End |
>>>>>>> initial UT47
=======
   * |       | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | MUT |
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       |     | VU- | VU+ | >|  |
>>>>>>> some changes in my UT47
=======
   * |       | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | MUT |
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       |     | VU- | VU+ | >|  |
>>>>>>> current ut47 re-add
   * `-------------------------------------------------------------------------'
   */

LAYOUT( /* Right */
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DELETE,
  _______, _______, _______, _______, _______, _______, KC_NUHS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_NUBS,
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_MUTE,
  _______, _______, _______, KC_CAPS, _______,     _______,     _______,  _______, KC_VOLD, KC_VOLU, KC_MPLY
=======
  _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  _______,
  _______, _______, _______, KC_CAPS, _______,     _______,      _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END
>>>>>>> initial UT47
=======
  _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_VOLU, KC_MUTE,
  _______, _______, _______, KC_CAPS, _______,     _______,     _______,  _______, _______, KC_VOLD, KC_MPLY
>>>>>>> modified keymap with audio & volume, keys more macish
=======
  _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_MUTE,
  _______, _______, _______, KC_CAPS, _______,     _______,     _______,  _______, KC_VOLD, KC_VOLU, KC_MPLY
>>>>>>> changes in keymap for a test
=======
  _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  _______,
  _______, _______, _______, KC_CAPS, _______,     _______,      _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END
>>>>>>> initial UT47
=======
  _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_VOLU, KC_MUTE,
  _______, _______, _______, KC_CAPS, _______,     _______,     _______,  _______, _______, KC_VOLD, KC_MPLY
>>>>>>> modified keymap with audio & volume, keys more macish
=======
  _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_MUTE,
  _______, _______, _______, KC_CAPS, _______,     _______,     _______,  _______, KC_VOLD, KC_VOLU, KC_MPLY
>>>>>>> changes in keymap for a test
=======
  _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  _______,
  _______, _______, _______, KC_CAPS, _______,     _______,      _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END
>>>>>>> initial UT47
=======
  _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_MUTE,
  _______, _______, _______, KC_CAPS, _______,     _______,     _______,  _______, KC_VOLD, KC_VOLU, KC_MPLY
>>>>>>> some changes in my UT47
=======
  _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  _______,
  _______, _______, _______, KC_CAPS, _______,     _______,      _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END
>>>>>>> initial UT47
=======
  _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_MUTE,
  _______, _______, _______, KC_CAPS, _______,     _______,     _______,  _______, KC_VOLD, KC_VOLU, KC_MPLY
>>>>>>> some changes in my UT47
=======
  _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_MUTE,
  _______, _______, _______, KC_CAPS, _______,     _______,     _______,  _______, KC_VOLD, KC_VOLU, KC_MPLY
>>>>>>> current ut47 re-add
),

  /* FN Layer 2
   * ,-------------------------------------------------------------------------.
   * |   ~  |  !  |  @  |  #  |  $  |  %  |  ^  |  &  |  *  |  (  |  )  |Delete|
   * |-------------------------------------------------------------------------+
   * |      |     |     |     |     |     |     |  _  |  +  |  { |  }  |   |   |
   * |-------------------------------------------------------------------------+
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
   * |       | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | Mute|
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       |     | <<  | >>  | >|  |
=======
   * |       | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 |     |
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       | Home| PgDn| PgUp| End |
>>>>>>> initial UT47
=======
   * |       | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | Mute|
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       |     | <<  | >>  | >|  |
>>>>>>> modified keymap with audio & volume, keys more macish
=======
   * |       | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 |     |
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       | Home| PgDn| PgUp| End |
>>>>>>> initial UT47
=======
   * |       | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | Mute|
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       |     | <<  | >>  | >|  |
>>>>>>> modified keymap with audio & volume, keys more macish
=======
   * |       | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 |     |
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       | Home| PgDn| PgUp| End |
>>>>>>> initial UT47
=======
   * |       | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | Mute|
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       |     | <<  | >>  | >|  |
>>>>>>> some changes in my UT47
=======
   * |       | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 |     |
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       | Home| PgDn| PgUp| End |
>>>>>>> initial UT47
=======
   * |       | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | Mute|
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       |     | <<  | >>  | >|  |
>>>>>>> some changes in my UT47
=======
   * |       | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | Mute|
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       |     | <<  | >>  | >|  |
>>>>>>> current ut47 re-add
   * `-------------------------------------------------------------------------'
   */

LAYOUT( /* Left */
  KC_TILDE,  KC_EXCLAIM,  KC_AT,  KC_HASH,  KC_DOLLAR, KC_PERCENT, KC_CIRCUMFLEX, KC_AMPERSAND, KC_ASTERISK, KC_LEFT_PAREN, KC_RIGHT_PAREN, KC_DELETE,
  _______, _______, _______, _______, _______, _______, _______, KC_UNDERSCORE, KC_PLUS, KC_LEFT_CURLY_BRACE, KC_RIGHT_CURLY_BRACE, KC_PIPE,
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_MUTE,
  _______, _______, _______, KC_CAPS, _______,     _______,      _______, _______, KC_MRWD, KC_MFFD, KC_MPLY
=======
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
  _______, _______, _______, KC_CAPS, _______,     _______,      _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END
>>>>>>> initial UT47
=======
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_MUTE,
  _______, _______, _______, KC_CAPS, _______,     _______,      _______, _______, KC_MRWD, KC_MFFD, KC_MPLY
>>>>>>> modified keymap with audio & volume, keys more macish
=======
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
  _______, _______, _______, KC_CAPS, _______,     _______,      _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END
>>>>>>> initial UT47
=======
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_MUTE,
  _______, _______, _______, KC_CAPS, _______,     _______,      _______, _______, KC_MRWD, KC_MFFD, KC_MPLY
>>>>>>> modified keymap with audio & volume, keys more macish
=======
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
  _______, _______, _______, KC_CAPS, _______,     _______,      _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END
>>>>>>> initial UT47
=======
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_MUTE,
  _______, _______, _______, KC_CAPS, _______,     _______,      _______, _______, KC_MRWD, KC_MFFD, KC_MPLY
>>>>>>> some changes in my UT47
=======
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
  _______, _______, _______, KC_CAPS, _______,     _______,      _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END
>>>>>>> initial UT47
=======
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_MUTE,
  _______, _______, _______, KC_CAPS, _______,     _______,      _______, _______, KC_MRWD, KC_MFFD, KC_MPLY
>>>>>>> some changes in my UT47
=======
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_MUTE,
  _______, _______, _______, KC_CAPS, _______,     _______,      _______, _______, KC_MRWD, KC_MFFD, KC_MPLY
>>>>>>> current ut47 re-add
),

  /* FN Layer 3
   * ,-------------------------------------------------------------------------.
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
   * | Esc |     |     |     | RST |     |     |     |     |     |PrtSc|       |
   * |-------------------------------------------------------------------------+
   * |      |R_TOG|R_MOD|R_HUI|R_HUD|R_SAI|R_SAD|R_VAI|R_VAD|     |     |      |
   * |-------------------------------------------------------------------------+
   * |       |LEDtg|LEDch|     |     |     |     |     |     | McL |MousU| McR |
   * |-------------------------------------------------------------------------+
   * |     |     |     |     |      |          |       |     |MousL|MousD|MousR|
=======
   * | Esc | Calc|Webhm| Mail| Comp|     |     |     |     |     |PrtSc|       |
=======
   * | Esc |     |     |     | RST |     |     |     |     |     |PrtSc|       |
>>>>>>> some changes in my UT47
=======
   * | Esc | Calc|Webhm| Mail| Comp|     |     |     |     |     |PrtSc|       |
>>>>>>> initial UT47
=======
   * | Esc |     |     |     | RST |     |     |     |     |     |PrtSc|       |
>>>>>>> some changes in my UT47
=======
   * | Esc |     |     |     | RST |     |     |     |     |     |PrtSc|       |
>>>>>>> current ut47 re-add
   * |-------------------------------------------------------------------------+
   * |      | A   |     |     |     |     |     |     |     |     |     |      |
   * |-------------------------------------------------------------------------+
   * |       |LEDtg|LEDch|RGB |     |     |     |     |     | McL |MousU| McR |
   * |-------------------------------------------------------------------------+
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
   * |     |     |     |     |      |          |       |MousL|MousD|MousU|MousR|
>>>>>>> initial UT47
=======
   * |     |     |     |     |      |          |       |     |MousL|MousD|MousR|
>>>>>>> modified keymap with audio & volume, keys more macish
=======
   * | Esc | Calc|Webhm| Mail| Comp|     |     |     |     |     |PrtSc|       |
=======
   * | Esc |     |     |     | RST |     |     |     |     |     |PrtSc|       |
>>>>>>> some changes in my UT47
=======
   * | Esc | Calc|Webhm| Mail| Comp|     |     |     |     |     |PrtSc|       |
>>>>>>> initial UT47
=======
   * | Esc |     |     |     | RST |     |     |     |     |     |PrtSc|       |
>>>>>>> some changes in my UT47
   * |-------------------------------------------------------------------------+
   * |      | A   |     |     |     |     |     |     |     |     |     |      |
   * |-------------------------------------------------------------------------+
   * |       |LEDtg|LEDch|RGB |     |     |     |     |     | McL |MousU| McR |
   * |-------------------------------------------------------------------------+
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
   * |     |     |     |     |      |          |       |MousL|MousD|MousU|MousR|
>>>>>>> initial UT47
=======
   * |     |     |     |     |      |          |       |     |MousL|MousD|MousR|
>>>>>>> modified keymap with audio & volume, keys more macish
=======
   * |     |     |     |     |      |          |       |MousL|MousD|MousU|MousR|
>>>>>>> initial UT47
=======
   * |     |     |     |     |      |          |       |     |MousL|MousD|MousR|
>>>>>>> some changes in my UT47
=======
   * |     |     |     |     |      |          |       |MousL|MousD|MousU|MousR|
>>>>>>> initial UT47
=======
   * |     |     |     |     |      |          |       |     |MousL|MousD|MousR|
>>>>>>> some changes in my UT47
=======
   * |     |     |     |     |      |          |       |     |MousL|MousD|MousR|
>>>>>>> current ut47 re-add
   * `-------------------------------------------------------------------------'
   */

LAYOUT( /* Tab */
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> some changes in my UT47
  KC_ESC,  _______, _______, _______, RESET,   _______, _______, _______, _______, _______, KC_PSCR, _______,
  _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______,
  _______, LED_TOG, LED_CHG,  _______, _______, _______, _______, _______, _______, KC_BTN1, KC_MS_U, KC_BTN2,
  _______, _______, _______, _______, _______, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_R
<<<<<<< HEAD
=======
  KC_ESC,  KC_CALC, KC_WHOM, KC_MAIL, KC_MYCM, _______, _______, _______, _______, _______, KC_PSCR, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
<<<<<<< HEAD
<<<<<<< HEAD
  _______, LED_TOG, LED_CHG, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______,     _______,      _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R
>>>>>>> initial UT47
=======
  _______, LED_TOG, LED_CHG, _______, _______, _______, _______, _______, _______, KC_BTN1, KC_MS_U, KC_BTN2,
  _______, _______, _______, _______, _______,     _______,      _______, _______, KC_MS_L, KC_MS_D, KC_MS_R
>>>>>>> modified keymap with audio & volume, keys more macish
=======
>>>>>>> some changes in my UT47
=======
  KC_ESC,  KC_CALC, KC_WHOM, KC_MAIL, KC_MYCM, _______, _______, _______, _______, _______, KC_PSCR, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, LED_TOG, LED_CHG, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______,     _______,      _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R
>>>>>>> initial UT47
=======
  _______, LED_TOG, LED_CHG, _______, _______, _______, _______, _______, _______, KC_BTN1, KC_MS_U, KC_BTN2,
  _______, _______, _______, _______, _______,     _______,      _______, _______, KC_MS_L, KC_MS_D, KC_MS_R
>>>>>>> modified keymap with audio & volume, keys more macish
=======
  KC_ESC,  _______, _______, _______, RESET,   _______, _______, _______, _______, _______, KC_PSCR, _______,
  _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______,
  _______, LED_TOG, LED_CHG,  _______, _______, _______, _______, _______, _______, KC_BTN1, KC_MS_U, KC_BTN2,
  _______, _______, _______, _______, _______, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_R
>>>>>>> some changes in my UT47
=======
  KC_ESC,  KC_CALC, KC_WHOM, KC_MAIL, KC_MYCM, _______, _______, _______, _______, _______, KC_PSCR, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, LED_TOG, LED_CHG, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______,     _______,      _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R
>>>>>>> initial UT47
=======
=======
>>>>>>> some changes in my UT47
=======
>>>>>>> current ut47 re-add
  KC_ESC,  _______, _______, _______, RESET,   _______, _______, _______, _______, _______, KC_PSCR, _______,
  _______, KC_A,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, LED_TOG, LED_CHG, RGB_TOG, _______, _______, _______, _______, _______, KC_BTN1, KC_MS_U, KC_BTN2,
  _______, _______, _______, _______, _______, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_R
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> some changes in my UT47
=======
  KC_ESC,  KC_CALC, KC_WHOM, KC_MAIL, KC_MYCM, _______, _______, _______, _______, _______, KC_PSCR, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, LED_TOG, LED_CHG, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______,     _______,      _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R
>>>>>>> initial UT47
=======
>>>>>>> some changes in my UT47
=======
>>>>>>> current ut47 re-add
),
};

//LED keymap functions
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#ifdef LED_ENABLE
=======
 #ifdef LED_ENABLE
>>>>>>> initial UT47
=======
#ifdef LED_ENABLE
>>>>>>> some changes in my UT47
=======
 #ifdef LED_ENABLE
>>>>>>> initial UT47
=======
#ifdef LED_ENABLE
>>>>>>> some changes in my UT47
=======
 #ifdef LED_ENABLE
>>>>>>> initial UT47
=======
#ifdef LED_ENABLE
>>>>>>> some changes in my UT47
=======
 #ifdef LED_ENABLE
>>>>>>> initial UT47
=======
#ifdef LED_ENABLE
>>>>>>> some changes in my UT47
=======
#ifdef LED_ENABLE
>>>>>>> current ut47 re-add
void led_chmode(void) {
  serial_send(101);
}

void led_toggle(void) {
  serial_send(100);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch(keycode) {
      case LED_TOG:
        #ifdef LED_ENABLE
        led_toggle();
        #endif
        return false;
      case LED_CHG:
        #ifdef LED_ENABLE
        led_chmode();
        #endif
        return false;
    }
  }
  return true;
};
#endif
