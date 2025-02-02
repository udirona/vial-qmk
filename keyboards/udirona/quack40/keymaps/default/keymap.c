/* Copyright 2021 kb-elmo<mail@elmo.space>
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

enum layers {
    BASE,
    NUMBER,
    NAV,
    SYS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_long_space(
        KC_Q,           KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,           KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_ENT,
        LT(1,KC_Z),     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, LT(2,KC_DOT),
        KC_LCTL, KC_LGUI, KC_LALT,           LSFT_T(KC_SPC),           KC_RALT, MO(1),   MO(3)
    ),

    [NUMBER] = LAYOUT_long_space(
        KC_1,           KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_TAB,         KC_ESC,  KC_MINS, KC_EQL,  KC_TRNS, KC_SCLN, KC_QUOT, KC_LBRC, KC_RBRC, KC_BSLS,
        KC_CAPS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_SLSH,
        KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [NAV] = LAYOUT_long_space(
        KC_HOME, KC_UP,   KC_END,  KC_PGUP, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,
        KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS,             KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [SYS] = LAYOUT_long_space(
        QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS,             KC_TRNS, KC_TRNS, KC_TRNS
    )
};



