#include QMK_KEYBOARD_H
#include "pmjpmj.h"


enum Layers {
    L_BASE, L_BASE_GAME, L_BASE_COLEMAK_DH_HRM, L_BASE_COLEMAK_DH, L_BASE_COLEMAK_DH_ANSI_HRM, L_BASE_COLEMAK_DH_ANSI, L_LOWER, L_RAISE, L_ADJUST, L_ONESHOT
};

#define LAYOUT LAYOUT_60_hhkb
#define LAYOUT_wrapped(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	// Default layer
	[L_BASE] = LAYOUT_wrapped(
		KC_GRV,  ___________________NUM_L1__________________,      ___________________NUM_R1__________________, KC_MINS, KC_EQL,  KC_BSLS, KC_DEL,
		KC_TAB,  _________________QWERTY_L1_________________,      _________________QWERTY_R1_________________, KC_LBRC, KC_RBRC, KC_BSPC,
		CTL_ESC, _________________QWERTY_L2_________________,      _________________QWERTY_R2_________________, KC_QUOT, KC_ENT,
		KC_LSFT, _________________QWERTY_L3_________________,      _________________QWERTY_R3_________________, KC_RSFT, LOWER,
				KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, RAISE),

	[L_BASE_GAME] = LAYOUT_wrapped(
		KC_GRV,  ___________________NUM_L1__________________,      ___________________NUM_R1__________________, KC_MINS, KC_EQL,  KC_BSLS, KC_DEL,
		KC_TAB,  _________________QWERTY_L1_________________,      _________________QWERTY_R1_________________, KC_LBRC, KC_RBRC, KC_BSPC,
		KC_LCTL, _________________QWERTY_L2_________________,      _________________QWERTY_R2_________________, KC_QUOT, KC_ENT,
		KC_LSFT, _________________QWERTY_L3_________________,      _________________QWERTY_R3_________________, KC_RSFT, LOWER,
				KC_LGUI, KC_LALT,                            KC_SPC,                             KC_ESC, RAISE),

	[L_BASE_COLEMAK_DH_HRM] = LAYOUT_wrapped(
		KC_GRV,  ___________________NUM_L1__________________,      ___________________NUM_R1__________________, KC_MINS, KC_EQL,  KC_BSLS, KC_DEL,
		KC_TAB,  ______________COLEMAK_MOD_DH_L1____________,      ______________COLEMAK_MOD_DH_R1____________, KC_LBRC, KC_RBRC, KC_BSPC,
		CTL_ESC, ______________COLEMAK_MOD_DH_HRM_L2________,      ______________COLEMAK_MOD_DH_HRM_R2________, KC_QUOT, KC_ENT,
		KC_LSFT, ______________COLEMAK_MOD_DH_L3____________,      ______________COLEMAK_MOD_DH_R3____________, KC_RSFT, LOWER,
				KC_LGUI, KC_LALT,                            CTL_SPC,                             KC_RALT, RAISE),


	[L_BASE_COLEMAK_DH] = LAYOUT_wrapped(
		KC_GRV,  ___________________NUM_L1__________________,      ___________________NUM_R1__________________, KC_MINS, KC_EQL,  KC_BSLS, KC_DEL,
		KC_TAB,  ______________COLEMAK_MOD_DH_L1____________,      ______________COLEMAK_MOD_DH_R1____________, KC_LBRC, KC_RBRC, KC_BSPC,
		CTL_ESC, ______________COLEMAK_MOD_DH_L2____________,      ______________COLEMAK_MOD_DH_R2____________, KC_QUOT, KC_ENT,
		KC_LSFT, ______________COLEMAK_MOD_DH_L3____________,      ______________COLEMAK_MOD_DH_R3____________, KC_RSFT, LOWER,
				KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, RAISE),

    [L_BASE_COLEMAK_DH_ANSI_HRM] = LAYOUT_wrapped(
		KC_GRV,  ___________________NUM_L1__________________,      ___________________NUM_R1__________________, KC_MINS, KC_EQL,  KC_BSLS, KC_DEL,
		KC_TAB,  ______________COLEMAK_MOD_DH_L1____________,      ______________COLEMAK_MOD_DH_R1____________, KC_LBRC, KC_RBRC, KC_BSPC,
		CTL_ESC, ______________COLEMAK_MOD_DH_HRM_L2________,      ______________COLEMAK_MOD_DH_HRM_R2________, KC_QUOT, KC_ENT,
		KC_LSFT, ______________COLEMAK_MOD_DH_ANSI_L3_______,      ______________COLEMAK_MOD_DH_R3____________, KC_RSFT, LOWER,
				KC_LGUI, KC_LALT,                            CTL_SPC,                             KC_RALT, RAISE),

    [L_BASE_COLEMAK_DH_ANSI] = LAYOUT_wrapped(
		KC_GRV,  ___________________NUM_L1__________________,      ___________________NUM_R1__________________, KC_MINS, KC_EQL,  KC_BSLS, KC_DEL,
		KC_TAB,  ______________COLEMAK_MOD_DH_L1____________,      ______________COLEMAK_MOD_DH_R1____________, KC_LBRC, KC_RBRC, KC_BSPC,
		CTL_ESC, ______________COLEMAK_MOD_DH_L2____________,      ______________COLEMAK_MOD_DH_R2____________, KC_QUOT, KC_ENT,
		KC_LSFT, ______________COLEMAK_MOD_DH_ANSI_L3_______,      ______________COLEMAK_MOD_DH_R3____________, KC_RSFT, LOWER,
				KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, RAISE),

	// Fn1 Layer
	[L_LOWER] = LAYOUT_60_hhkb(
		KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL,
		KC_CAPS, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SCRL, KC_PAUS, KC_UP,   _______, _______,
		_______, KC_VOLD, KC_VOLU, KC_MUTE, KC_EJCT, _______, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, _______,
		_______, _______, _______, _______, _______, _______, KC_PPLS, KC_PMNS, KC_END,  KC_PGDN, KC_DOWN, _______, _______,
				_______, _______,                            _______,                            _______, _______),

	// Fn2 Layer
	[L_RAISE] = LAYOUT_60_hhkb(
		_______, DM_REC1, DM_REC2, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		CW_TOGG, DM_RSTP, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, C(KC_LEFT), C(KC_RGHT), C(KC_UP), _______, _______,
				_______, _______,                            _______,                            _______, _______),

	// Fn3 Layer
	[L_ADJUST] = LAYOUT_60_hhkb(
		QK_BOOT,    EF_DEC,  EF_INC, H1_DEC,  H1_INC,  H2_DEC,  H2_INC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, BR_DEC,  BR_INC,  XXXXXXX, XXXXXXX,
		XXXXXXX, BL_GAME, BL_CMDH, S1_DEC,  S1_INC,  S2_DEC,  S2_INC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, ES_DEC,  ES_INC,  XXXXXXX,
		CG_TOGG, BL_BASE, BL_CMDR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
				XXXXXXX, XXXXXXX,                            XXXXXXX,                            XXXXXXX, XXXXXXX),

    [L_ONESHOT] = LAYOUT_60_hhkb(
		XXXXXXX, DM_PLY1, DM_PLY2, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
				XXXXXXX, XXXXXXX,                            XXXXXXX,                            XXXXXXX, XXXXXXX),

};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, L_LOWER, L_RAISE, L_ADJUST);
}

#ifdef TAPPING_TERM_PER_KEY
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HOME_A:
        case HOME_R:
        case HOME_I:
        case HOME_O:
            return TAPPING_TERM + 50;
        case HOME_S:
        // case HOME_T:
        // case HOME_N:
        case HOME_E:
            return TAPPING_TERM + 20;
        default:
            return TAPPING_TERM;
    }
}
#endif

#ifdef PERMISSIVE_HOLD_PER_KEY
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
        case CTL_SPC:
            return true;
        default:
            return false;
    }
}
#endif

#ifdef HOLD_ON_OTHER_KEY_PRESS_PER_KEY
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
            return true;
        default:
            return false;
    }
}
#endif
