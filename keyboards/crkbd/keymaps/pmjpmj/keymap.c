#include QMK_KEYBOARD_H
#include "keymap.h"

#define LAYOUT_wrapped(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // base

  [L_BASE_COLEMAK_DH_HRM] = LAYOUT_wrapped(
     KC_GRV, ______________COLEMAK_MOD_DH_L1____________,      ______________COLEMAK_MOD_DH_R1____________, KC_BSLS,
    GUI_ESC, ______________COLEMAK_MOD_DH_HRM_L2________,      ______________COLEMAK_MOD_DH_HRM_R2________, KC_QUOT,
    KC_LSFT, ______________COLEMAK_MOD_DH_L3____________,      ______________COLEMAK_MOD_DH_R3____________, KC_ENT,
                               NUM_ESC, LOW_SPC, CTL_TAB,      MOU_ENT, RAI_BSP, FNC_DEL
  ),

  [L_BASE_COLEMAK_DH] = LAYOUT_wrapped(
     KC_GRV, ______________COLEMAK_MOD_DH_L1____________,      ______________COLEMAK_MOD_DH_R1____________, KC_BSLS,
    GUI_ESC, ______________COLEMAK_MOD_DH_L2____________,      ______________COLEMAK_MOD_DH_R2____________, KC_QUOT,
    KC_LSFT, ______________COLEMAK_MOD_DH_L3____________,      ______________COLEMAK_MOD_DH_R3____________, KC_ENT,
                                LALT_EC, LOW_SPC, CTL_TAB,     MOU_ENT, RAI_BSP, RALT_DL
  ),

  [L_BASE_QWERTY_HRM] = LAYOUT_wrapped(
     KC_GRV, _________________QWERTY_L1_________________,      _________________QWERTY_R1_________________, KC_BSLS,
    GUI_ESC, _________________QWERTY_HRM_L2_____________,      _________________QWERTY_HRM_R2_____________, KC_QUOT,
    KC_LSFT, _________________QWERTY_L3_________________,      _________________QWERTY_R3_________________, KC_ENT,
                               NUM_ESC, LOW_SPC, CTL_TAB,      MOU_ENT, RAI_BSP, FNC_DEL
  ),

  [L_BASE_QWERTY] = LAYOUT_wrapped(
     KC_GRV, _________________QWERTY_L1_________________,      _________________QWERTY_R1_________________, KC_BSLS,
    GUI_ESC, _________________QWERTY_L2_________________,      _________________QWERTY_R2_________________, KC_QUOT,
    KC_LSFT, _________________QWERTY_L3_________________,      _________________QWERTY_R3_________________, KC_ENT,
                               LALT_EC, LOW_SPC, CTL_TAB,      MOU_ENT, RAI_BSP, RALT_DL
  ),

  [L_BASE_GAME] = LAYOUT_wrapped(
     KC_TAB, _________________QWERTY_L1_________________,      _________________QWERTY_R1_________________, KC_BSLS,
    KC_LCTL, _________________QWERTY_L2_________________,      _________________QWERTY_R2_________________, KC_QUOT,
    KC_LSFT, _________________QWERTY_L3_________________,      _________________QWERTY_R3_________________, KC_RSFT,
                                LALT_EC, LOW_SPC, KC_TAB,      MOU_ENT, RAI_BSP, RALT_DL
  ),

  [L_LOWER] = LAYOUT_wrapped(
    KC_TILD, ___________________NUM_L1__________________,    ___________________NUM_R1__________________, KC_PIPE,
    _______, ___________________SYM_L1__________________,    ___________________SYM_R1__________________, KC_DQUO,
    _______, ___________________SYM_L2__________________,    ___________________SYM_R2__________________, _______,
                               _______, _______, _______,    _______, _______, _______
  ),

  [L_RAISE] = LAYOUT_split_3x6_3(
    KC_CAPS,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,     KC_PGUP, A(KC_LEFT),   KC_UP, A(KC_RGHT), KC_PGUP, _______,
    CW_TOGG, HOME_F6, HOME_F7, HOME_F8, HOME_F9,  KC_F10,     KC_PGDN,    KC_LEFT, KC_DOWN,    KC_RGHT, KC_PGDN, _______,
    _______,  KC_F11,  KC_F12, DM_REC1, DM_PLY1, DM_RSTP,     KC_LNG1,   KC_HOME, _______,     KC_END, _______, _______,
                                _______, _______, _______,    _______, _______, _______
  ),

  [L_MOUSE] = LAYOUT_split_3x6_3(
    XXXXXXX, KC_BTN4, KC_BTN1, KC_BTN3, KC_BTN2, KC_BTN5,     KC_WH_L, KC_WH_D, KC_MS_U, KC_WH_U, KC_WH_R, XXXXXXX,
    XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,     XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX,     KC_BTN4, KC_BTN1, KC_BTN3, KC_BTN2, KC_BTN5, XXXXXXX,
                               _______, _______, _______,     _______, _______, _______
  ),

  [L_NUMPAD] = LAYOUT_wrapped(
    _______, XXXXXXX, XXXXXXX, XXXXXXX,  KC_NUM, XXXXXXX,                   KC_PSLS,  KC_P7,   KC_P8,   KC_P9, KC_PPLS, XXXXXXX,
    _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                   KC_PAST,  KC_P4,   KC_P5,   KC_P6, KC_PEQL, XXXXXXX,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_PMNS,  KC_P1,   KC_P2,   KC_P3, KC_PENT, XXXXXXX,
                               _______, _______, _______,                   KC_TAB,  KC_P0, KC_PDOT
  ),

  [L_FUNCPAD] = LAYOUT_wrapped(
    _______, XXXXXXX,   KC_F7,   KC_F8,   KC_F9,  KC_F12,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    _______, XXXXXXX,   KC_F4,   KC_F5,   KC_F6,  KC_F11,                   XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX,
    _______, XXXXXXX,   KC_F1,   KC_F2,   KC_F3,  KC_F10,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               _______, _______, _______,                   _______, _______, _______
  ),

  [L_ADJUST] = LAYOUT_split_3x6_3(
    CG_TOGG, BL_CMDR, BL_CMDH, BL_QWTH, BL_QWTY, BL_GAME,    KC_SEC1, KC_SEC2, KC_SEC3, KC_SEC4, KC_SEC5, XXXXXXX,
    CM_TOGG, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX,    XXXXXXX, KC_VOLD, KC_VOLU, KC_MUTE, XXXXXXX, XXXXXXX,
    AS_TOGG, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX,    NK_TOGG, KC_MPRV, KC_MNXT, KC_MPLY, KC_MSTP, XXXXXXX,
                               XXXXXXX, _______, XXXXXXX,    XXXXXXX, _______, XXXXXXX
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

#ifdef QUICK_TAP_TERM_PER_KEY
uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LOW_SPC:
        case CTL_TAB:
        case MOU_ENT:
        case RAI_BSP:
            return QUICK_TAP_TERM - 40;
        default:
            return QUICK_TAP_TERM;
    }
}
#endif


#ifdef COMBO_ENABLE

enum combo_events {
    EQ_OR_LESS,
    EQ_OR_GREATER,
    LEFT_ARROW,
    RIGHT_ARROW,
    WORD_LEFT,
    WORD_RIGHT,
    LPRN,
    LCBR,
    LABK,
    LBRC,
    RPRN,
    RCBR,
    RABK,
    RBRC,
    UNDO,
    CUT,
    COPY,
    PASTE,

    COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM eq_lt_combo[] = {KC_H, KC_COMMA, COMBO_END};
const uint16_t PROGMEM eq_gt_combo[] = {KC_H, KC_DOT, COMBO_END};
const uint16_t PROGMEM left_arrow_combo[] = {KC_SLSH, KC_COMMA, COMBO_END};
const uint16_t PROGMEM right_arrow_combo[] = {KC_SLSH, KC_DOT, COMBO_END};
const uint16_t PROGMEM word_left_combo[] = {KC_LEFT, KC_DOWN, COMBO_END};
const uint16_t PROGMEM word_right_combo[] = {KC_RIGHT, KC_DOWN, COMBO_END};
const uint16_t PROGMEM lprn_combo[] = {KC_F, KC_L, COMBO_END};
const uint16_t PROGMEM lcbr_combo[] = {KC_F, KC_U, COMBO_END};
const uint16_t PROGMEM labk_combo[] = {KC_F, KC_Y, COMBO_END};
const uint16_t PROGMEM lbrc_combo[] = {KC_F, KC_SCLN, COMBO_END};
const uint16_t PROGMEM rprn_combo[] = {KC_P, KC_L, COMBO_END};
const uint16_t PROGMEM rcbr_combo[] = {KC_P, KC_U, COMBO_END};
const uint16_t PROGMEM rabk_combo[] = {KC_P, KC_Y, COMBO_END};
const uint16_t PROGMEM rbrc_combo[] = {KC_P, KC_SCLN, COMBO_END};
const uint16_t PROGMEM undo_combo[] = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM cut_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM copy_combo[] = {KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM paste_combo[] = {KC_D, KC_V, COMBO_END};

combo_t key_combos[] = {
  [EQ_OR_LESS] = COMBO_ACTION(eq_lt_combo),
  [EQ_OR_GREATER] = COMBO_ACTION(eq_gt_combo),
  [LEFT_ARROW] = COMBO_ACTION(left_arrow_combo),
  [RIGHT_ARROW] = COMBO_ACTION(right_arrow_combo),
  [WORD_LEFT] = COMBO(word_left_combo, A(KC_LEFT)),
  [WORD_RIGHT] = COMBO(word_right_combo, A(KC_RIGHT)),
  [LPRN] = COMBO(lprn_combo, KC_LPRN),
  [LCBR] = COMBO(lcbr_combo, KC_LCBR),
  [LABK] = COMBO(labk_combo, KC_LABK),
  [LBRC] = COMBO(lbrc_combo, KC_LBRC),
  [RPRN] = COMBO(rprn_combo, KC_RPRN),
  [RCBR] = COMBO(rcbr_combo, KC_RCBR),
  [RABK] = COMBO(rabk_combo, KC_RABK),
  [RBRC] = COMBO(rbrc_combo, KC_RBRC),
  [UNDO] = COMBO(undo_combo, C(KC_Z)),
  [CUT] = COMBO(cut_combo, C(KC_X)),
  [COPY] = COMBO(copy_combo, C(KC_C)),
  [PASTE] = COMBO(paste_combo, C(KC_V)),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case EQ_OR_LESS:
      if (pressed) {
        SEND_STRING("<=");
      }
      break;
    case EQ_OR_GREATER:
      if (pressed) {
        SEND_STRING(">=");
      }
      break;
    case LEFT_ARROW:
      if (pressed) {
        SEND_STRING("<-");
      }
      break;
    case RIGHT_ARROW:
      if (pressed) {
        SEND_STRING("->");
      }
      break;
  }
}

#endif
