#include QMK_KEYBOARD_H

#define LBASE 0
#define LNUM 1
#define LNAV 2
#define LFN 3

#define TABNUM LT(LNUM, KC_TAB)
#define ENTNAV LT(LNAV, KC_ENT)
#define BSNAV LT(LNAV, KC_BSPC)
#define MINFN LT(LFN, KC_MINS)
#define SPCNUM LT(LNUM,KC_SPC)

#define NAV MO(LNAV)
#define BSSFT MT(MOD_RSFT,KC_BSPC)
#define FN MO(LFN)
#define BASE DF(LBASE)

enum unicode_names {
    A_UMLAUT,
    A_UMLAUT_CAP,
    O_UMLAUT,
    O_UMLAUT_CAP,
    U_UMLAUT,
    U_UMLAUT_CAP,
    ESZETT,
    ESZETT_CAP
};

const uint32_t PROGMEM unicode_map[] = {
    [A_UMLAUT]     = 0x00E4, // ä
    [A_UMLAUT_CAP] = 0x00C4, // Ä
    [O_UMLAUT]     = 0x00F6, // ö
    [O_UMLAUT_CAP] = 0x00D6, // Ö
    [U_UMLAUT]     = 0x00FC, // ü
    [U_UMLAUT_CAP] = 0x00DC, // Ü
    [ESZETT]       = 0x00DF, // ß
    [ESZETT_CAP]   = 0x1E9E  // ẞ
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[LBASE] = LAYOUT_split_4x6_3(
_______,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                               KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       _______,
KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                               KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_DEL,
KC_ESC,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                               KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,                               KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RGUI,
                                                KC_LALT,    KC_LCTL,     SPCNUM,    ENTNAV,     MINFN,      BSSFT
),

[LNUM] = LAYOUT_split_4x6_3(
_______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,                              KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     _______,
_______,    KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_GRV,                             KC_COMM,    KC_7,       KC_8,       KC_9,       KC_ASTR,    KC_BSPC,
_______,    KC_PERC,    KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_BSLS,                            KC_DOT,     KC_4,       KC_5,       KC_6,       KC_BSLS,    _______,
_______,    KC_PLUS,    KC_MINS,    KC_ASTR,    KC_SLSH,    KC_EQL,                             KC_0,       KC_1,       KC_2,       KC_3,       KC_EQL,     _______,
                                                KC_LALT,    KC_LCTL,     SPCNUM,    KC_ENT,     MINFN,      BSSFT
),

[LNAV] = LAYOUT_split_4x6_3(
_______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,                              KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     _______,
_______,    KC_UNDS,    KC_PLUS,    KC_LCBR,    KC_RCBR,    KC_TILD,                            KC_PGUP,    KC_HOME,    KC_UP,      KC_END,     KC_PSCR,    KC_BSPC,
_______,    KC_MINS,    KC_EQL,     KC_LBRC,    KC_RBRC,    KC_GRV,                             KC_PGDN,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   _______,    _______,
_______,    KC_UNDS,    KC_PLUS,    KC_LPRN,    KC_RPRN,    _______,                            KC_INS,     KC_MUTE,    KC_VOLD,    KC_VOLU,    _______,    _______,
                                                KC_LALT,    KC_LCTL,     SPCNUM,    KC_ENT,     MINFN,      BSSFT
),

[LFN] = LAYOUT_split_4x6_3(
_______,    KC_F1,                      KC_F2,                  KC_F3,      KC_F4,       KC_F5,                             KC_F6,      KC_F7,                      KC_F8,      KC_F9,                      KC_F10,     _______,
_______,    KC_F11,                     KC_F12,                 _______,    _______,     _______,                           _______,    UP(U_UMLAUT, U_UMLAUT_CAP), _______,    UP(O_UMLAUT, O_UMLAUT_CAP), _______,    _______,
_______,    UP(A_UMLAUT, A_UMLAUT_CAP), UP(ESZETT, ESZETT_CAP), _______,    _______,     _______,                           _______,    _______,                    _______,    _______,                    _______,    _______,
_______,    LSFT(KC_QUOT),  KC_PLUS,                            KC_Y,       _______,     _______,                           UC_NEXT,    _______,                    _______,    _______,                    _______,    _______,
                                                                            KC_LALT,    KC_LCTL,     SPCNUM,    KC_ENT,     MINFN,      BSSFT
),

};
