/* Copyright 2023 Cyboard LLC (@Cyboard-DigitalTailor)
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_dual_arcs_let(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,      KC_BSPC,
        KC_TAB,  HOME_A,  HOME_S,  HOME_D,  HOME_F,  KC_G,                                KC_H,    HOME_J,  HOME_K,  HOME_L,  HOME_SCLN, KC_QUOT,
        KC_SPC,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,   KC_RSFT,
        KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_BSPC, MO(1), KC_ENT,             KC_SPC,  MO(2), KC_BSPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC,
                                                       KC_SPC,  KC_SPC,       KC_SPC,  KC_SPC
    ),

    [1] = LAYOUT_dual_arcs_let(
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
                                                     _______, _______,         _______, _______
    ),

    [2] = LAYOUT_dual_arcs_let(
        _______, _______, _______, _______, _______, _______,                           _______, KC_HOME, KC_UP,   KC_END,  _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
                                                     _______, _______,         _______, _______
    )

};
