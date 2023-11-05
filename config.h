#pragma once

#define DYNAMIC_MACRO_NO_NESTING

#ifdef RGB_MATRIX_ENABLE
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_KEYPRESSES
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    define ENABLE_RGB_MATRIX_SOLID_SPLASH
#    define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#    define ENABLE_RGB_MATRIX_RAINDROPS
#endif

// Reduze size of firmware
#define LAYER_STATE_8BIT
#define NO_MUSIC_MODE
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

#ifndef __ASSEMBLER__
// Define all of custom keycodes. Needs to be protected.
#include "quantum/keycodes.h"
#define SW_TAB QK_USER
#define SW_CTAB QK_USER + 1
#define SW_BTICK QK_USER + 2
#define SELWORD QK_USER + 3
#define UPDIR QK_USER + 4
#define OS_SHFT QK_USER + 5
#define OS_CTRL QK_USER + 6
#define OS_ALT QK_USER + 7
#define OS_CMD QK_USER + 8
#endif


