#include QMK_KEYBOARD_H


















/*      - дефолтный слой с обычной раскладкой
        - дефолтный слой с доп. раскладкой numpad, arrows, ins...
        - кастомный слой с универсальной раскладкой в юникоде
        - кастомный слой с универсальной цифровой раскладкой в юникоде
        - кастомный слой с расширенной пунктуацией в юникоде
*/

// Layer Declarations
enum {
    _Def_abc = 0,
    _Def_123 = 1,
    _Cust_abc = 2,
    _Cust_pnct = 3,
    _Cust_123 = 4
};

//Unicode keymaps declarations
enum unicode_names {
	U_TILD,
    U_NOMER,
    U_MINS,

};

const uint32_t PROGMEM unicode_map[] = {
	[U_TILD]        = 0x007E,
	[U_NOMER]       = 0x2116,
    [U_MINS]        =
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*----------------------------------------------------------------------------------------------------------------------------------------------
     * ,------------------------------------------------.          ,------------------------------------------------.
     * |  Esc |   1  |   2  |   3  |   4  |   5  |  6   |          | Bksp |   7  |  8   |   9  |   0  |   -  |   =  |
     * |------+------+------+------+------+------+------|          |------+------+------+------+------+------+------|
     * | Tab  |   Q  |   W  |   E  |   R  |   T  | Del  |          |  Del |   Y  |   U  |   I  |   O  |   P  |  {   |
     * |------+------+------+------+------+------+------|          |------+------+------+------+------+------+------|
     * |CapsLk|   A  |   S  |   D  |   F  |   G  | Enter|          | Enter|   H  |   J  |   K  |   L  |   :  | "    |
     * |------+------+------+------+------+------+------|          |------+------+------+------+------+------+------|
     * | Shift|   Z  |   X  |   C  |   V  |   B  |      |          |      |   N  |   M  |   ,  |   .  |  /   |  }   |
     * |------+------+------+------+------+------+------|          |------+------+------+------+------+------+------|
     * | Ctrl |  Win |      |      | Alt  |Space | Ctrl |          | Ctrl |Space | Shift|      |      |      |      |
     * `------------------------------------------------'          `------------------------------------------------'
     */
    [_Def_abc] = LAYOUT_ortho_5x14(
    KC_ESC,  KC_1,    KC_2,    KC_3,     KC_4,     KC_5,   KC_6,              KC_6 ,    KC_7 ,    KC_8 ,    KC_9 ,   KC_0 ,   KC_MINS , KC_EQL,
    KC_TAB,  KC_Q,    KC_W,    KC_E,     KC_R,     KC_T,   KC_Y,              KC_T ,    KC_Y ,    KC_U ,    KC_I ,   KC_O ,   KC_P ,    KC_SLSH,
    KC_CAPS, KC_A,    KC_S,    KC_D,     KC_F,     KC_G,   KC_H,              KC_G ,    KC_H ,    KC_J ,    KC_K ,   KC_L ,   KC_QUOT,  KC_ENT ,
    KC_LSFT, KC_Z,    KC_X,    KC_C,     KC_V,     KC_B,   KC_N,              KC_B ,    KC_N ,    KC_M ,    KC_COMM, KC_DOT , KC_SLSH,  KC_RSFT,
    KC_LCTL, KC_LGUI, KC_UP,   KC_DOWN,  KC_LALT,  KC_SPC, KC_LCTL,           KC_LCTL , KC_SPC ,  KC_LALT , KC_HOME, KC_END,  KC_BSPC,  KC_RCTL
    ),
       /*----------------------------------------------------------------------------------------------------------------------------------------------
     * ,------------------------------------------------.          ,------------------------------------------------.
     * |   ~  |   №  |   -  |   /  |   "  |   :  |  ,   |          |   .  |   _  |  ?   |   %  |   !  |   ;  | Bksp |
     * |------+------+------+------+------+------+------|          |------+------+------+------+------+------+------|
     * |  Esc | Q[Й] | W[Ц] | E[У] | R[К] | T[Е] |  @   |          |   (  | Y[Н] | U[Г] | I[Ш] | O[Щ] | P[З] | [Х]  |
     * |------+------+------+------+------+------+------|          |------+------+------+------+------+------+------|
     * | Tab  | A[Ф] | S[Ы] | D[В] | F[А] | G[П] | Del  |          |   )  | H[Р] | J[О] | K[Л] | L[Д] | [Ж]  | [Э]  |
     * |------+------+------+------+------+------+------|          |------+------+------+------+------+------+------|
     * | Shift| Z[Я] | X[Ч] | C[С] | V[М] | B[И] |Enter |          |Enter | N[Т] | M[Ь] |  [Б] |  [Ю] | [Ё]  | [Ъ]  |
     * |------+------+------+------+------+------+------|          |------+------+------+------+------+------+------|
     * |      |  Win |      |      | Alt  |Space | Ctrl |          | Ctrl |Space |Shift |      |      |      |      |
     * `------------------------------------------------'          `------------------------------------------------'
     */
    [_Cust_abc] = LAYOUT_ortho_5x14(
    X(U_TILD),  X(U_NOMER),   KC_NO,   KC_NO,    KC_NO,    KC_NO,  KC_NO,             KC_0 , KC_6 ,    KC_7 ,    KC_8 ,   KC_9 ,   KC_0 ,    KC_BSPC,
    KC_TAB,     KC_Q,         KC_W,    KC_E,     KC_R,     KC_T,   KC_NO,             KC_0 , KC_Y ,    KC_U ,    KC_I ,   KC_O ,   KC_P ,    KC_LBRC,
    KC_CAPS,    KC_A,         KC_S,    KC_D,     KC_F,     KC_G,   KC_DEL,            KC_0 , KC_H ,    KC_J ,    KC_K ,   KC_L ,   KC_SCLN,  KC_QUOT,
    KC_LSFT,    KC_Z,         KC_X,    KC_C,     KC_V,     KC_B,   KC_ENT,            KC_0 , KC_N ,    KC_M ,    KC_COMM, KC_DOT , KC_SLSH,  KC_HOME,
    KC_LCTL,    KC_LGUI,      KC_NO,   KC_NO,    KC_LALT,  KC_SPC, KC_LCTL,           KC_0 , KC_LCTL , KC_LALT , KC_LEFT, KC_DOWN, KC_UP ,   KC_RGHT
    ),
           /*----------------------------------------------------------------------------------------------------------------------------------------------
     * ,------------------------------------------------.          ,------------------------------------------------.
     * |      |   #  |  --  |   \  |   «  |   »  |      |          |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------|          |------+------+------+------+------+------+------|
     * |      |      |      |   |  |      |      |      |          |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------|          |------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |          |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------|          |------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |          |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------|          |------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |          |      |      |      |      |      |      |      |
     * `------------------------------------------------'          `------------------------------------------------'
     */
    [_Cust_abc] = LAYOUT_ortho_5x14(
    X(U_TILD),  X(U_NOMER),   KC_NO,   KC_NO,    KC_NO,    KC_NO,  KC_NO,             KC_0 , KC_6 ,    KC_7 ,    KC_8 ,   KC_9 ,   KC_0 ,    KC_BSPC,
    KC_TAB,     KC_Q,         KC_W,    KC_E,     KC_R,     KC_T,   KC_NO,             KC_0 , KC_Y ,    KC_U ,    KC_I ,   KC_O ,   KC_P ,    KC_LBRC,
    KC_CAPS,    KC_A,         KC_S,    KC_D,     KC_F,     KC_G,   KC_DEL,            KC_0 , KC_H ,    KC_J ,    KC_K ,   KC_L ,   KC_SCLN,  KC_QUOT,
    KC_LSFT,    KC_Z,         KC_X,    KC_C,     KC_V,     KC_B,   KC_ENT,            KC_0 , KC_N ,    KC_M ,    KC_COMM, KC_DOT , KC_SLSH,  KC_HOME,
    KC_LCTL,    KC_LGUI,      KC_NO,   KC_NO,    KC_LALT,  KC_SPC, KC_LCTL,           KC_0 , KC_LCTL , KC_LALT , KC_LEFT, KC_DOWN, KC_UP ,   KC_RGHT
    ),

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
