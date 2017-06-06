#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP_ANSI(
        MPRV , MPLY , MNXT , TRNS , TRNS , TRNS , TRNS , TRNS  , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , \
        TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS  , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , \
        TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS  , TRNS , TRNS , TRNS , TRNS , TRNS , \
        TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS  , TRNS , TRNS , TRNS , TRNS , \
        TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS) ,
};
const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TOGGLE(0)
};
