#include QMK_KEYBOARD_H

#define _DEFAULT 0
#define _EXT 1
#define _NAV 2
#define _KBD 3

#define _____ KC_TRNS
#define XXXXX KC_NO

#define LCTL_ESC MT(MOD_LCTL, KC_ESC)

#define KVM_KEYDELAY 250

enum custom_keycodes {
  KVM_RSTW0 = SAFE_RANGE,
  KVM_RSTW1,
  KVM_RSTW2,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KVM_RSTW0:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING(SS_TAP(X_LCTL) SS_DELAY(KVM_KEYDELAY) SS_TAP(X_LCTL) SS_DELAY(KVM_KEYDELAY) "w" SS_DELAY(KVM_KEYDELAY) "0");
      }
      break;
    case KVM_RSTW1:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING(SS_TAP(X_LCTL) SS_DELAY(KVM_KEYDELAY) SS_TAP(X_LCTL) SS_DELAY(KVM_KEYDELAY) "w" SS_DELAY(KVM_KEYDELAY) "1");
      }
      break;
    case KVM_RSTW2:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING(SS_TAP(X_LCTL) SS_DELAY(KVM_KEYDELAY) SS_TAP(X_LCTL) SS_DELAY(KVM_KEYDELAY) "w" SS_DELAY(KVM_KEYDELAY) "2");
      }
      break;
  }
  return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_DEFAULT] = LAYOUT_all(
		KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   XXXXX,    KC_BSPC,
		KC_TAB,             KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
		MO(_EXT),           KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,
		KC_LSFT,  KC_GRV,   KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  XXXXX,    KC_RSFT,  KC_MEH,
		LCTL_ESC, KC_LALT,            KC_LGUI,  XXXXX,              KC_SPC,             XXXXX,              KC_RGUI,  MO(_KBD), XXXXX,    MO(_NAV), KC_HYPR
  ),

	[_EXT] = LAYOUT_all(
		_____,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _____,    KC_DEL,
		_____,              _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,
    _____,              _____,    _____,    _____,    _____,    _____,    KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  _____,    _____,    _____,
    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,
    _____,    _____,              _____,    _____,              _____,              _____,              _____,    _____,    _____,    _____,    _____
  ),

	[_NAV] = LAYOUT_all(
		_____,    _____,    _____,    _____,    _____,    _____,    _____,    KC_MRWD,  KC_MPLY,  KC_MFFD,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _____,    _____,
		_____,              _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,
    _____,              _____,    _____,    _____,    _____,    _____,    KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   _____,    _____,    _____,
    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,
    _____,    _____,              _____,    _____,              _____,              _____,              _____,    _____,    _____,    _____,    _____
  ),

	[_KBD] = LAYOUT_all(
		RESET,    KVM_RSTW1,KVM_RSTW2,KVM_RSTW0,_____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,
    _____,              RGB_TOG,  RGB_MOD,  RGB_HUI,  RGB_HUD,  RGB_SAI,  RGB_SAD,  RGB_VAI,  RGB_VAD,  _____,    _____,    _____,    _____,    _____,
    _____,              _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,
    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,
    _____,    _____,              _____,    _____,              _____,              _____,              _____,    _____,    _____,    _____,    _____
  ),
};