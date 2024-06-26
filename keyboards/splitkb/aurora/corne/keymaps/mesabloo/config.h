#pragma once

#define PERMISSIVE_HOLD_PER_KEY
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
#define TAPPING_TERM_PER_KEY
#define RETRO_TAPPING_PER_KEY

#if defined(OLED_ENABLE)
#    if defined(OLED_FONT_H)
#        undef OLED_FONT_H
#    endif
#    define OLED_FONT_H "./keymaps/mesabloo/glcdfont.c"
#endif

// Layers
#define LAYER_ALPHA     0
#define LAYER_NUM       1
#define LAYER_SYMB      2
#define LAYER_META      3
#define LAYER_FN        4
#define LAYER_GRV       5
#define LAYER_ACC       6

#define LAYER_UNDEFINED 15

#define TRI_LAYER_LOWER_LAYER LAYER_NUM
#define TRI_LAYER_UPPER_LAYER LAYER_SYMB
#define TRI_LAYER_ADJUST_LAYER LAYER_META
