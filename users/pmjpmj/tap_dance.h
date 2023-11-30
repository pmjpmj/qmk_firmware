#pragma once

#include "pmjpmj.h"

enum {
    TD_LCBR = 0,
    TD_RCBR,
    TD_LPRN,
    TD_RPRN,
    TD_LABK,
    TD_RABK,
};

void lcbr_dance(tap_dance_state_t *state, void *user_data);
void rcbr_dance(tap_dance_state_t *state, void *user_data);
void lprn_dance(tap_dance_state_t *state, void *user_data);
void rprn_dance(tap_dance_state_t *state, void *user_data);
void labk_dance(tap_dance_state_t *state, void *user_data);
void rabk_dance(tap_dance_state_t *state, void *user_data);
