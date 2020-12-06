#include QMK_KEYBOARD_H


// Layer Declarations
enum {
    _BASE = 0,
    _NUM = 1,
    _RU = 2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ,------------------------------------------------.               ,------------------------------------------------.
     * |  Esc |      |      |      |      |      |Ctrl+1|            |      |      |      |      |      |      | Bksp |
     * |------+------+------+------+------+------+------|               |------+------+------+------+------+------+------|
     * |      |   Q  |   W  |   E  |   R  |   T  |Ctrl+3|                  |      |   Y  |   U  |   I  |   O  |   P  |      |
     * |------+------+------+------+------+------+------|               |------+------+------+------+------+------+------|
     * | Tab  |   A  |   S  |   D  |   F  |   G  | Del  |                |      |   H  |   J  |   K  |   L  |      |      |
     * |------+------+------+------+------+------+------|               |------+------+------+------+------+------+------|
     * | Shift|   Z  |   X  |   C  |   V  |   B  |Enter |               |Enter |   N  |   M  |      |      |      |      |
     * |------+------+------+------+------+------+------|               |------+------+------+------+------+------+------|
     * | Ctrl |  Win |      |TT(_NUM)| Alt|Space | Ctrl |               | Ctrl |Space |Shift |      |      |      |      |
     * `------------------------------------------------'               `------------------------------------------------'
     */
    [_BASE] = LAYOUT_ortho_5x14(
    KC_ESC,  KC_NO ,   KC_NO ,  KC_NO ,  KC_NO ,  KC_NO ,  LCTL(KC_1) ,       KC_6 , KC_7 , KC_8 , KC_9 , KC_0 , KC_BSPC, KC_DEL ,
    KC_TAB,  KC_Q ,    KC_W ,   KC_E ,   KC_R ,   KC_T ,   LCTL(KC_3) ,               KC_Y , KC_U , KC_I , KC_O , KC_P , KC_LBRC, KC_RBRC ,
    KC_CAPS, KC_A ,    KC_S ,   KC_D ,   KC_F ,   KC_G ,   KC_DEL ,             KC_H , KC_J , KC_K , KC_L , KC_SCLN, KC_QUOT, KC_ENT ,
    KC_LSFT, KC_Z ,    KC_X ,   KC_C ,   KC_V ,   KC_B ,   KC_ENT ,             KC_N , KC_M , KC_COMM, KC_DOT , KC_SLSH, KC_HOME, KC_END ,
    KC_LCTL, KC_LGUI,  KC_NO, TT(_NUM), KC_LALT, KC_SPC ,    KC_LCTL ,            KC_LCTL , KC_LALT , KC_LEFT, KC_DOWN, KC_UP , KC_RGHT, KC_BSLS
    ),
        /*
     * ,------------------------------------------------.               ,------------------------------------------------.
     * |      |      |      |      |      |      |      |            |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------|               |------+------+------+------+------+------+------|
     * |      |   1  |  2  |   3   |  4   |   5  |      |                  |      |     |      |      |      |      |      |
     * |------+------+------+------+------+------+------|               |------+------+------+------+------+------+------|
     * |      |   6  |   7  |   8  |   9  |   0  |      |                |      |     |      |      |      |      |      |
     * |------+------+------+------+------+------+------|               |------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |               |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------|               |------+------+------+------+------+------+------|a
     * |      |      |      |      |      |      |      |               |      |      |      |      |      |      |      |
     * `------------------------------------------------'               `------------------------------------------------'
     */
    [_NUM] = LAYOUT_ortho_5x14(
    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                KC_6 , KC_7 , KC_8 , KC_9 , KC_0 , KC_BSPC, KC_DEL ,
    KC_NO,   KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_NLCK,                KC_Y , KC_U , KC_I , KC_O , KC_P , KC_LBRC, KC_RBRC ,
    KC_NO,   KC_6,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                KC_H , KC_J , KC_K , KC_L , KC_SCLN, KC_QUOT, KC_ENT ,
    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                KC_N , KC_M , KC_COMM, KC_DOT , KC_SLSH, KC_HOME, KC_END ,
    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                KC_NO , KC_LALT , KC_LEFT, KC_DOWN, KC_UP , KC_RGHT, KC_BSLS
    )
};
