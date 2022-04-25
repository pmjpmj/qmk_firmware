#include QMK_KEYBOARD_H
#include "keymap.h"

#define LAYOUT_wrapped(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // base

  [L_BASE_COLEMAK_DH_HRM] = LAYOUT_wrapped(
     KC_GRV, ___________________NUM_L1__________________,                   ___________________NUM_R1__________________, KC_BSLS,
     KC_TAB, ______________COLEMAK_MOD_DH_L1____________,                   ______________COLEMAK_MOD_DH_R1____________, KC_BSPC,
    GUI_ESC, ______________COLEMAK_MOD_DH_HRM_L2________,                   ______________COLEMAK_MOD_DH_HRM_R2________, KC_QUOT,
    KC_LSFT, ______________COLEMAK_MOD_DH_L3____________, KC_MUTE, KC_MPLY, ______________COLEMAK_MOD_DH_R3____________, KC_RSFT,
             KC_LGUI, KC_LALT, KC_LCTL, LOW_SPC, CTL_TAB,                   SFT_ENT, RAI_BSP, RCTL_DL, KC_RALT, KC_RGUI
  ),

  [L_BASE_COLEMAK_DH] = LAYOUT_wrapped(
     KC_GRV, ___________________NUM_L1__________________,                   ___________________NUM_R1__________________, KC_BSLS,
     KC_TAB, ______________COLEMAK_MOD_DH_L1____________,                   ______________COLEMAK_MOD_DH_R1____________, KC_BSPC,
    GUI_ESC, ______________COLEMAK_MOD_DH_L2____________,                   ______________COLEMAK_MOD_DH_R2____________, KC_QUOT,
    KC_LSFT, ______________COLEMAK_MOD_DH_L3____________, KC_MUTE, KC_MPLY, ______________COLEMAK_MOD_DH_R3____________, KC_RSFT,
             KC_LGUI, KC_LALT, KC_LCTL, LOW_SPC, CTL_TAB,                   SFT_ENT, RAI_BSP, RCTL_DL, KC_RALT, KC_RGUI
  ),

  [L_BASE_QWERTY_HRM] = LAYOUT_wrapped(
     KC_GRV, ___________________NUM_L1__________________,                   ___________________NUM_R1__________________, KC_BSLS,
     KC_TAB, _________________QWERTY_L1_________________,                   _________________QWERTY_R1_________________, KC_BSPC,
    GUI_ESC, _________________QWERTY_HRM_L2_____________,                   _________________QWERTY_HRM_R2_____________, KC_QUOT,
    KC_LSFT, _________________QWERTY_L3_________________, KC_MUTE, KC_MPLY, _________________QWERTY_R3_________________, KC_RSFT,
             KC_LGUI, KC_LALT, KC_LCTL, LOW_SPC, CTL_TAB,                   SFT_ENT, RAI_BSP, RCTL_DL, KC_RALT, KC_RGUI
  ),

  [L_BASE_QWERTY] = LAYOUT_wrapped(
     KC_GRV, ___________________NUM_L1__________________,                   ___________________NUM_R1__________________, KC_BSLS,
     KC_TAB, _________________QWERTY_L1_________________,                   _________________QWERTY_R1_________________, KC_BSPC,
    GUI_ESC, _________________QWERTY_L2_________________,                   _________________QWERTY_R2_________________, KC_QUOT,
    KC_LSFT, _________________QWERTY_L3_________________, KC_MUTE, KC_MPLY, _________________QWERTY_R3_________________, KC_RSFT,
             KC_LGUI, KC_LALT, KC_LCTL, LOW_SPC, CTL_TAB,                   SFT_ENT, RAI_BSP, RCTL_DL, KC_RALT, KC_RGUI
  ),

  [L_BASE_GAME] = LAYOUT_wrapped(
     KC_ESC, ___________________NUM_L1__________________,                   ___________________NUM_R1__________________, KC_BSLS,
     KC_TAB, _________________QWERTY_L1_________________,                   _________________QWERTY_R1_________________, KC_BSPC,
    KC_LCTL, _________________QWERTY_L2_________________,                   _________________QWERTY_R2_________________, KC_QUOT,
    KC_LSFT, _________________QWERTY_L3_________________, KC_MUTE, KC_MPLY, _________________QWERTY_R3_________________, KC_RSFT,
             KC_LGUI, KC_LALT, KC_LCTL, LOW_SPC, CTL_TAB,                   SFT_ENT, RAI_BSP, RCTL_DL, KC_RALT, KC_RGUI
  ),

  [L_LOWER] = LAYOUT_wrapped(
     KC_GRV, ___________________NUM_L1__________________,                   ___________________NUM_R1__________________, _______,
    _______, ___________________SYM_L1__________________,                   ___________________SYM_R1__________________, _______,
    _______, ___________________ASM_L2__________________,                   ___________________ASM_R2__________________, _______,
    _______, ___________________ASM_L3__________________, XXXXXXX, XXXXXXX, ___________________ASM_R3__________________, _______,
             _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______
  ),

  [L_RAISE] = LAYOUT_wrapped(
     KC_GRV, ___________________FNC_L1__________________,                   ___________________FNC_R1__________________, KC_DEL,
    KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_PGUP, A(KC_LEFT),   KC_UP, A(KC_RGHT), KC_PGUP, _______,
    KC_CAPW, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                   KC_PGDN,    KC_LEFT, KC_DOWN,    KC_RGHT, KC_PGDN, XXXXXXX,
    _______, XXXXXXX, XXXXXXX, DM_REC1, DM_PLY1, DM_RSTP, XXXXXXX, XXXXXXX, KC_LANG1,   KC_HOME, XXXXXXX,     KC_END, XXXXXXX, _______,
             _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______
  ),

  [L_ADJUST] = LAYOUT_wrapped(
    CG_TOGG, BL_CMDR, BL_CMDH, BL_QWTH, BL_QWTY, BL_GAME,                   KC_SEC1, KC_SEC2, KC_SEC3, KC_SEC4, KC_SEC5, XXXXXXX,
    CMB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_ASTG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, KC_VOLD, KC_VOLU, KC_MUTE, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_MNXT, KC_MPLY, KC_MSTP, XXXXXXX,
             _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______
  ),

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
        // case HOMQ_A:
        case HOMQ_S:
        case HOMQ_L:
        case HOMQ_SCLN:
            return TAPPING_TERM + 50;
        case HOME_S:
        case HOME_E:
        case HOMQ_D:
        case HOMQ_K:
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

#ifdef TAPPING_FORCE_HOLD_PER_KEY
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
#endif

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        // left
        switch(biton32(layer_state)) {
            case L_RAISE:
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
                break;
            default:
                if (clockwise) {
                    tap_code(KC_RGHT);
                } else {
                    tap_code(KC_LEFT);
                }
                break;
        }
    } else if (index == 1) {
        // right
        switch(biton32(layer_state)) {
            case L_LOWER:
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
                break;
            default:
                if (clockwise) {
                    tap_code(KC_DOWN);
                } else {
                    tap_code(KC_UP);
                }
                break;
        }
    }
    return true;
}

#endif
