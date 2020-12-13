#include QMK_KEYBOARD_H

/*
void matrix_init_user() {
	set_unicode_input_mode(UC_WINC);
};
*/


// Layer Declarations
enum {
    _En = 0,
    _ru = 1,
    _RU = 2
};

enum unicode_names {
	RU_a,
    RU_A
};

const uint32_t PROGMEM unicode_map[] = {
	[RU_a]        = 0x0430,
	[RU_A]          = 0x0410
};




/*
#define RU_YO   KC_GRV  // Ё
#define RU_1    KC_1    // 1
#define RU_2    KC_2    // 2
#define RU_3    KC_3    // 3
#define RU_4    KC_4    // 4
#define RU_5    KC_5    // 5
#define RU_6    KC_6    // 6
#define RU_7    KC_7    // 7
#define RU_8    KC_8    // 8
#define RU_9    KC_9    // 9
#define RU_0    KC_0    // 0
#define RU_MINS KC_MINS // -
#define RU_EQL  KC_EQL  // =
// Row 2
#define RU_SHTI KC_Q    // Й
#define RU_TSE  KC_W    // Ц
#define RU_U    KC_E    // У
#define RU_KA   KC_R    // К
#define RU_IE   KC_T    // Е
#define RU_EN   KC_Y    // Н
#define RU_GHE  KC_U    // Г
#define RU_SHA  KC_I    // Ш
#define RU_SHCH KC_O    // Щ
#define RU_ZE   KC_P    // З
#define RU_HA   KC_LBRC // Х
#define RU_HARD KC_RBRC // Ъ
#define RU_BSLS KC_BSLS // (backslash)
// Row 3
#define RU_EF   KC_A    // Ф
#define RU_YERU KC_S    // Ы
#define RU_VE   KC_D    // В
#define RU_A    KC_F    // А
#define RU_PE   KC_G    // П
#define RU_ER   KC_H    // Р
#define RU_O    KC_J    // О
#define RU_EL   KC_K    // Л
#define RU_DE   KC_L    // Д
#define RU_ZHE  KC_SCLN // Ж
#define RU_E    KC_QUOT // Э
// Row 4
#define RU_YA   KC_Z    // Я
#define RU_CHE  KC_X    // Ч
#define RU_ES   KC_C    // С
#define RU_EM   KC_V    // М
#define RU_I    KC_B    // И
#define RU_TE   KC_N    // Т
#define RU_SOFT KC_M    // Ь
#define RU_BE   KC_COMM // Б
#define RU_YU   KC_DOT  // Ю
#define RU_DOT  KC_SLSH // .
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
     * ┌───┬───┬───┐
     * │   │   │ 0 │
     * ├───┼───┼───┤
     * │ a │ b │ c │
     * ├───┼───┼───┤
     * │ d │ e │ f │
     * ├───┼───┼───┤
     * │ g │ h │ i │
     * └───┴───┴───┘
     */
    [_En] = LAYOUT(
        KC_NO,  KC_NO, TO(_ru),
        KC_Q,   KC_W,   KC_E,
        KC_A,   KC_S,   KC_D,
        KC_Z,   KC_X,   KC_C
    ),
    [_ru] = LAYOUT(
        KC_NO , KC_NO , TO(_En) ,
        KC_NO , XP(RU_a, RU_A) , KC_NO ,
        KC_NO , KC_NO ,  KC_NO ,
        KC_NO , KC_NO , TT(_RU)
    ),
    [_RU] = LAYOUT(
        KC_NO , KC_NO , KC_NO ,
        KC_NO , X(RU_A) , KC_NO ,
        KC_NO , KC_NO ,  KC_NO ,
        KC_NO , KC_NO , KC_NO
    ),

};
