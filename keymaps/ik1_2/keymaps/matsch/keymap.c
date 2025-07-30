#include QMK_KEYBOARD_H

#define LBASE 0
#define LNUM 1
#define LNAV 2
#define LFN 3

#define TABNUM LT(LNUM, KC_TAB)
#define ENTNAV LT(LNAV, KC_ENT)
#define ENTFN LT(LFN, KC_ENT)
#define ENTALTGR MT(MOD_RALT, KC_ENT)
#define BSNAV LT(LNAV, KC_BSPC)
#define NAV MO(LNAV)
#define BSSFT MT(MOD_RSFT,KC_BSPC)
#define SPCNUM MT(LNUM,KC_SPC)
#define FN MO(LFN)
#define BASE DF(LBASE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[LBASE] = LAYOUT_split_4x6_3(
    _______,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                              KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       _______,
    KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                              KC_Y,       ALGR(KC_U), KC_I,       ALGR(KC_O), KC_P,       KC_DEL,
    KC_ESC,     ALGR(KC_A), ALGR(KC_S), KC_D,       KC_F,       KC_G,                              KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
    KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,                              KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RGUI,
                                                    KC_LALT,    KC_CTL,     SPCNUM,    BSSFT,      NAV,        ENTALTGR
),

[LNUM] = LAYOUT_split_4x6_3(
_______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,                              KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     _______,
_______,    KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_TILD,                            KC_PLUS,    KC_7,       KC_8,       KC_9,       KC_ASTR,    KC_BSPC,
_______,    KC_PERC,    KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_GRV,                             KC_MINS,    KC_4,       KC_5,       KC_6,       KC_BSLS,    _______,
_______,    _______,    _______,    _______,    _______,    _______,                            KC_DOT,     KC_1,       KC_2,       KC_3,       KC_EQL,     _______,
                                                _______,    _______,    _______,    _______,    KC_COMM,    KC_0
),

[LNAV] = LAYOUT_split_4x6_3(
_______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,                              KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     _______,
_______,    KC_UNDS,    KC_PLUS,    KC_LCBR,    KC_RCBR,    KC_TILD,                            KC_PGUP,    KC_HOME,    KC_UP,      KC_END,     KC_PSCR,    KC_BSPC,
_______,    KC_MINS,    KC_EQL,     KC_LBRC,    KC_RBRC,    KC_GRV,                             KC_PGDN,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   _______,    _______,
_______,    KC_UNDS,    KC_PLUS,    KC_LPRN,    KC_RPRN,    _______,                            KC_INS,     KC_MUTE,    KC_VOLD,    KC_VOLU,    _______,    _______,
                                                _______,    _______,    _______,    _______,    _______,    _______
),

[LFN] = LAYOUT_split_4x6_3(
_______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,                              KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     _______,
_______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      _______,                            _______,    KC_KP_7,    KC_KP_8,    KC_KP_9,    KC_PSCR,    _______,
_______,    KC_F5,      KC_F6,      KC_F7,      KC_F8,      _______,                            _______,    KC_KP_4,    KC_KP_5,    KC_KP_6,    _______,    _______,
_______,    KC_F9,      KC_F10,     KC_F11,     KC_F12,     _______,                            _______,    KC_KP_1,    KC_KP_2,    KC_KP_3,    _______,    _______,
                                                _______,    _______,    _______,    _______,    KC_KP_0,    _______
),

};
