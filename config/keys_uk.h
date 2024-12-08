#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │ # │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ \ │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define UK_GRAVE GRAVE // `
#define UK_N1    N1    // 1
#define UK_N2    N2    // 2
#define UK_N3    N3    // 3
#define UK_N4    N4    // 4
#define UK_N5    N5    // 5
#define UK_N6    N6    // 6
#define UK_N7    N7    // 7
#define UK_N8    N8    // 8
#define UK_N9    N9    // 9
#define UK_N0    N0    // 0
#define UK_MINUS MINUS // -
#define UK_EQUAL EQUAL // =
// Row 2
#define UK_Q    Q    // Q
#define UK_W    W    // W
#define UK_E    E    // E
#define UK_R    R    // R
#define UK_T    T    // T
#define UK_Y    Y    // Y
#define UK_U    U    // U
#define UK_I    I    // I
#define UK_O    O    // O
#define UK_P    P    // P
#define UK_LBKT LBKT // [
#define UK_RBKT RBKT // ]
// Row 3
#define UK_A    A    // A
#define UK_S    S    // S
#define UK_D    D    // D
#define UK_F    F    // F
#define UK_G    G    // G
#define UK_H    H    // H
#define UK_J    J    // J
#define UK_K    K    // K
#define UK_L    L    // L
#define UK_SEMI SEMI // ;
#define UK_SQT  SQT  // '
#define UK_HASH NUHS // #
// Row 4
#define UK_BSLH  BSLH  // (backslash)
#define UK_Z     Z     // Z
#define UK_X     X     // X
#define UK_C     C     // C
#define UK_V     V     // V
#define UK_B     B     // B
#define UK_N     N     // N
#define UK_M     M     // M
#define UK_COMMA COMMA // ,
#define UK_DOT   DOT   // .
#define UK_FSLH  FSLH  // /

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ¬ │ ! │ " │ £ │ $ │ % │ ^ │ & │ * │ ( │ ) │ _ │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ { │ } │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ : │ @ │ ~ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ | │   │   │   │   │   │   │   │ < │ > │ ? │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define UK_NOT   LS(UK_GRAVE) // ¬
#define UK_EXCL  LS(UK_N1)    // !
#define UK_DQT   LS(UK_N2)    // "
#define UK_POUND LS(UK_N3)    // £
#define UK_DLLR  LS(UK_N4)    // $
#define UK_PRCNT LS(UK_N5)    // %
#define UK_CARET LS(UK_N6)    // ^
#define UK_AMPS  LS(UK_N7)    // &
#define UK_ASTRK LS(UK_N8)    // *
#define UK_LPAR  LS(UK_N9)    // (
#define UK_RPAR  LS(UK_N0)    // )
#define UK_UNDER LS(UK_MINUS) // _
#define UK_PLUS  LS(UK_EQUAL) // +
// Row 2
#define UK_LBRC LS(UK_LBKT) // {
#define UK_RBRC LS(UK_RBKT) // }
// Row 3
#define UK_COLON LS(UK_SEMI) // :
#define UK_AT    LS(UK_SQT)  // @
#define UK_TILDE LS(UK_HASH) // ~
// Row 4
#define UK_PIPE  LS(UK_BSLH)  // |
#define UK_LT    LS(UK_COMMA) // <
#define UK_GT    LS(UK_DOT)   // >
#define UK_QMARK LS(UK_FSLH)  // ?

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ¦ │   │   │   │ € │   │   │   │   │   │   │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ É │   │   │   │ Ú │ Í │ Ó │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ Á │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define UK_BRKP RA(UK_GRAVE) // ¦
#define UK_EURO RA(UK_N4)    // €
// Row 2
#define UK_EACU RA(UK_E) // É
#define UK_UACU RA(UK_U) // Ú
#define UK_IACU RA(UK_I) // Í
#define UK_OACU RA(UK_O) // Ó
// Row 3
#define UK_AACU RA(UK_A) // Á
