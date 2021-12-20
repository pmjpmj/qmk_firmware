#pragma once

#define MASTER_LEFT

// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

//#define PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4

#ifdef AUTO_SHIFT_ENABLE
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP
#endif

#ifdef RGB_MATRIX_ENABLE
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#endif
