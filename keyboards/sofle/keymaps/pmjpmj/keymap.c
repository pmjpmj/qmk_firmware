#include QMK_KEYBOARD_H
#include "keymap.h"

#define LAYOUT_wrapped(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // base

  [L_BASE_COLEMAK_DH_HRM] = LAYOUT_wrapped(
     KC_GRV, ___________________NUM_L1__________________,                   ___________________NUM_R1__________________, KC_BSPC,
     KC_TAB, ______________COLEMAK_MOD_DH_L1____________,                   ______________COLEMAK_MOD_DH_R1____________, KC_BSLS,
    GUI_ESC, ______________COLEMAK_MOD_DH_HRM_L2________,                   ______________COLEMAK_MOD_DH_HRM_R2________, KC_QUOT,
    KC_LSFT, ______________COLEMAK_MOD_DH_HRM_L3________, KC_MUTE, KC_MPLY, ______________COLEMAK_MOD_DH_HRM_R3________, SFT_ENT,
             KC_LGUI, KC_LALT, CTL_ESC, LOW_SPC, NUM_TAB,                   FNC_ENT, RAI_BSP, MOU_DEL, KC_RALT, KC_RGUI
  ),

  [L_BASE_QWERTY_HRM] = LAYOUT_wrapped(
     KC_GRV, ___________________NUM_L1__________________,                   ___________________NUM_R1__________________, KC_BSPC,
     KC_TAB, _________________QWERTY_L1_________________,                   _________________QWERTY_R1_________________, KC_BSLS,
    GUI_ESC, _________________QWERTY_HRM_L2_____________,                   _________________QWERTY_HRM_R2_____________, KC_QUOT,
    KC_LSFT, _________________QWERTY_HRM_L3_____________, KC_MUTE, KC_MPLY, _________________QWERTY_HRM_R3_____________, SFT_ENT,
             KC_LGUI, KC_LALT, CTL_ESC, LOW_SPC, NUM_TAB,                   FNC_ENT, RAI_BSP, MOU_DEL, KC_RALT, KC_RGUI
  ),

  [L_BASE_GAME] = LAYOUT_wrapped(
     KC_ESC, ___________________NUM_L1__________________,                   ___________________NUM_R1__________________, KC_BSPC,
     KC_TAB, _________________QWERTY_L1_________________,                   _________________QWERTY_R1_________________, KC_BSLS,
    KC_LCTL, _________________QWERTY_L2_________________,                   _________________QWERTY_R2_________________, KC_QUOT,
    KC_LSFT, _________________QWERTY_L3_________________, KC_MUTE, KC_MPLY, _________________QWERTY_R3_________________, KC_RSFT,
              KC_LGUI, KC_LALT, KC_LCTL, LOW_SPC, KC_SPC,                   KC_ENT, RAI_BSP, KC_RCTL, KC_RALT, KC_RGUI
  ),

  [L_LOWER] = LAYOUT_wrapped(
    KC_TILD, ___________________NUM_L1__________________,                   ___________________NUM_R1__________________,  KC_DEL,
    _______, ___________________SYM_L1__________________,                   ___________________SYM_R1__________________, KC_PIPE,
    _______, KC_GRV, KC_ASTR, KC_PLUS, KC_EQL, KC_BSLS,                     KC_PIPE, KC_LPRN, KC_LCBR, KC_LBRC, KC_DQUO, KC_DQUO,
    _______, KC_TILD, KC_SLSH, KC_MINS, KC_UNDS, KC_EXLM, _______, _______, KC_AMPR, KC_RPRN, KC_RCBR, KC_RBRC, KC_QUOT, _______,
             _______, _______, _______, _______, _______,                   TD_KC_LABK, _______, TD_KC_RABK, _______, _______
  ),

  [L_RAISE] = LAYOUT_wrapped(
    _______, ___________________FNC_L1__________________,                         ___________________FNC_R1__________________, _______,
    KC_CAPS, KC_ESC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_PGUP, A(KC_LEFT),   KC_UP, A(KC_RGHT), KC_PGUP,  KC_DEL,
    CW_TOGG, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                   KC_PGDN,    KC_LEFT, KC_DOWN,    KC_RGHT, KC_PGDN, XXXXXXX,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, KC_LNG1,    KC_HOME, XXXXXXX,     KC_END, XXXXXXX, _______,
             _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______
  ),

  [L_MOUSE] = LAYOUT_wrapped(
    XXXXXXX, KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_BTN4, KC_BTN1, KC_BTN3, KC_BTN2, KC_BTN5,                   KC_WH_L, KC_WH_D, KC_MS_U, KC_WH_U, KC_WH_R, XXXXXXX,
    XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                   XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_BTN4, KC_BTN1, KC_BTN3, KC_BTN2, KC_BTN5, _______, _______, KC_BTN4, KC_BTN1, KC_BTN3, KC_BTN2, KC_BTN5, XXXXXXX,
             _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______
  ),

  [L_NUMPAD] = LAYOUT_wrapped(
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_SLSH,  KC_7,   KC_8,   KC_9, KC_PLUS, _______,
    _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                   KC_ASTR,  KC_4,   KC_5,   KC_6, KC_EQL, _______,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, KC_MINS,  KC_1,   KC_2,   KC_3, KC_ENT, _______,
             _______, _______, _______, _______, _______,                    KC_0,  KC_DOT, KC_BSPC, _______, _______
  ),

  [L_FUNCPAD] = LAYOUT_wrapped(
    _______, XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
    _______, KC_F12,   KC_F7,   KC_F8,   KC_F9, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
    _______, KC_F11,   KC_F4,   KC_F5,   KC_F6, XXXXXXX,                   XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______,
    _______, KC_F10,   KC_F1,   KC_F2,   KC_F3, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
             _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______
  ),

  [L_ADJUST] = LAYOUT_wrapped(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, CG_TOGG, BL_CMDR, BL_QWTH, BL_GAME, XXXXXXX,                   XXXXXXX, KC_VOLD, KC_VOLU, KC_MUTE, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, KC_MPRV, KC_MNXT, KC_MPLY, KC_MSTP, XXXXXXX,
    XXXXXXX, CW_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, NK_TOGG, CM_TOGG, AS_TOGG, GU_TOGG, XXXXXXX, XXXXXXX,
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
        case HOME_O:
        case HOMQ_SCLN:
            return TAPPING_TERM + 50;
        case HOME_R:
        case HOME_I:
        case HOMQ_S:
        case HOMQ_L:
            return TAPPING_TERM + 25;
        default:
            return TAPPING_TERM;
    }
}
#endif

#ifdef PERMISSIVE_HOLD_PER_KEY
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
                case HOME_A:
                case HOME_R:
                case HOME_S:
                case HOME_T:
                case HOME_N:
                case HOME_E:
                case HOME_I:
                case HOME_O:
                    return true;
                default:
                    return false;
            }
}
#endif

#ifdef HOLD_ON_OTHER_KEY_PRESS_PER_KEY
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
            case CTL_ESC:
            case LOW_SPC:
            case NUM_TAB:
            case FNC_ENT:
            case RAI_BSP:
            case MOU_DEL:
                return true;
            default:
                return false;
        }
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

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        // left
        if(IS_LAYER_ON(L_RAISE)) {
            if (clockwise) {
                tap_code(KC_MNXT);
            } else {
                tap_code(KC_MPRV);
            }
        } else {
            if (clockwise) {
                tap_code(KC_VOLU);
            } else {
                tap_code(KC_VOLD);
            }
        }
    } else if (index == 1) {
        // right
        if(IS_LAYER_ON(L_LOWER)) {
            if (clockwise) {
                tap_code(KC_RGHT);
            } else {
                tap_code(KC_LEFT);
            }
        } else {
            if (clockwise) {
                tap_code(KC_DOWN);
            } else {
                tap_code(KC_UP);
            }
        }
    }
    return false;
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

#ifdef TAP_DANCE_ENABLE
tap_dance_action_t tap_dance_actions[] = {
    [TD_LCBR] = ACTION_TAP_DANCE_FN(lcbr_dance),
    [TD_RCBR] = ACTION_TAP_DANCE_FN(rcbr_dance),
    [TD_LPRN] = ACTION_TAP_DANCE_FN(lprn_dance),
    [TD_RPRN] = ACTION_TAP_DANCE_FN(rprn_dance),
    [TD_LABK] = ACTION_TAP_DANCE_FN(labk_dance),
    [TD_RABK] = ACTION_TAP_DANCE_FN(rabk_dance),
};
#endif
