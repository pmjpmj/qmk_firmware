#pragma once
#include QMK_KEYBOARD_H

#ifdef SECRETS_ENABLED
#include "features/secrets.h"
#endif

#ifdef CAPSWORD_ENABLED
#include "features/caps_word.h"
#endif

#if defined(KEYBOARD_handwired_tractyl_manuform)
#    define PLACEHOLDER_SAFE_RANGE KEYMAP_SAFE_RANGE
#else
#    define PLACEHOLDER_SAFE_RANGE SAFE_RANGE
#endif

enum userspace_custom_keycodes {
    VRSN = PLACEHOLDER_SAFE_RANGE,            // Prints QMK Firmware and board info
    KC_SECRET_1,                              // test1
    KC_SECRET_2,                              // test2
    KC_SECRET_3,                              // test3
    KC_SECRET_4,                              // test4
    KC_SECRET_5,                              // test5
    KC_MACRO_1,
    KC_CAPSWORD,
    NEW_SAFE_RANGE                            // use "NEWPLACEHOLDER for keymap specific codes
};

#define KC_SEC1   KC_SECRET_1
#define KC_SEC2   KC_SECRET_2
#define KC_SEC3   KC_SECRET_3
#define KC_SEC4   KC_SECRET_4
#define KC_SEC5   KC_SECRET_5
#define KC_MAC1   KC_MACRO_1
#define KC_CAPW   KC_CAPSWORD

// mod taps
#define GUI_ESC MT(MOD_LGUI, KC_ESC)

#define CTL_SPC MT(MOD_LCTL, KC_SPC)
#define CTL_TAB MT(MOD_LCTL, KC_TAB)
#define CTL_ENT MT(MOD_LCTL, KC_ENT)

#define SFT_ENT MT(MOD_RSFT, KC_ENT)

#define LOW_SPC LT(L_LOWER, KC_SPC)
#define RAI_BSP LT(L_RAISE, KC_BSPC)
#define MO_ADJT MO(L_ADJUST)

#define LALT_TB MT(MOD_LALT, KC_TAB)
#define RALT_DL MT(MOD_RALT, KC_DEL)

// layer codes
#define BL_CMDH DF(L_BASE_COLEMAK_DH)
#define BL_CMDR DF(L_BASE_COLEMAK_DH_HRM)
#define BL_QWTY DF(L_BASE_QWERTY)
#define BL_GAME DF(L_BASE_GAME)

// colemak dh home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_R LALT_T(KC_R)
#define HOME_S LCTL_T(KC_S)
#define HOME_T LSFT_T(KC_T)
#define HOME_N RSFT_T(KC_N)
#define HOME_E RCTL_T(KC_E)
#define HOME_I LALT_T(KC_I)
#define HOME_O RGUI_T(KC_O)

