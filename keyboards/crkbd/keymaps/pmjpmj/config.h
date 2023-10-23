#pragma once

#define MASTER_LEFT

// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 175
#define TAPPING_TERM_PER_KEY

#undef PERMISSIVE_HOLD
// #define PERMISSIVE_HOLD_PER_KEY
// #define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

#define QUICK_TAP_TERM_PER_KEY

// #define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

#define COMBO_TERM 40

#undef ONESHOT_TIMEOUT
#define ONESHOT_TIMEOUT 500

#undef LEADER_TIMEOUT
#define LEADER_TIMEOUT 1000

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 10
#define USB_POLLING_INTERVAL_MS 1

#undef DEBOUNCE
#define DEBOUNCE 6

#ifdef AUTO_SHIFT_ENABLE
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP
#define NO_AUTO_SHIFT_ALPHA
#endif

// #ifdef RGB_MATRIX_ENABLE
// #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #endif
#ifdef RGB_MATRIX_ENABLE
#   undef ENABLE_RGB_MATRIX_ALPHAS_MODS
#   undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#   define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#   undef ENABLE_RGB_MATRIX_BREATHING
#   undef ENABLE_RGB_MATRIX_BAND_SAT
#   undef ENABLE_RGB_MATRIX_BAND_VAL
#   undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#   undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#   undef ENABLE_RGB_MATRIX_CYCLE_ALL
#   define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#   undef ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#   undef ENABLE_RGB_MATRIX_RAINDROPS
#   undef ENABLE_RGB_MATRIX_HUE_BREATHING
#   undef ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#   undef ENABLE_RGB_MATRIX_TYPING_HEATMAP
#   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE
#   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#   undef ENABLE_RGB_MATRIX_SPLASH
#   undef ENABLE_RGB_MATRIX_SOLID_SPLASH
#endif

#ifdef RGBLIGHT_ENABLE

#   define RGBLIGHT_EFFECT_BREATHING
#   define RGBLIGHT_EFFECT_RAINBOW_MOOD
#   define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#   undef RGBLIGHT_EFFECT_SNAKE
#   undef RGBLIGHT_EFFECT_KNIGHT
#   undef RGBLIGHT_EFFECT_CHRISTMAS
#   define RGBLIGHT_EFFECT_STATIC_GRADIENT
#   undef RGBLIGHT_EFFECT_RGB_TEST
#   define RGBLIGHT_EFFECT_ALTERNATING
#   define RGBLIGHT_EFFECT_TWINKLE

#   define RGBLED_NUM 54
#   define RGBLED_SPLIT \
        { 27, 27 }
#endif
