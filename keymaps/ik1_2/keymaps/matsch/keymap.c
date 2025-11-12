#include QMK_KEYBOARD_H

#define LBASE 0
#define LNUM 1
#define LNAV 2
#define LSPEC 3
#define LFN 4

#define TABNUM LT(LNUM, KC_TAB)
#define ENTNAV LT(LNAV, KC_ENT)
#define BSNAV LT(LNAV, KC_BSPC)
#define MINSPEC LT(LSPEC, KC_MINS)
#define ESCFN LT(LFN, KC_ESC)
#define SPCNUM LT(LNUM,KC_SPC)

#define NAV MO(LNAV)
#define BSSFT MT(MOD_RSFT,KC_BSPC)
#define ENTALT MT(MOD_LALT,KC_ENT)
#define FN MO(LFN)
#define BASE DF(LBASE)

enum custom_keycodes {
  VIM_YANK = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case VIM_YANK:
      if (record->event.pressed) {
        // when key is pressed
        SEND_STRING("\"+y");
    }
    break;
  }
  return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[LBASE] = LAYOUT_split_4x6_3(
_______,    KC_1,         KC_2,         KC_3,       KC_4,       KC_5,                               KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       _______,
KC_TAB,     KC_Q,         KC_W,         KC_E,       KC_R,       KC_T,                               KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_DEL,
ESCFN,      KC_A,         KC_S,         KC_D,       KC_F,       KC_G,                               KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
KC_LSFT,    KC_Z,         KC_X,         KC_C,       KC_V,       KC_B,                               KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RGUI,
                                                    ENTALT,     KC_LCTL,     SPCNUM,    ENTNAV,     MINSPEC,    BSSFT
),

[LNUM] = LAYOUT_split_4x6_3(
_______,    _______,      _______,      _______,    _______,    _______,                            _______,    _______,    _______,    _______,    _______,    _______,
_______,    KC_EXLM,      KC_AT,        KC_HASH,    KC_DLR,     KC_GRV,                             _______,    KC_7,       KC_8,       KC_9,       _______,    _______,
KC_DEL,     KC_PERC,      KC_CIRC,      KC_AMPR,    KC_ASTR,    KC_BSLS,                            _______,    KC_4,       KC_5,       KC_6,       KC_COLN,    _______,
KC_ENT,     KC_PLUS,      KC_MINS,      KC_ASTR,    KC_SLSH,    KC_EQL,                             KC_DOT,     KC_1,       KC_2,       KC_3,       KC_COMM,    _______,
                                                    ENTALT,     KC_LCTL,    KC_SPC,    KC_ENT,      KC_MINS,    KC_0
),

[LNAV] = LAYOUT_split_4x6_3(
_______,    _______,      _______,      _______,    _______,    _______,                            _______,    _______,    _______,    _______,    _______,    _______,
_______,    _______,      _______,      KC_LCBR,    KC_RCBR,    KC_TILD,                            KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     KC_PSCR,    KC_BSPC,
_______,    _______,      _______,      KC_LBRC,    KC_RBRC,    KC_PIPE,                            KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   _______,    _______,
_______,    _______,      _______,      KC_LPRN,    KC_RPRN,    _______,                            KC_INS,     KC_MUTE,    KC_VOLD,    KC_VOLU,    _______,    _______,
                                                    ENTALT,     KC_LCTL,     KC_SPC,    KC_ENT,     KC_MINS,    BSSFT
),

[LSPEC] = LAYOUT_split_4x6_3(
_______,    _______,      _______,      _______,    _______,    _______,                           _______,    _______,    _______,    _______,    _______,    _______,
_______,    _______,      _______,      RALT(KC_5), _______,    _______,                           _______,    RALT(KC_Y), _______,    RALT(KC_P), _______,    _______,
_______,    RALT(KC_Q),   RALT(KC_S),   _______,    _______,    _______,                           _______,    _______,    _______,    _______,    _______,    _______,
KC_LSFT,    VIM_YANK,     _______,      _______,    _______,    _______,                           _______,    _______,    _______,    _______,    _______,    _______,
                                                    KC_LALT,    KC_LCTL,     KC_SPC,    KC_ENT,    KC_MINS,    BSSFT
),

[LFN] = LAYOUT_split_4x6_3(
_______,    _______,      _______,      _______,    _______,    _______,                           _______,    _______,    _______,    _______,    _______,    _______,
_______,    _______,      _______,      _______,    _______,    _______,                           _______,    KC_F7,      KC_F8,      KC_F9,      KC_F10,     _______,
_______,    _______,      _______,      _______,    _______,    _______,                           _______,    KC_F4,      KC_F5,      KC_F6,      KC_F11,     _______,
_______,    _______,      _______,      _______,    _______,    _______,                           _______,    KC_F1,      KC_F2,      KC_F3,      KC_F12,     _______,
                                                    KC_LALT,    KC_LCTL,     KC_SPC,    KC_ENT,    KC_MINS,    BSSFT
),
};
