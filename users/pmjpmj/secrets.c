#include "pmjpmj.h"
#include "secrets.h"

#if (__has_include("secrets_defs.h") && !defined(NO_SECRETS))
#include "secrets_defs.h"
#else
static const char * const secret[] = {
  "test1",
  "test2"
};
#endif

#ifndef MACRO_TIMER
#   define MACRO_TIMER 5
#endif

bool process_record_secrets(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_SECRET_1 ... KC_SECRET_5: // Secrets!  Externally defined strings, not stored in repo
      if (!record->event.pressed) {
        clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
        send_string_with_delay(secret[keycode - KC_SECRET_1], MACRO_TIMER);
      }
      return false;
      break;
  }
  return true;
}
