/*
     [n] = LAYOUT(
               _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______8
               _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
               _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
               _______,   _______,   _______,              _______,   _______,              _______,   _______,   _______
             ),
*/

#include QMK_KEYBOARD_H

#define LTL4 LT(3, KC_Z)
#define LTL3 MT(MOD_LSFT, KC_ESC)
#define LTL2 LT(2, KC_SPC)
#define LTL1 LT(1, KC_X)

#define LTR1 LT(4, KC_ENT)
#define LTR2 LT(5, KC_BSPC)
#define LTR3 LT(6, KC_DOT)
#define LTR4 LT(7, KC_SLSH)

#define A_MT MT(MOD_LCTL, KC_A)
#define S_MT MT(MOD_LALT, KC_S)
#define D_MT MT(MOD_LGUI, KC_D)
#define F_MT MT(MOD_LSFT, KC_F)
#define J_MT MT(MOD_RSFT, KC_J)
#define K_MT MT(MOD_RGUI, KC_K)
#define L_MT MT(MOD_RALT, KC_L)
#define C5_MT MT(MOD_RCTL, KC_QUOT)

#define KC_CTLLFT LCTL(KC_LEFT)
#define KC_CTLRT LCTL(KC_RIGHT)

enum userspace_keycodes {
    TMUXPN = SAFE_RANGE,
    TMUXPP,
    VIM_VP,
    VIM_VR,
    VIM_QN,
    VIM_QP,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
               KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
               A_MT,    S_MT,    D_MT,    F_MT,    KC_G,    KC_H,    J_MT,    K_MT,    L_MT,    C5_MT,
               LTL4,    LTL1,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, _______, LTR3,
               _______, KC_GRV  , LTL3,             LTL2,    LTR1,             LTR2, LTR4, _______
             ),
    [1] = LAYOUT( // media
               _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
               KC_LCTL,   KC_LALT,   KC_LGUI,   KC_LSFT,   _______,   KC_MPRV,   KC_VOLD,   KC_VOLU,   KC_MNXT,   _______,
               _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
               _______,   _______,   _______,              _______,   KC_MPLY,              KC_MUTE,   _______,   _______
             ),
    [2] = LAYOUT( // nav
               _______,   _______,   _______,   _______,   _______,   CW_TOGG,   KC_CAPS,   _______,   _______,   _______,
               KC_LCTL,   KC_LALT,   KC_LGUI,   KC_LSFT,   _______,   KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT,   KC_COLON,
               _______,   _______,   _______,   _______,   _______,   KC_HOME,   KC_PGDN,   KC_PGUP,   _______,    KC_SCLN,
               _______,   _______,   _______,              _______,   KC_TAB,               _______,   _______,   _______
             ),
    [3] = LAYOUT( // mouse
               _______,   _______,   _______,   _______,   _______,   RGB_HUI,   RGB_SAI,   RGB_VAI,   RGB_TOG,   RGB_MOD,
               _______,   _______,   _______,   _______,   _______,   KC_CTLLFT, _______,   _______,   KC_CTLRT,  _______,
               _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
               _______,   _______,   KC_BTN2,              KC_BTN1,   _______,   _______,   _______,   _______
             ),
    [4] = LAYOUT( // sym
               KC_LPRN,   KC_RPRN,   KC_LCBR,   KC_RCBR,   KC_EXLM,   _______,   _______,   _______,   _______,   _______,
               KC_LBRC,   KC_RBRC,   KC_DLR,    KC_BSLS,   KC_PIPE,   _______,   KC_RSFT,   KC_RGUI,   KC_RALT,   KC_RCTL,
               KC_LT,     KC_PERC,   KC_EQL,    KC_GT,     LALT(KC_3),_______,   _______,   _______,   _______,   _______,
               _______,   _______,   KC_MINS,              KC_SPC ,   _______,              _______,   _______,   _______
             ),
    [5] = LAYOUT( // num
               KC_ASTR,   KC_7,      KC_8,      KC_9,      KC_PLUS,   _______,   _______,   _______,   _______,   _______,
               KC_SLSH,   KC_4,      KC_5,      KC_6,      KC_MINS,   _______,   KC_RSFT,   KC_RGUI,   KC_RALT,   KC_RCTL,
               KC_GRV,    KC_1,      KC_2,      KC_3,      KC_UNDS,   _______,   _______,   _______,   _______,   _______,
               _______,   _______,   KC_0,                 KC_SPC,    _______,              _______,   _______,   _______
             ),
    [6] = LAYOUT( // fun
               KC_F12,    KC_F7,     KC_F8,     KC_F9,     _______,   QK_BOOT,   _______,   _______,   _______,   _______,
               KC_F11,    KC_F4,     KC_F5,     KC_F6,     _______,   _______,   KC_RSFT,   KC_RGUI,   KC_RALT,   KC_RCTL,
               KC_F10,    KC_F1,     KC_F2,     KC_F3,     _______,   _______,   _______,   _______,   _______,   _______,
               _______,   _______,   _______,              _______,   _______,              _______,   _______,   _______
             ),
    [7] = LAYOUT( // button
               LAG(KC_BSLS),LCTL(KC_SPC),LCA(KC_SPC),_______,   _______,   _______,   _______,   _______,   _______,   _______,
               VIM_QP,    VIM_QN,    _______,   VIM_VP,    TMUXPP,   LSG(KC_1), LSG(KC_2), LSG(KC_3), LSG(KC_4), _______,
               _______,   _______,   _______,   VIM_VR,    TMUXPN,   LSG(KC_5), _______,   _______,   _______,   _______,
               _______,   _______,   _______,              _______,   _______,             _______,   _______,   _______
             ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case TMUXPN:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL("b")"o");
      }
      return false;
      break;
    case TMUXPP:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL("b")"p");
      }
      return false;
      break;
    case VIM_VP:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_ESCAPE)"\\vp");
      }
      return false;
      break;
    case VIM_VR:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_ESCAPE)"\\r");
      }
      return false;
      break;
    case VIM_QN:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_ESCAPE)")"SS_DELAY(50)"q"SS_TAP(X_ESCAPE));
      }
      return false;
      break;
    case VIM_QP:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_ESCAPE)"("SS_DELAY(50)"q"SS_TAP(X_ESCAPE));
      }
      return false;
      break;
  }
  return true;
}
