#include "pmjpmj.h"
#include "quantum.h"

#ifdef TAP_DANCE_ENABLE
#include "tap_dance.h"
#endif

__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}

__attribute__ ((weak))
bool process_record_secrets(uint16_t keycode, keyrecord_t *record) {
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
#ifdef MACROS_ENABLED
        case KC_MACRO_1:
            if (!record->event.pressed) {
                clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
                SEND_STRING("SPRING_PROFILES_ACTIVE=");
            }
            return false;
        break;
#endif
    }

    if (!(
#ifdef SECRETS_ENABLED
        process_record_secrets(keycode, record) &&
#endif
        process_record_keymap(keycode, record))) {
        return false;
    }

    return true;
}


