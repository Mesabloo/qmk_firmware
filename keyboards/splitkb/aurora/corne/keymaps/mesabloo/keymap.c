#include QMK_KEYBOARD_H
#include "keymap_extras/keymap_french.h"

// A few extras french keycodes
#define FR_CART ALGR(FR_CCED)
////////////////////////////

enum custom_keycodes {
    MT_DIAE = SAFE_RANGE,
    MT_LBRC,
    MT_RBRC,
    MT_BSLS,
    MT_QUOT,
};

#define BSPC_LOWR LT(LAYER_UNDEFINED, KC_BSPC)
#define TAB_UPPR LT(LAYER_UNDEFINED, KC_TAB)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LAYER_ALPHA] = LAYOUT_split_3x6_3(
        XXXXXXX, FR_B,         FR_L,         FR_D,         FR_W,         FR_Z,   /**/ KC_ESC, FR_F,         FR_O,            FR_U,         FR_J,         XXXXXXX,
        XXXXXXX, LGUI_T(FR_N), LALT_T(FR_R), LSFT_T(FR_T), LCTL_T(FR_S), FR_G,   /**/ FR_Y,   LCTL_T(FR_H), RSFT_T(FR_A),    LALT_T(FR_E), RGUI_T(FR_I), XXXXXXX,
        XXXXXXX, FR_Q,         FR_X,         FR_M,         FR_C,         FR_V,   /**/ FR_K,   FR_P,         FR_COMM,         FR_SCLN,      FR_COLN,      XXXXXXX,
                                             MO(LAYER_FN), TAB_UPPR,     KC_SPC, /**/ LSFT_T(KC_ENT), BSPC_LOWR,    RALT_T(KC_RCTL)
    ),
    [LAYER_NUM] = LAYOUT_split_3x6_3(
        XXXXXXX, XXXXXXX,         KC_P1,         KC_P2,         KC_P3,         XXXXXXX, /**/ XXXXXXX, XXXXXXX,         XXXXXXX,         XXXXXXX,       XXXXXXX,          XXXXXXX,
        XXXXXXX, LGUI_T(XXXXXXX), LALT_T(KC_P4), LSFT_T(KC_P5), LCTL_T(KC_P6), XXXXXXX, /**/ XXXXXXX, LCTL_T(KC_LEFT), RSFT_T(KC_DOWN), LALT_T(KC_UP), RGUI_T(KC_RIGHT), XXXXXXX,
        XXXXXXX, XXXXXXX,         KC_P7,         KC_P8,         KC_P9,         KC_P0,   /**/ XXXXXXX, KC_HOME,         KC_PGDN,         KC_PGUP,       KC_END,           XXXXXXX,
                                                 _______,       _______,       _______, /**/ _______,  _______, _______
    ),
    [LAYER_SYMB] = LAYOUT_split_3x6_3(
        XXXXXXX, FR_EXLM,         FR_AT,           FR_HASH,         FR_DLR,          FR_PERC, /**/ FR_CART, FR_AMPR,        FR_LPRN,         FR_RPRN,         FR_ASTR,         XXXXXXX,
        XXXXXXX, LGUI_T(FR_LABK), LALT_T(MT_DIAE), LSFT_T(FR_CIRC), LCTL_T(MT_QUOT), FR_TILD, /**/ FR_MINS, LCTL_T(FR_EQL), RSFT_T(MT_LBRC), LALT_T(MT_RBRC), RGUI_T(MT_BSLS), XXXXXXX,
        XXXXXXX, XXXXXXX,         OSL(LAYER_ACC),  OSL(LAYER_GRV),  FR_CCED,         FR_GRV,  /**/ FR_UNDS, FR_PLUS,        FR_LCBR,         FR_RCBR,         FR_PIPE,         XXXXXXX,
                                                   _______,          _______,        _______, /**/ _______, _______,        _______
    ),
    [LAYER_META] = LAYOUT_split_3x6_3(
        XXXXXXX, QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /**/   DT_UP, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, UG_TOGG, UG_HUEU, UG_SATU, UG_VALU, XXXXXXX, /**/ DT_PRNT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, UG_HUED, UG_SATD, UG_VALD, XXXXXXX, /**/ DT_DOWN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   XXXXXXX, _______, XXXXXXX, /**/ XXXXXXX, _______, XXXXXXX
    ),
    [LAYER_FN] = LAYOUT_split_3x6_3(
        XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   XXXXXXX, /**/ XXXXXXX, KC_PSCR,         XXXXXXX,         XXXXXXX,         XXXXXXX,         KC_CAPS,
        XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,   XXXXXXX, /**/ XXXXXXX, LCTL_T(XXXXXXX), RSFT_T(XXXXXXX), LALT_T(XXXXXXX), RGUI_T(XXXXXXX), KC_NUM,
        XXXXXXX, KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, /**/ XXXXXXX, KC_MUTE,         KC_VOLD,         KC_VOLU,         _______,         XXXXXXX,
                                   _______, XXXXXXX, _______, /**/ _______, XXXXXXX,         _______
    ),
    [LAYER_GRV] = LAYOUT_split_3x6_3(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /**/ XXXXXXX, XXXXXXX, XXXXXXX, FR_UGRV, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /**/ XXXXXXX, XXXXXXX, FR_AGRV, FR_EGRV, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /**/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   _______, XXXXXXX, _______, /**/ _______, XXXXXXX, _______
    ),
    [LAYER_ACC] = LAYOUT_split_3x6_3(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /**/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /**/ XXXXXXX, XXXXXXX, XXXXXXX, FR_EACU, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /**/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   _______, XXXXXXX, _______, /**/ _______, XXXXXXX, _______
    )
};
// clang-format on

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case BSPC_LOWR:
            if (!record->tap.count) {
                if (record->event.pressed) {
                    // Started holding
                    layer_on(TRI_LAYER_LOWER_LAYER);
                } else {
                    // Stopped holding
                    layer_off(TRI_LAYER_LOWER_LAYER);
                }
                update_tri_layer(TRI_LAYER_LOWER_LAYER, TRI_LAYER_UPPER_LAYER, TRI_LAYER_ADJUST_LAYER);
                return false;
            }
            return true;
        case TAB_UPPR:
            if (!record->tap.count) {
                if (record->event.pressed) {
                    // Started holding
                    layer_on(TRI_LAYER_UPPER_LAYER);
                } else {
                    // Stopped holding
                    layer_off(TRI_LAYER_UPPER_LAYER);
                }
                update_tri_layer(TRI_LAYER_LOWER_LAYER, TRI_LAYER_UPPER_LAYER, TRI_LAYER_ADJUST_LAYER);
                return false;
            }
            return true;
        case LALT_T(MT_DIAE):
            if (record->tap.count && record->event.pressed) {
                tap_code16(FR_DIAE);
                return false;
            }
            return true;
        case RSFT_T(MT_LBRC):
            if (record->tap.count && record->event.pressed) {
                tap_code16(FR_LBRC);
                return false;
            }
            return true;
        case LALT_T(MT_RBRC):
            if (record->tap.count && record->event.pressed) {
                tap_code16(FR_RBRC);
                return false;
            }
            return true;
        case RGUI_T(MT_BSLS):
            if (record->tap.count && record->event.pressed) {
                tap_code16(FR_BSLS);
                return false;
            }
            return true;
        case LCTL_T(MT_QUOT):
            if (record->tap.count && record->event.pressed) {
                // if shift then ' else "
                const uint8_t mods = get_mods();
                if (mods & MOD_MASK_SHIFT) {
                    // Temporarily disable SHIFT so that it outputs " not 3
                    del_mods(MOD_MASK_SHIFT);
                    tap_code16(FR_DQUO);
                    // Now reregister the old modifier state in case we want to continue using SHIFT
                    set_mods(mods);
                } else {
                    tap_code16(FR_QUOT);
                }
                return false;
            }
            return true;
        default:
            return true;
    }
}

void keyboard_pre_init_user(void) {
    // Set our LED pin as output
    setPinOutput(24);
    // Turn the LED off
    // (Due to technical reasons, high is off and low is on)
    writePinHigh(24);
}

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

#if defined(PERMISSIVE_HOLD_PER_KEY)
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RALT_T(KC_LCTL):
        case LSFT_T(KC_ENT):
            return true;
        default:
            return false;
    }
}
#endif

#if defined(HOLD_ON_OTHER_KEY_PRESS_PER_KEY)
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case BSPC_LOWR:
        case TAB_UPPR:
            return true;
        default:
            return false;
    }
}
#endif

#if defined(RETRO_TAPPING_PER_KEY)
bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        default:
            return false;
    }
}
#endif

#if defined(TAPPING_TERM_PER_KEY)
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        default:
#    if defined(DYNAMIC_TAPPING_TERM_ENABLE)
            return g_tapping_term;
#    else
            return TAPPING_TERM;
#    endif
    }
}
#endif

#if defined(CHORDAL_HOLD)
// clang-format off
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT_split_3x6_3(
        'L', 'L', 'L', 'L', 'L', 'L', /**/ 'R', 'R', 'R', 'R', 'R', 'R', 
        'L', 'L', 'L', 'L', 'L', 'L', /**/ 'R', 'R', 'R', 'R', 'R', 'R', 
        'L', 'L', 'L', 'L', 'L', 'L', /**/ 'R', 'R', 'R', 'R', 'R', 'R', 
                       'L', 'L', 'L', /**/ 'R', 'R', 'R'
    );
// clang-format on 

bool get_chordal_hold(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record,
                      uint16_t other_keycode, keyrecord_t* other_record) {
    // Exceptionally allow some one-handed chords for hotkeys.
    switch (tap_hold_keycode) {
        case LSFT_T(KC_ENT):
        case TAB_UPPR:
        case BSPC_LOWR:
            return true;
    }
    // Otherwise defer to the opposite hands rule.
    return get_chordal_hold_default(tap_hold_record, other_record);
}
#endif

#if defined(FLOW_TAP_TERM)

#endif

#if defined(KEY_OVERRIDE_ENABLE)
// - SHIFT + BACKSPACE = DELETE
const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
// Media control keys (only on LAYER_FN):
// - SHIFT + VOLUME_MUTE = MEDIA_PREVIOUS
const key_override_t media_previous_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_MUTE, KC_MPRV, 1 << LAYER_FN);
// - SHIFT + VOLUME_DOWN = MEDIA_PLAY_PAUSE
const key_override_t media_play_pause_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_VOLD, KC_MPLY, 1 << LAYER_FN);
// - SHIFT + VOLUME_UP = MEDIA_NEXT
const key_override_t media_next_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_VOLU, KC_MNXT, 1 << LAYER_FN);
// - SHIFT + QUOTE = DQUOTE
const key_override_t dquote_override = ko_make_basic(MOD_MASK_SHIFT, FR_QUOT, FR_DQUO);

// clang-format off
const key_override_t *key_overrides[] = (const key_override_t *[]){
    &delete_key_override,
    &media_previous_override,
    &media_play_pause_override,
    &media_next_override,
    &dquote_override,
    // NULL must be the last entry.
    NULL
};
// clang-format on
#endif

#if defined(OLED_ENABLE)
static inline void render_space(void) {
    oled_write_P(PSTR("     "), false);
}

static void render_logo(void) {
    // clang-format off
    static const char PROGMEM aurora_logo[] = {
        0x00, 0x00, 0x00, 0xe0, 0x00, 0xf8, 0xc0, 0xf8, 0xe0, 0xc0, 0xfc, 0x00, 0x7e, 0x18, 0x00, 0x80,
        0x00, 0x02, 0x80, 0xf0, 0x00, 0xc0, 0x80, 0xf8, 0xc0, 0xe0, 0x70, 0x60, 0x3c, 0x38, 0x3c, 0x1c,
        0x00, 0x3f, 0x0c, 0x0f, 0x1f, 0x03, 0x07, 0x01, 0xc3, 0x00, 0xe0, 0x80, 0x00, 0xe0, 0x80, 0xf8,
        0x80, 0xc0, 0xf7, 0xc7, 0x6f, 0x7b, 0x39, 0x30, 0x00, 0x80, 0x00, 0xc0, 0x00, 0xc0, 0xc2, 0xe0,
        0x00, 0x40, 0x38, 0x30, 0x38, 0x1e, 0x18, 0x1e, 0x0f, 0x0c, 0x07, 0x07, 0x07, 0x03, 0x03, 0x21,
        0x21, 0x31, 0x30, 0x18, 0x18, 0x1c, 0x08, 0x0c, 0x0e, 0x07, 0x06, 0x07, 0x03, 0xc3, 0x03, 0x01,
        0x4c, 0xcc, 0xc2, 0xc2, 0x41, 0x49, 0x09, 0x2b, 0x2a, 0x6a, 0x6e, 0x24, 0x24, 0x04, 0x92, 0x92,
        0xb1, 0xf1, 0xf1, 0xf2, 0xe6, 0xa4, 0xa4, 0x04, 0x04, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28
    };
    // clang-format on
    oled_write_raw_P(aurora_logo, sizeof(aurora_logo));
    oled_set_cursor(0, 4);
}

static void render_flower(void) {
    // clang-format off
    // LAYER_ALPHA & LAYER_ACC & LAYER_GRV
    static const char PROGMEM flower1[] = {
        0xA0, 0xA1, 0x81, 0x82, 0x83,
        0xC0, 0xC1, 0x20, 0xA2, 0xA3,
        0x20, 0x84, 0x85, 0x86, 0x20,
        0x0
    };
    // LAYER_NUM
    static const char PROGMEM flower2[] = {
        0xA0, 0xA1, 0x80, 0x82, 0x83,
        0xC0, 0xC1, 0x20, 0xA4, 0xA5,
        0x20, 0x84, 0x85, 0x86, 0x20,
        0x0
    };
    // LAYER_SYMB
    static const char PROGMEM flower3[] = {
        0xA0, 0xA1, 0x80, 0x82, 0x83,
        0xC2, 0xC3, 0x20, 0xA2, 0xA3,
        0x20, 0x84, 0x85, 0x86, 0x20,
        0x0
    };
    // LAYER_FN
    static const char PROGMEM flower4[] = {
        0xA0, 0xA1, 0x80, 0x82, 0x83,
        0xC0, 0xC1, 0x20, 0xA2, 0xA3,
        0x20, 0x84, 0x85, 0x88, 0x20,
        0x0
    };
    // LAYER_META
    static const char PROGMEM flower5[] = {
        0xA0, 0xA1, 0x80, 0x82, 0x83,
        0xC0, 0xC1, 0x20, 0xA2, 0xA3,
        0x20, 0x87, 0x85, 0x86, 0x20,
        0x0
    };
    // OTHER LAYERS
    static const char PROGMEM flower7[] = {
        0xA0, 0xA1, 0x81, 0x82, 0x83,
        0xC2, 0xC3, 0x20, 0xA4, 0xA5,
        0x20, 0x87, 0x85, 0x88, 0x20,
        0x0
    };
    // clang-format on

    if (layer_state_is(LAYER_ALPHA) || layer_state_is(LAYER_ACC) || layer_state_is(LAYER_GRV)) {
        oled_write_P(flower1, false);
        // render_space();
        // oled_write_P(" let ", false);
    } else if (layer_state_is(LAYER_META)) {
        oled_write_P(flower5, false);
        // render_space();
        // oled_write_P(" sys ", false);
    } else if (layer_state_is(LAYER_NUM)) {
        oled_write_P(flower2, false);
        // render_space();
        // oled_write_P(" num ", false);
    } else if (layer_state_is(LAYER_SYMB)) {
        oled_write_P(flower3, false);
        // render_space();
        // oled_write_P(" sym ", false);
    } else if (layer_state_is(LAYER_FN)) {
        oled_write_P(flower4, false);
        // render_space();
        // oled_write_P(" fun ", false);
    } else {
        oled_write_P(flower7, false);
        // render_space();
        // oled_write_P(" ... ", false);
    }
}

static const char PROGMEM lock_on[]  = {0xBB, 0x0};
static const char PROGMEM lock_off[] = {0x9B, 0x0};

static void render_mod_stat_gui_alt(uint8_t mods, led_t leds) {
    static const char PROGMEM gui_on[]  = {0xBF, 0x0};
    static const char PROGMEM gui_off[] = {0xBD, 0x0};
    static const char PROGMEM alt_on[]  = {0xBE, 0x0};
    static const char PROGMEM alt_off[] = {0xBC, 0x0};

    oled_write_P(leds.num_lock ? lock_on : lock_off, false);
    oled_write_P("n   ", false);
    oled_write_P(leds.caps_lock ? lock_on : lock_off, false);
    oled_write_P("c ", false);
    oled_write_P((mods & MOD_MASK_GUI) ? gui_on : gui_off, false);
    oled_write_P((mods & MOD_MASK_ALT) ? alt_on : alt_off, false);
}

static void render_mod_stat_shift_ctrl(uint8_t mods, led_t leds) {
    static const char PROGMEM shift_on[]  = {0x9F, 0x0};
    static const char PROGMEM shift_off[] = {0x9D, 0x0};
    static const char PROGMEM ctrl_on[]   = {0x9E, 0x0};
    static const char PROGMEM ctrl_off[]  = {0x9C, 0x0};

    oled_write_P(leds.scroll_lock ? lock_on : lock_off, false);
    oled_write_P("s ", false);
    oled_write_P((mods & MOD_MASK_SHIFT) ? shift_on : shift_off, false);
    oled_write_P((mods & MOD_MASK_CTRL) ? ctrl_on : ctrl_off, false);
};

#    if defined(DYNAMIC_TAPPING_TERM_ENABLE)
static void render_tapping_term(void) {
    static char PROGMEM tterm[] = {0, 0, 0, 0, 0, 0x0};
    sprintf(tterm, "%05d", g_tapping_term);
    oled_write_P(tterm, false);
}
#    endif

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_logo();
        oled_write_P("corne", false);

        render_space();
        render_space();
        render_flower();
        render_space();
#    if defined(DYNAMIC_TAPPING_TERM_ENABLE)
        render_tapping_term();
#    else
        render_space();
#    endif

        // render_space();

        led_t   leds = host_keyboard_led_state();
        uint8_t mods = get_mods() | get_oneshot_mods();
        render_mod_stat_gui_alt(mods, leds);
        render_mod_stat_shift_ctrl(mods, leds);

        return false;
    } else {
        return true;
    }
}
#endif
