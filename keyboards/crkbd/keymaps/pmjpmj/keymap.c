#include QMK_KEYBOARD_H
#include "pmjpmj.h"

enum Layers {
    L_BASE_COLEMAK_DH_HRM, L_BASE_COLEMAK_DH,  L_BASE_QWERTY, L_BASE_GAME, L_LOWER, L_RAISE, L_ADJUST, L_ONESHOT
};

#define LAYOUT_wrapped(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // base

  [L_BASE_COLEMAK_DH_HRM] = LAYOUT_wrapped(
     KC_TAB, ______________COLEMAK_MOD_DH_L1____________,      ______________COLEMAK_MOD_DH_R1____________, KC_BSPC,
    GUI_ESC, ______________COLEMAK_MOD_DH_HRM_L2________,      ______________COLEMAK_MOD_DH_HRM_R2________, KC_QUOT,
    KC_LSFT, ______________COLEMAK_MOD_DH_L3____________,      ______________COLEMAK_MOD_DH_R3____________, SFT_ENT,
                               LALT_TB, LOW_SPC, CTL_SPC,      CTL_ENT, RAI_BSP, RALT_DL
  ),

  [L_BASE_COLEMAK_DH] = LAYOUT_wrapped(
     KC_TAB,  ______________COLEMAK_MOD_DH_L1____________,      ______________COLEMAK_MOD_DH_R1____________, KC_BSPC,
    GUI_ESC,  ______________COLEMAK_MOD_DH_L2____________,      ______________COLEMAK_MOD_DH_R2____________, KC_QUOT,
    KC_LSFT,  ______________COLEMAK_MOD_DH_L3____________,      ______________COLEMAK_MOD_DH_R3____________, SFT_ENT,
                                LALT_TB, LOW_SPC, CTL_SPC,      CTL_ENT, RAI_BSP, RALT_DL
  ),

  [L_BASE_QWERTY] = LAYOUT_wrapped(
     KC_TAB,  _________________QWERTY_L1_________________,      _________________QWERTY_R1_________________, KC_BSPC,
    GUI_ESC,  _________________QWERTY_L2_________________,      _________________QWERTY_R2_________________, KC_QUOT,
    KC_LSFT,  _________________QWERTY_L3_________________,      _________________QWERTY_R3_________________, SFT_ENT,
                                LALT_TB, LOW_SPC, CTL_SPC,      CTL_ENT, RAI_BSP, RALT_DL
  ),

  [L_BASE_GAME] = LAYOUT_wrapped(
     KC_TAB,  _________________QWERTY_L1_________________,      _________________QWERTY_R1_________________, KC_BSPC,
    KC_LCTL,  _________________QWERTY_L2_________________,      _________________QWERTY_R2_________________, KC_QUOT,
    KC_LSFT,  _________________QWERTY_L3_________________,      _________________QWERTY_R3_________________, SFT_ENT,
                                 LALT_TB, LOW_SPC, KC_SPC,      CTL_ENT, RAI_BSP, RALT_DL
  ),

  [L_LOWER] = LAYOUT_wrapped(
     KC_GRV, ___________________NUM_L1__________________,    ___________________NUM_R1__________________, KC_TILD,
    _______, ___________________SYM_L1__________________,    ___________________SYM_R1__________________, KC_PIPE,
    _______, ___________________SYM_L2__________________,    ___________________SYM_R2__________________, _______,
                               _______, _______, _______,    _______, _______, _______
  ),

  [L_RAISE] = LAYOUT_split_3x6_3(
    KC_CAPS,  KC_F1,   KC_F2,  KC_F3,    KC_F4,   KC_F5,      _______, C(KC_LEFT), _______,  _______, C(KC_RGHT), OSL(L_ONESHOT),
    KC_CAPW,  KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,      _______,   KC_LEFT,  KC_DOWN,    KC_UP,    KC_RGHT, _______,
    _______,  KC_F11, KC_F12, DM_REC1, DM_PLY1, DM_RSTP,      _______,   KC_HOME,  KC_PGDN,  KC_PGUP,     KC_END, _______,
                                _______, _______, _______,    _______, _______, _______
  ),

  [L_ADJUST] = LAYOUT_split_3x6_3(
    CG_TOGG, BL_CMDR, BL_CMDH, BL_QWTY, BL_GAME, XXXXXXX,    KC_ASTG, XXXXXXX, XXXXXXX, XXXXXXX, KC_INS,  KC_DEL,
    RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,    XXXXXXX, KC_VOLD, KC_VOLU, KC_MUTE, XXXXXXX, XXXXXXX,
    RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,    XXXXXXX, KC_MPRV, KC_MNXT, KC_MPLY, KC_MSTP, XXXXXXX,
                               XXXXXXX, _______, XXXXXXX,    XXXXXXX, _______, XXXXXXX
  ),

  [L_ONESHOT] = LAYOUT_split_3x6_3(
    XXXXXXX, KC_SEC1, KC_SEC2, KC_SEC3, KC_SEC4, KC_SECRET_5,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, KC_MAC1, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX
  ),

// XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//                            XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, L_LOWER, L_RAISE, L_ADJUST);
}

#ifdef TAPPING_TERM_PER_KEY
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HOME_A:
        case HOME_R:
        case HOME_I:
        case HOME_O:
            return TAPPING_TERM + 50;
        case HOME_S:
        case HOME_T:
        case HOME_N:
        case HOME_E:
            return TAPPING_TERM + 20;
        default:
            return TAPPING_TERM;
    }
}
#endif

#ifdef PERMISSIVE_HOLD_PER_KEY
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LOW_SPC:
        case RAI_BSP:
        case CTL_SPC:
        case CTL_ENT:
        case LALT_TB:
        case RALT_DL:
            return true;
        default:
            return false;
    }
}
#endif

#ifdef HOLD_ON_OTHER_KEY_PRESS_PER_KEY
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
            return true;
        default:
            return false;
    }
}
#endif

#ifdef TAPPING_FORCE_HOLD_PER_KEY
bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CTL_SPC:
        case RAI_BSP:
        case LALT_TB:
        case RALT_DL:
            return false;
        default:
            return true;
    }
}
#endif

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    } else {
        return rotation;
    }
}

void render_crkbd_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
    // oled_write_ln_P(PSTR("corne"), false);
}

#ifdef WPM_ENABLE
char     wpm_str[10];
void render_wpm(void) {
    oled_write_P(PSTR("WPM: "), false);
    sprintf(wpm_str, "  %03d", get_current_wpm());
    oled_write(wpm_str, false);
}
#endif

void render_default_layer_state(void) {
    oled_write_P(PSTR("Base:"), false);
    switch (get_highest_layer(default_layer_state)) {
        case L_BASE_COLEMAK_DH:
            oled_write_ln_P(PSTR("ColDH"), false);
            break;
        case L_BASE_COLEMAK_DH_HRM:
            oled_write_P(PSTR("ColDH  HRM"), false);
            break;
        case L_BASE_QWERTY:
            oled_write_ln_P(PSTR(" Qwty"), false);
            break;
        case L_BASE_GAME:
            oled_write_ln_P(PSTR(" Game"), false);
            break;
    }
}

void render_layer_state(void) {
    oled_write_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case L_BASE_COLEMAK_DH:
        case L_BASE_COLEMAK_DH_HRM:
        case L_BASE_QWERTY:
            oled_write_ln_P(PSTR(" Base"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case L_ADJUST:
            oled_write_ln_P(PSTR("Adjst"), false);
            break;
        case L_ONESHOT:
            oled_write_ln_P(PSTR("1shot"), false);
            break;
        default:
            oled_write_ln_P(PSTR(""), false);
    }
}

void render_keylock_status(uint8_t led_usb_state) {
    oled_write_P(PSTR("Lock:"), false);
    oled_write_P(PSTR(" "), false);
    oled_write_P(PSTR("N"), led_usb_state & (1 << USB_LED_NUM_LOCK));
    oled_write_P(PSTR("C"), led_usb_state & (1 << USB_LED_CAPS_LOCK));
    oled_write_P(PSTR("W"), is_caps_word_enabled());
    oled_write_P(PSTR("S"), led_usb_state & (1 << USB_LED_SCROLL_LOCK));
    #ifndef WPM_ENABLE
    oled_write_ln_P(PSTR(""), false);
    #endif
}

void render_mod_status(uint8_t modifiers) {
    oled_write_P(PSTR("Mods:"), false);
    oled_write_P(PSTR(" "), false);

    oled_write_P(PSTR("G"), (modifiers & MOD_MASK_GUI));
    oled_write_P(PSTR("A"), (modifiers & MOD_MASK_ALT));
    oled_write_P(PSTR("C"), (modifiers & MOD_MASK_CTRL));
    oled_write_P(PSTR("S"), (modifiers & MOD_MASK_SHIFT));

    #ifndef WPM_ENABLE
    oled_write_ln_P(PSTR(""), false);
    #endif
}

void render_bootmagic_status(void) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    oled_write_P(PSTR("BTMGK"), false);
    oled_write_P(PSTR(" "), false);
    oled_write_P(logo[0][0], !keymap_config.swap_lctl_lgui);
    oled_write_P(logo[1][0], keymap_config.swap_lctl_lgui);
    oled_write_P(PSTR(" "), false);
    oled_write_P(logo[0][1], !keymap_config.swap_lctl_lgui);
    oled_write_P(logo[1][1], keymap_config.swap_lctl_lgui);
    oled_write_P(PSTR(" NKRO"), keymap_config.nkro);
}

void render_status_main(void) {
    /* Show Keyboard Layout  */
    render_default_layer_state();
    render_layer_state();
    render_keylock_status(host_keyboard_leds());
    render_mod_status(get_mods());
    render_bootmagic_status();

    #ifdef WPM_ENABLE
    render_wpm();
    #endif
}

bool oled_task_user(void) {
    // update_log();
    if (is_keyboard_master()) {
        render_status_main();  // Renders the current keyboard state (layer, lock, caps, scroll, etc)
    } else {
        render_crkbd_logo();
    }
    return false;
}

#endif
