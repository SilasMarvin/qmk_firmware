/* Copyright 2023 Cyboard LLC (@Cyboard-DigitalTailor)
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_dual_arcs_let(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                KC_Y,  KC_U,    KC_I,    KC_O,    KC_P,      KC_BSPC,
        KC_TAB,  HOME_A,  HOME_S,  HOME_D,  HOME_F,  KC_G,                                KC_H,  HOME_J,  HOME_K,  HOME_L,  HOME_SCLN, KC_QUOT,
        _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                KC_N,  KC_M,    KC_COMM, KC_DOT,  KC_SLSH,   KC_RSFT,
        _______, _______, _______, _______, MO(3), MO(1),   KC_ENT,          KC_SPC,  MO(2),   KC_BSPC, _______, _______, _______, _______,
                                                     _______, _______,         _______, _______
    ),

    [1] = LAYOUT_dual_arcs_let(
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, KC_BSPC,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, KC_BSPC, _______,   KC_ENT,          KC_SPC,  MO(2),   KC_BSPC, _______, _______, _______, _______,
                                                     _______, _______,         _______, _______
    ),

    [2] = LAYOUT_dual_arcs_let(
        _______, KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,                            _______, KC_MINS, KC_PLUS, KC_EQL,  _______, KC_BSPC,
        _______, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_BSLS,                           _______, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, _______,
        _______, _______, _______, KC_UNDS, KC_PIPE, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, KC_BSPC, MO(1),   KC_ENT,          KC_SPC,  _______, KC_BSPC, _______, _______, _______, _______,
                                                     _______, _______,         _______, _______
    ),

    [3] = LAYOUT_dual_arcs_let(
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, KC_BSPC,
        _______, _______, _______, _______, _______, _______,                           _______, KC_DOWN,   KC_UP, KC_RIGHT, KC_LEFT, _______,
        _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, KC_BSPC, MO(1),   KC_ENT,          KC_SPC,  MO(2),   KC_BSPC, _______, _______, _______,  _______ ,
                                                     _______, _______,         _______, _______
    ),
};
