#include "pmjpmj.h"

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
    return process_record_keymap(keycode, record) && process_record_secrets(keycode, record);
}
