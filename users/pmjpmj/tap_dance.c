#include "tap_dance.h"

void lcbr_dance(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING("{");
    } else if (state->count == 2) {
        SEND_STRING("(");
    } else if (state->count == 3) {
        SEND_STRING("[");
    } else if (state->count == 4) {
        SEND_STRING("<");
    } else {
        SEND_STRING("{");
    }
    reset_tap_dance(state);
}

void rcbr_dance(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING("}");
    } else if (state->count == 2) {
        SEND_STRING(")");
    } else if (state->count == 3) {
        SEND_STRING("]");
    } else if (state->count == 4) {
        SEND_STRING(">");
    } else {
        SEND_STRING("}");
    }
    reset_tap_dance(state);
}

void lprn_dance(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING("(");
    } else if (state->count == 2) {
        SEND_STRING("{");
    } else if (state->count == 3) {
        SEND_STRING("[");
    } else if (state->count == 4) {
        SEND_STRING("<");
    } else {
        SEND_STRING("(");
    }
    reset_tap_dance(state);
}

void rprn_dance(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING(")");
    } else if (state->count == 2) {
        SEND_STRING("}");
    } else if (state->count == 3) {
        SEND_STRING("]");
    } else if (state->count == 4) {
        SEND_STRING(">");
    } else {
        SEND_STRING(")");
    }
    reset_tap_dance(state);
}

void labk_dance(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING("<");
    } else if (state->count == 2) {
        SEND_STRING("<<");
    } else if (state->count == 3) {
        SEND_STRING("<-");
    } else {
        SEND_STRING("<=");
    }
    reset_tap_dance(state);
}

void rabk_dance(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING(">");
    } else if (state->count == 2) {
        SEND_STRING(">>");
    } else if (state->count == 3) {
        SEND_STRING("->");
    } else {
        SEND_STRING(">=");
    }
    reset_tap_dance(state);
}
