EXTRAKEY_ENABLE = yes # Audio control and System control
MOUSEKEY_ENABLE = no
AUTO_SHIFT_ENABLE = yes
DYNAMIC_MACRO_ENABLE = no
COMMAND_ENABLE = no
LEADER_ENABLE = no
TAP_DANCE_ENABLE = no
MAGIC_ENABLE = yes
COMBO_ENABLE = yes

SECRETS_ENABLED = yes
MACROS_ENABLED = yes
CAPSWORD_ENABLED = yes

BOOTMAGIC_ENABLE = no
WPM_ENABLE = no
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = yes
OLED_ENABLE = yes
OLED_DRIVER = SSD1306
WAIT_FOR_USB = yes

DEBUG_ENABLE = no
KEYLOGGER_ENABLE = no
UCIS_ENABLE = no
AUTOLOG_ENABLE = no
LTO_ENABLE = yes
CONSOLE_ENABLE = no
VERBOSE = no
DEBUG_MATRIX_SCAN_RATE  = no
DEBUG_MATRIX = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no

ifeq ($(strip $(COMBO_ENABLE)), yes)
	SRC += combos.c
endif

ifeq ($(strip $(OLED_ENABLE)), yes)
	SRC += oled.c
endif
