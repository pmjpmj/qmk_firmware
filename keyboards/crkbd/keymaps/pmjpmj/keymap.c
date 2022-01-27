#include QMK_KEYBOARD_H
#include "keymap.h"

#define LAYOUT_wrapped(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // base

  [L_BASE_COLEMAK_DH_HRM] = LAYOUT_wrapped(
     KC_TAB, ______________COLEMAK_MOD_DH_L1____________,      ______________COLEMAK_MOD_DH_R1____________, KC_BSPC,
    GUI_ESC, ______________COLEMAK_MOD_DH_HRM_L2________,      ______________COLEMAK_MOD_DH_HRM_R2________, KC_QUOT,
    KC_LSFT, ______________COLEMAK_MOD_DH_L3____________,      ______________COLEMAK_MOD_DH_R3____________, SFT_ENT,
                               LALT_EC, LOW_SPC, CTL_TAB,      SFT_ENT, RAI_BSP, RALT_DL
  ),

  [L_BASE_COLEMAK_DH] = LAYOUT_wrapped(
     KC_TAB, ______________COLEMAK_MOD_DH_L1____________,      ______________COLEMAK_MOD_DH_R1____________, KC_BSPC,
    GUI_ESC, ______________COLEMAK_MOD_DH_L2____________,      ______________COLEMAK_MOD_DH_R2____________, KC_QUOT,
    KC_LSFT, ______________COLEMAK_MOD_DH_L3____________,      ______________COLEMAK_MOD_DH_R3____________, SFT_ENT,
                                LALT_EC, LOW_SPC, CTL_TAB,      SFT_ENT, RAI_BSP, RALT_DL
  ),

  [L_BASE_QWERTY] = LAYOUT_wrapped(
     KC_TAB, _________________QWERTY_L1_________________,      _________________QWERTY_R1_________________, KC_BSPC,
    GUI_ESC, _________________QWERTY_L2_________________,      _________________QWERTY_R2_________________, KC_QUOT,
    KC_LSFT, _________________QWERTY_L3_________________,      _________________QWERTY_R3_________________, SFT_ENT,
                               LALT_EC, LOW_SPC, CTL_TAB,      SFT_ENT, RAI_BSP, RALT_DL
  ),

  [L_BASE_GAME] = LAYOUT_wrapped(
     KC_TAB, _________________QWERTY_L1_________________,      _________________QWERTY_R1_________________, KC_BSPC,
    KC_LCTL, _________________QWERTY_L2_________________,      _________________QWERTY_R2_________________, KC_QUOT,
    KC_LSFT, _________________QWERTY_L3_________________,      _________________QWERTY_R3_________________, SFT_ENT,
                                LALT_EC, LOW_SPC, KC_TAB,      SFT_ENT, RAI_BSP, RALT_DL
  ),

  [L_LOWER] = LAYOUT_wrapped(
     KC_GRV, ___________________NUM_L1__________________,    ___________________NUM_R1__________________, KC_TILD,
    _______, ___________________SYM_L1__________________,    ___________________SYM_R1__________________, KC_PIPE,
    _______, ___________________SYM_L2__________________,    ___________________SYM_R2__________________, _______,
                               _______, _______, _______,    _______, _______, _______
  ),

  [L_RAISE] = LAYOUT_split_3x6_3(
    KC_CAPS,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,          KC_EQL, KC_LPRN,  KC_LCBR, KC_RCBR, KC_RPRN, OSL(L_ONESHOT),
    KC_CAPW, HOME_F6, HOME_F7, HOME_F8, HOME_F9,  KC_F10,      A(KC_LEFT), KC_LEFT,  KC_DOWN,   KC_UP, KC_RGHT, A(KC_RGHT),
    _______,  KC_F11,  KC_F12, DM_REC1, DM_PLY1, DM_RSTP,         _______, KC_HOME,  KC_PGDN, KC_PGUP,  KC_END, _______,
                                _______, _______, _______,    _______, _______, _______
  ),

  [L_ADJUST] = LAYOUT_split_3x6_3(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_INS,  KC_DEL,
    RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, CMB_TOG,    XXXXXXX, KC_VOLD, KC_VOLU, KC_MUTE, XXXXXXX, XXXXXXX,
    RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_ASTG,    XXXXXXX, KC_MPRV, KC_MNXT, KC_MPLY, KC_MSTP, XXXXXXX,
                               XXXXXXX, _______, XXXXXXX,    XXXXXXX, _______, XXXXXXX
  ),

  [L_ONESHOT] = LAYOUT_split_3x6_3(
    CG_TOGG, BL_CMDR, BL_CMDH, BL_QWTY, BL_GAME, XXXXXXX,    KC_SEC1, KC_SEC2, KC_SEC3, KC_SEC4, KC_SEC5, XXXXXXX,
    CMB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_MAC1, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_ASTG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX
  ),

// XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//                            XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX
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

bool get_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
            return true;
        default:
            return false;
    }
}

#ifdef PERMISSIVE_HOLD_PER_KEY
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    return get_hold(keycode, record);
}
#endif

#ifdef HOLD_ON_OTHER_KEY_PRESS_PER_KEY
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    return get_hold(keycode, record);
}
#endif

// #ifdef TAPPING_FORCE_HOLD_PER_KEY
bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CTL_SPC:
        case RAI_BSP:
        case LALT_TB:
        case RALT_DL:
            return false;
        default:
            return true;
    }
}
// #endif


