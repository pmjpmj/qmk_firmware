#pragma once

// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 180

#define PERMISSIVE_HOLD

#undef ONESHOT_TIMEOUT
#define ONESHOT_TIMEOUT 500

#undef LEADER_TIMEOUT
#define LEADER_TIMEOUT 1000

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 10
#define USB_POLLING_INTERVAL_MS 1

#undef DEBOUNCE
#define DEBOUNCE 30

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
