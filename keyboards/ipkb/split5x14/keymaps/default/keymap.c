#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ,------------------------------------------------.      ,------------------------------------------------.
     * |  Esc |      |      |      |      |      |  En  |      |      |      |      |      |      |      | Bksp |
     * |------+------+------+------+------+------+------|      |------+------+------+------+------+------+------|
     * |  Tab |   Q  |   W  |   E  |   R  |   T  |  Ru  |      |      |   Y  |   U  |   I  |   O  |   P  |      |
     * |------+------+------+------+------+------+------|      |------+------+------+------+------+------+------|
     * | Caps |   A  |   S  |   D  |   F  |   G  | Del  |      |      |   H  |   J  |   K  |   L  |      |      |
     * |------+------+------+------+------+------+------|      |------+------+------+------+------+------+------|
     * | Shift|   Z  |   X  |   C  |   V  |   B  |Enter |      |Enter |   N  |   M  |      |      |      |      |
     * |------+------+------+------+------+------+------|      |------+------+------+------+------+------+------|
     * | Ctrl | Left |Right |cust_1| Alt  |Space | Ctrl |      | Ctrl |Space |Shift |      |      |      |      |
     * `------------------------------------------------'      `------------------------------------------------'
     */
    [0] = LAYOUT_ortho_5x14(
    KC_ESC,  KC_1 ,    KC_2 ,   KC_3 ,   KC_4 ,   KC_5 ,   KC_6 ,                KC_6 , KC_7 , KC_8 , KC_9 , KC_0 , KC_BSPC, KC_DEL ,
    KC_TAB,  KC_Q ,    KC_W ,   KC_E ,   KC_R ,   KC_T ,   KC_Y ,                KC_Y , KC_U , KC_I , KC_O , KC_P , KC_LBRC, KC_RBRC ,
    KC_CAPS, KC_A ,    KC_S ,   KC_D ,   KC_F ,   KC_G ,   KC_H ,                KC_H , KC_J , KC_K , KC_L , KC_SCLN, KC_QUOT, KC_ENT ,
    KC_LSFT, KC_Z ,    KC_X ,   KC_C ,   KC_V ,   KC_B ,   KC_N ,                KC_N , KC_M , KC_COMM, KC_DOT , KC_SLSH, KC_HOME, KC_END ,
    KC_LCTL, KC_LEFT , KC_RGHT, KC_LGUI, KC_LALT, KC_SPC , KC_ENT ,              KC_SPC , KC_LALT , KC_LEFT, KC_DOWN, KC_UP , KC_RGHT, KC_BSLS
    )
};
