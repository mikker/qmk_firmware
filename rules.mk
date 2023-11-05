# SRC += source.c
SRC += features/swapper.c
SRC += features/select_word.c
SRC += features/oneshot.c

# Activate symbol layer + nav layer at once to toggle third layer
TRI_LAYER_ENABLE = yes

# Features
DYNAMIC_MACRO_ENABLE = yes
CAPS_WORD_ENABLE = yes

# RGB (underglow) lighting for Liatris
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_SLEEP = yes
WS2812_DRIVER = vendor

# Enable combos
COMBO_ENABLE = yes
INTROSPECTION_KEYMAP_C = source.c # Look here for definitions of combos.

# Reduce size
LTO_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no 
MAGIC_ENABLE = no
MUSIC_ENABLE = no

