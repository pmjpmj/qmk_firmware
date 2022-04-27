#include QMK_KEYBOARD_H
#include "keymap.h"

enum combo_events {
    EQ_OR_LESS,
    EQ_OR_GREATER,
    LEFT_ARROW,
    RIGHT_ARROW,
    WORD_LEFT,
    WORD_RIGHT,
    // UNDO,
    // CUT,
    // COPY,
    // PASTE,

    COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM eq_lt_combo[] = {KC_H, KC_COMMA, COMBO_END};
const uint16_t PROGMEM eq_gt_combo[] = {KC_H, KC_DOT, COMBO_END};
const uint16_t PROGMEM left_arrow_combo[] = {KC_SLSH, KC_COMMA, COMBO_END};
const uint16_t PROGMEM right_arrow_combo[] = {KC_SLSH, KC_DOT, COMBO_END};
// const uint16_t PROGMEM word_left_combo[] = {KC_LEFT, KC_DOWN, COMBO_END};
// const uint16_t PROGMEM word_right_combo[] = {KC_RIGHT, KC_UP, COMBO_END};
// const uint16_t PROGMEM undo_combo[] = {KC_Z, KC_X, COMBO_END};
// const uint16_t PROGMEM cut_combo[] = {KC_X, KC_C, COMBO_END};
// const uint16_t PROGMEM copy_combo[] = {KC_C, KC_D, COMBO_END};
// const uint16_t PROGMEM paste_combo[] = {KC_D, KC_V, COMBO_END};

combo_t key_combos[] = {
  [EQ_OR_LESS] = COMBO_ACTION(eq_lt_combo),
  [EQ_OR_GREATER] = COMBO_ACTION(eq_gt_combo),
  [LEFT_ARROW] = COMBO_ACTION(left_arrow_combo),
  [RIGHT_ARROW] = COMBO_ACTION(right_arrow_combo),
//   [WORD_LEFT] = COMBO_ACTION(word_left_combo),
//   [WORD_RIGHT] = COMBO_ACTION(word_right_combo),
  // [UNDO] = COMBO_ACTION(undo_combo),
  // [CUT] = COMBO_ACTION(cut_combo),
  // [COPY] = COMBO_ACTION(copy_combo),
  // [PASTE] = COMBO_ACTION(paste_combo),
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
    // case WORD_LEFT:
    //   if (pressed) {
    //     register_mods(MOD_MASK_CTRL);
    //     tap_code16(KC_LEFT);
    //     unregister_mods(MOD_MASK_CTRL);
    //   }
    //   break;
    // case WORD_RIGHT:
    //   if (pressed) {
    //     register_mods(MOD_MASK_CTRL);
    //     tap_code16(KC_RIGHT);
    //     unregister_mods(MOD_MASK_CTRL);
    //   }
    //   break;
    // case UNDO:
    //   if (pressed) {
    //     if (!keymap_config.swap_lctl_lgui) {
    //       tap_code16(C(KC_Z));
    //     } else {
    //       tap_code16(G(KC_Z));
    //     }
    //   }
    //   break;
    // case CUT:
    //   if (pressed) {
    //     if (!keymap_config.swap_lctl_lgui) {
    //       tap_code16(C(KC_X));
    //     } else {
    //       tap_code16(G(KC_X));
    //     }
    //   }
    //   break;
    // case COPY:
    //   if (pressed) {
    //     if (!keymap_config.swap_lctl_lgui) {
    //       tap_code16(C(KC_C));
    //     } else {
    //       tap_code16(G(KC_C));
    //     }
    //   }
    //   break;
    // case PASTE:
    //   if (pressed) {
    //     if (!keymap_config.swap_lctl_lgui) {
    //       tap_code16(C(KC_V));
    //     } else {
    //       tap_code16(G(KC_V));
    //     }
    //   }
    //   break;
  }
}
