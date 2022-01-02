#include QMK_KEYBOARD_H
#include "keymap.h"

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
    #ifndef CAPSWORD_ENABLED
    oled_write_P(PSTR(" "), false);
    #endif
    oled_write_P(PSTR("N"), led_usb_state & (1 << USB_LED_NUM_LOCK));
    oled_write_P(PSTR("C"), led_usb_state & (1 << USB_LED_CAPS_LOCK));
    #ifdef CAPSWORD_ENABLED
    oled_write_P(PSTR("W"), is_caps_word_enabled());
    #endif
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
