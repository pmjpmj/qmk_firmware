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

#define LOWER MO(L_LOWER)
#define RAISE MO(L_RAISE)

// mod taps
#define GUI_ESC MT(MOD_LGUI, KC_ESC)

#define CTL_SPC MT(MOD_LCTL, KC_SPC)
#define CTL_TAB MT(MOD_LCTL, KC_TAB)
#define CTL_ENT MT(MOD_LCTL, KC_ENT)
#define CTL_ESC MT(MOD_LCTL, KC_ESC)

#define SFT_ENT MT(MOD_RSFT, KC_ENT)

#define LOW_SPC LT(L_LOWER, KC_SPC)
#define RAI_BSP LT(L_RAISE, KC_BSPC)
#define MO_ADJT MO(L_ADJUST)

#define LALT_TB MT(MOD_LALT, KC_TAB)
#define RALT_DL MT(MOD_RALT, KC_DEL)

// layer codes
#define BL_CMDH DF(L_BASE_COLEMAK_DH)
#define BL_CMDA DF(L_BASE_COLEMAK_DH_ANSI)
#define BL_CMDR DF(L_BASE_COLEMAK_DH_HRM)
#define BL_CDAH DF(L_BASE_COLEMAK_DH_ANSI_HRM)
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


// clang-format off
#define _________________QWERTY_L1_________________       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________       KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _________________QWERTY_L3_________________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define _________________QWERTY_R3_________________       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH

#define ______________COLEMAK_MOD_DH_L1____________       KC_Q,    KC_W,    KC_F,    KC_P,    KC_B
#define ______________COLEMAK_MOD_DH_L2____________       KC_A,    KC_R,    KC_S,    KC_T,    KC_G
#define ______________COLEMAK_MOD_DH_L3____________       KC_Z,    KC_X,    KC_C,    KC_D,    KC_V
#define ______________COLEMAK_MOD_DH_ANSI_L3_______       KC_X,    KC_C,    KC_D,    KC_V,    KC_Z

#define ______________COLEMAK_MOD_DH_R1____________       KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN
#define ______________COLEMAK_MOD_DH_R2____________       KC_M,    KC_N,    KC_E,    KC_I,    KC_O
#define ______________COLEMAK_MOD_DH_R3____________       KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLASH

#define ______________COLEMAK_MOD_DH_HRM_L2________       HOME_A,  HOME_R,  HOME_S,   HOME_T,  KC_G
#define ______________COLEMAK_MOD_DH_HRM_R2________         KC_M,  HOME_N,  HOME_E,   HOME_I,  HOME_O


#define ___________________NUM_L1__________________       KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ___________________NUM_R1__________________       KC_6,    KC_7,    KC_8,    KC_9,    KC_0

#define ___________________SYM_L1__________________       KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC
#define ___________________SYM_L2__________________       KC_LBRC, KC_RBRC, KC_MINS,  KC_EQL, KC_BSLS

#define ___________________SYM_R1__________________       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN
#define ___________________SYM_R2__________________       KC_PIPE, KC_PLUS, KC_UNDS, KC_LCBR, KC_RCBR
// clang-format on
