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
#define UK_NOT   S(UK_GRAVE) // ¬
#define UK_EXCL  S(UK_N1)    // !
#define UK_DQT   S(UK_N2)    // "
#define UK_POUND S(UK_N3)    // £
#define UK_DLLR  S(UK_N4)    // $
#define UK_PRCNT S(UK_N5)    // %
#define UK_CARET S(UK_N6)    // ^
#define UK_AMPS  S(UK_N7)    // &
#define UK_ASTRK S(UK_N8)    // *
#define UK_LPAR  S(UK_N9)    // (
#define UK_RPAR  S(UK_N0)    // )
#define UK_UNDER S(UK_MINUS) // _
#define UK_PLUS  S(UK_EQUAL) // +
// Row 2
#define UK_LBRC S(UK_LBKT) // {
#define UK_RBRC S(UK_RBKT) // }
// Row 3
#define UK_COLON S(UK_SEMI) // :
#define UK_AT    S(UK_SQT)  // @
#define UK_TILDE S(UK_HASH) // ~
// Row 4
#define UK_PIPE  S(UK_BSLH)  // |
#define UK_LT    S(UK_COMMA) // <
#define UK_GT    S(UK_DOT)   // >
#define UK_QMARK S(UK_FSLH)  // ?

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
#define UK_BRKP ALGR(UK_GRAVE) // ¦
#define UK_EURO ALGR(UK_N4)    // €
// Row 2
#define UK_EACU ALGR(UK_E) // É
#define UK_UACU ALGR(UK_U) // Ú
#define UK_IACU ALGR(UK_I) // Í
#define UK_OACU ALGR(UK_O) // Ó
// Row 3
#define UK_AACU ALGR(UK_A) // Á
