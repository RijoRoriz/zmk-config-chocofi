#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

#define PT_BSLS GRV  // (backslash)
#define PT_1    N1    // 1
#define PT_2    N2    // 2
#define PT_3    N3    // 3
#define PT_4    N4    // 4
#define PT_5    N5    // 5
#define PT_6    N6    // 6
#define PT_7    N7    // 7
#define PT_8    N8    // 8
#define PT_9    N9    // 9
#define PT_0    N0    // 0
#define PT_QUOT MINUS // '
#define PT_LDAQ EQUAL  // «
#define PT_Q    Q    // Q
#define PT_W    W    // W
#define PT_E    E    // E
#define PT_R    R    // R
#define PT_T    T    // T
#define PT_Y    Y    // Y
#define PT_U    U    // U
#define PT_I    I    // I
#define PT_O    O    // O
#define PT_P    P    // P
#define PT_PLUS LBRC // +
#define PT_ACUT RBRC // ´ (dead)
#define PT_A    A    // A
#define PT_S    S    // S
#define PT_D    D    // D
#define PT_F    F    // F
#define PT_G    G    // G
#define PT_H    H    // H
#define PT_J    J    // J
#define PT_K    K    // K
#define PT_L    L    // L
#define PT_CCED SEMI // Ç
#define PT_MORD SQT // º
#define PT_TILD NUHS // ~ (dead)
#define PT_LABK NUBS // <
#define PT_Z    Z    // Z
#define PT_X    X    // X
#define PT_C    C    // C
#define PT_V    V    // V
#define PT_B    B    // B
#define PT_N    N    // N
#define PT_M    M    // M
#define PT_COMM COMMA // ,
#define PT_DOT  DOT  // .
#define PT_MINS SLASH // -
#define PT_PIPE S(PT_BSLS) // |
#define PT_EXLM S(PT_1)    // !
#define PT_DQUO S(PT_2)    // "
#define PT_HASH S(PT_3)    // #
#define PT_DLR  S(PT_4)    // $
#define PT_PERC S(PT_5)    // %
#define PT_AMPR S(PT_6)    // &
#define PT_SLSH S(PT_7)    // /
#define PT_LPRN S(PT_8)    // (
#define PT_RPRN S(PT_9)    // )
#define PT_EQL  S(PT_0)    // =
#define PT_QUES S(PT_QUOT) // ?
#define PT_RDAQ S(PT_LDAQ) // »
#define PT_ASTR S(PT_PLUS) // *
#define PT_GRV  S(PT_ACUT) // ` (dead)
#define PT_FORD S(PT_MORD) // ª
#define PT_CIRC S(PT_TILD) // ^ (dead)
#define PT_RABK S(PT_LABK) // >
#define PT_SCLN S(PT_COMM) // ;
#define PT_COLN S(PT_DOT)  // :
#define PT_UNDS S(PT_MINS) // _
#define PT_AT   ALGR(PT_2)    // @
#define PT_PND  ALGR(PT_3)    // £
#define PT_SECT ALGR(PT_4)    // §
#define PT_LCBR ALGR(PT_7)    // {
#define PT_LBRC ALGR(PT_8)    // [
#define PT_RBRC ALGR(PT_9)    // ]
#define PT_RCBR ALGR(PT_0)    // }
#define PT_DIAE ALGR(PT_PLUS) // ¨ (dead)
#define PT_EURO ALGR(PT_E)    // €
