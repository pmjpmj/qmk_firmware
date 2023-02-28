EXTRAKEY_ENABLE = yes # Audio control and System control
MOUSEKEY_ENABLE = yes
AUTO_SHIFT_ENABLE = no
DYNAMIC_MACRO_ENABLE = no
COMMAND_ENABLE = no
LEADER_ENABLE = no
TAP_DANCE_ENABLE = no
MAGIC_ENABLE = yes
COMBO_ENABLE = yes
CAPS_WORD_ENABLE = yes

# DEBOUNCE_TYPE = sym_eager_pk
# DEBOUNCE_TYPE = sym_defer_g
# DEBOUNCE_TYPE = asym_eager_defer_pk

SECRETS_ENABLED = no
MACROS_ENABLED = no
#CAPSWORD_ENABLED = yes

# BOOTMAGIC_ENABLE = no
WPM_ENABLE = no
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = yes
# OLED_ENABLE = yes
# OLED_DRIVER = SSD1306
# WAIT_FOR_USB = yes

ifeq ($(strip $(COMBO_ENABLE)), yes)
	SRC += combos.c
endif

ifeq ($(strip $(OLED_ENABLE)), yes)
	SRC += oled.c
endif
