#include "dz60.h"

#define _DEFAULT 0
#define _EXT 1
#define _NAV 2
#define _KBD 3

#define _____ KC_TRNS
#define XXXXX KC_NO

#define RSFT_ESC MT(MOD_RSFT, KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_DEFAULT] = KEYMAP_2_SHIFTS(
		KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   XXXXX,    KC_BSPC,
		KC_TAB,             KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
		MO(_EXT),           KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,
		KC_LSFT,  KC_GRV,   KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  XXXXX,    RSFT_ESC, KC_MEH,
		KC_LCTL,  KC_LALT,            KC_LGUI,  XXXXX,              KC_SPC,             XXXXX,              KC_RGUI,  MO(_KBD), XXXXX,    MO(_NAV), KC_HYPR
  ),

	[_EXT] = KEYMAP_2_SHIFTS(
		_____,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _____,    KC_DEL,
		_____,              _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,
    _____,              _____,    _____,    _____,    _____,    _____,    KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  _____,    _____,    _____,
    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,
    _____,    _____,              _____,    _____,              _____,              _____,              _____,    _____,    _____,    _____,    _____
  ),

	[_NAV] = KEYMAP_2_SHIFTS(
		_____,    _____,    _____,    _____,    _____,    _____,    _____,    KC_MRWD,  KC_MPLY,  KC_MFFD,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _____,    _____,
		_____,              _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,
    _____,              _____,    _____,    _____,    _____,    _____,    KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   _____,    _____,    _____,
    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,
    _____,    _____,              _____,    _____,              _____,              _____,              _____,    _____,    _____,    _____,    _____
  ),

	[_KBD] = KEYMAP_2_SHIFTS(
		RESET,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,
    _____,              RGB_TOG,  RGB_MOD,  RGB_HUI,  RGB_HUD,  RGB_SAI,  RGB_SAD,  RGB_VAI,  RGB_VAD,  _____,    _____,    _____,    _____,    _____,
    _____,              _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,
    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,
    _____,    _____,              _____,    _____,              _____,              _____,              _____,    _____,    _____,    _____,    _____
  ),
};