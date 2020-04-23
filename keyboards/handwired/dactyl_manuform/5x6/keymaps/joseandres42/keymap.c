/* Mi layout para el Dactyl Manuform Mini 5x6 */ 

#include QMK_KEYBOARD_H

#define _DFLT 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

#include "keymap_extras/keymap_spanish_dvorak.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DFLT] = LAYOUT_5x6(
    KC_ESC , DV_1  , DV_2  , DV_3  , DV_4  , DV_5  ,                        DV_6  , DV_7  , DV_8  , DV_9  , DV_0  ,KC_BSPC,
    DV_MORD,DV_DOT ,DV_COMM,DV_NTIL, DV_P  , DV_Y  ,                        DV_F  , DV_G  , DV_C  , DV_H  , DV_L  ,DV_QUOT,
    KC_LSFT, DV_A  , DV_O  , DV_E  , DV_U  , DV_I  ,                        DV_D  , DV_R  , DV_T  , DV_N  , DV_S  ,DV_ACUT,   
    DV_LABK,DV_MINS, DV_Q  , DV_J  , DV_K  , DV_X  ,                        DV_B  , DV_M  , DV_W  , DV_V  , DV_Z  ,DV_CCED,
                     DV_GRV,DV_PLUS,                                                       DV_IQUE,DV_IEXL,
                                     RAISE , KC_NO ,                        KC_NO , LOWER ,
                                            KC_SPC ,KC_BSPC,       KC_DEL ,KC_ENTER,
                                            KC_LCTL,KC_TAB ,       KC_LGUI,KC_LALT
  ),

  [_LOWER] = LAYOUT_5x6(
    DV_BSLS,DV_PIPE, DV_AT ,DV_HASH,DV_TILD,DV_EURO,                       DV_NOT ,DV_LBRC,DV_RBRC,DV_LCBR,DV_RCBR,KC_DEL,
    _______,_______,_______,_______,_______,DV_GRV ,                       DV_PLUS, KC_P7 , KC_P8 , KC_P9 ,_______,KC_PLUS,
    _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                       KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,DV_QUOT,KC_PIPE,
    _______,_______,_______,_______,_______,_______,                       _______, KC_P1 , KC_P2 , KC_P3 ,DV_IEXL,KC_UNDS,
                    _______,KC_PSCR,                                                        RESET,  KC_P0,
                                    _______,KC_NO  ,                       KC_NO  ,_______,
                                            _______,_______,       _______,_______,
                                            _______,_______,       _______,_______
  ),

  [_RAISE] = LAYOUT_5x6(
    KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                       KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
    _______,_______,_______,_______,_______,KC_LBRC,                       KC_RBRC,_______,KC_NLCK,KC_INS ,KC_SLCK,KC_MUTE,
    _______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,                       KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_VOLU,
    KC_CAPS,_______,_______,_______,_______,_______,                       _______,_______,_______,_______,_______,KC_VOLD,
                    _______, RESET ,                                                       KC_EQL ,_______,
                                    _______,KC_NO  ,                       KC_NO  ,_______,
                                            _______,_______,       _______,_______,
                                            _______,_______,       _______,_______
  ),
};
