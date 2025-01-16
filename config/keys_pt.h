#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/modifiers.h>

#define PT_BSLS GRAVE          // (backslash)
#define PT_1 N1              // 1
#define PT_2 N2              // 2
#define PT_3 N3              // 3
#define PT_4 N4              // 4
#define PT_5 N5              // 5
#define PT_6 N6              // 6
#define PT_7 N7              // 7
#define PT_8 N8              // 8
#define PT_9 N9              // 9
#define PT_0 N0              // 0
#define PT_QUOT MINUS        // '
#define PT_LDAQ EQUAL        // «
#define PT_Q Q               // Q
#define PT_W W               // W
#define PT_E E               // E
#define PT_R R               // R
#define PT_T T               // T
#define PT_Y Y               // Y
#define PT_U U               // U
#define PT_I I               // I
#define PT_O O               // O
#define PT_P P               // P
#define PT_PLUS LBRC         // +
#define PT_ACUT RBRC         // ´ (dead)
#define PT_A A               // A
#define PT_S S               // S
#define PT_D D               // D
#define PT_F F               // F
#define PT_G G               // G
#define PT_H H               // H
#define PT_J J               // J
#define PT_K K               // K
#define PT_L L               // L
#define PT_CCED SEMI         // Ç
#define PT_MORD SQT          // º
#define PT_TILD NUHS         // ~ (dead)
#define PT_LABK NUBS         // <
#define PT_Z Z               // Z
#define PT_X X               // X
#define PT_C C               // C
#define PT_V V               // V
#define PT_B B               // B
#define PT_N N               // N
#define PT_M M               // M
#define PT_COMM COMMA        // ,
#define PT_DOT DOT           // .
#define PT_MINS SLASH        // -

/*
#define PT_PIPE RS(GRV)      // |
#define PT_EXLM RS(N1)     // !
#define PT_DQUO RS(N2)     // "
#define PT_HASH RS(N3)     // #
#define PT_DLR RS(N4)      // $
#define PT_PERC RS(N5)     // %
#define PT_AMPR RS(N6)     // &
#define PT_SLSH RS(N7)     // /
#define PT_LPRN RS(N8)     // (
#define PT_RPRN RS(N9)     // )
#define PT_EQL RS(PT_0)      // =:
#define PT_QUES RS(PT_QUOT)  // ?
#define PT_RDAQ RS(PT_LDAQ)  // »
#define PT_ASTR RS(PT_PLUS)  // *
#define PT_GRV RS(PT_ACUT)   // ` (dead)
#define PT_FORD RS(PT_MORD)  // ª
#define PT_CIRC RS(PT_TILD)  // ^ (dead)
#define PT_RABK RS(PT_LABK)  // >
#define PT_SCLN RS(PT_COMM)  // ;
#define PT_COLN RS(PT_DOT)   // :
#define PT_UNDS RS(PT_MINS)  // _
#define PT_AT RA(PT_2)       // @
#define PT_PND RA(PT_3)      // £
#define PT_SECT RA(PT_4)     // §
#define PT_LCBR RA(PT_7)     // {
#define PT_LBRC RA(PT_8)     // [
#define PT_RBRC RA(PT_9)     // ]
#define PT_RCBR RA(PT_0)     // }
#define PT_DIAE RA(PT_PLUS)  // ¨ (dead)
#define PT_EURO RA(PT_E)     // €
*/

#define PT_PIPE (ZMK_MOD_RS | GRV)      // |
#define PT_EXLM (ZMK_MOD_RS | N1)      // !
#define PT_DQUO (ZMK_MOD_LS | N2)      // "
#define PT_HASH (ZMK_MOD_LS | N3)      // #
#define PT_DLR (ZMK_MOD_RS | N4)       // $
#define PT_PERC (ZMK_MOD_RS | N5)      // %
#define PT_AMPR (ZMK_MOD_RS | N6)      // &
#define PT_SLSH (ZMK_MOD_RS | N7)      // /
#define PT_LPRN (ZMK_MOD_RS | N8)      // (
#define PT_RPRN (ZMK_MOD_RS | N9)      // )
#define PT_EQL (ZMK_MOD_RS | N0)       // =
#define PT_QUES (ZMK_MOD_RS | MINUS)   // ?
#define PT_RDAQ (ZMK_MOD_RS | EQUAL)   // »
#define PT_ASTR (ZMK_MOD_RS | LBRC)    // *
#define PT_GRV (ZMK_MOD_RS | RBRC)     // ` (dead)
#define PT_FORD (ZMK_MOD_RS | SQT)     // ª
#define PT_CIRC (ZMK_MOD_RS | NUHS)    // ^ (dead)
#define PT_RABK (ZMK_MOD_RS | NUBS)    // >
#define PT_SCLN (ZMK_MOD_RS | COMMA)   // ;
#define PT_COLN (ZMK_MOD_RS | DOT)     // :
#define PT_UNDS (ZMK_MOD_RS | SLASH)   // _
#define PT_AT (ZMK_MOD_RALT | N2)      // @
#define PT_PND (ZMK_MOD_RALT | N3)     // £
#define PT_SECT (ZMK_MOD_RALT | N4)    // §
#define PT_LCBR (ZMK_MOD_RALT | N7)    // {
#define PT_LBRC (ZMK_MOD_RALT | N8)    // [
#define PT_RBRC (ZMK_MOD_RALT | N9)    // ]
#define PT_RCBR (ZMK_MOD_RALT | N0)    // }
#define PT_DIAE (ZMK_MOD_RALT | LBRC)  // ¨ (dead)
#define PT_EURO (ZMK_MOD_RALT | E)     // €