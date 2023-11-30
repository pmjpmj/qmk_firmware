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
