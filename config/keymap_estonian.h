// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once
//#include "keymap.h"
// clang-format off

// Aliases
#define EE_CARN GRAVE  // ˇ (dead)
#define EE_1    N1    // 1
#define EE_2    N2    // 2
#define EE_3    N3    // 3
#define EE_4    N4    // 4
#define EE_5    N5    // 5
#define EE_6    N6    // 6
#define EE_7    N7    // 7
#define EE_8    N8    // 8
#define EE_9    N9    // 9
#define EE_0    N0    // 0
#define EE_PLUS KC_MINS // +
#define EE_ACUT KC_EQL  // ´ (dead)
#define EE_UDIA LEFT_BRACKET // Ü
#define EE_OTIL RBRC // Õ
#define EE_ODIA SCLN // Ö
#define EE_ADIA QUOT // Ä
#define EE_QUOT NUHS // '
#define EE_LABK NUBS // <
#define EE_COMM KC_COMM // ,
#define EE_DOT  KC_DOT  // .
#define EE_MINS SLASH // -
#define EE_TILD LS(EE_CARN) // ~ (dead)
#define EE_EXLM LS(EE_1)    // !
#define EE_DQUO LS(EE_2)    // "
#define EE_HASH LS(EE_3)    // #
#define EE_CURR LS(EE_4)    // ¤
#define EE_PERC LS(EE_5)    // %
#define EE_AMPR LS(EE_6)    // &
#define EE_SLSH LS(EE_7)    // /
#define EE_LPRN LS(EE_8)    // (
#define EE_RPRN LS(EE_9)    // )
#define EE_EQL  LS(EE_0)    // =
#define EE_QUES LS(EE_PLUS) // ?
#define EE_GRV  LS(EE_ACUT) // ` (dead)
#define EE_ASTR LS(EE_QUOT) // *
#define EE_RABK LS(EE_LABK) // >
#define EE_SCLN LS(EE_COMM) // ;
#define EE_COLN LS(EE_DOT)  // :
#define EE_UNDS LS(EE_MINS) // _
#define EE_AT   RA(EE_2)    // @
#define EE_PND  RA(EE_3)    // £
#define EE_DLR  RA(EE_4)    // $
#define EE_EURO RA(EE_5)    // €
#define EE_LCBR RA(EE_7)    // {
#define EE_LBRC RA(EE_8)    // [
#define EE_RBRC RA(EE_9)    // ]
#define EE_RCBR RA(EE_0)    // }
#define EE_BSLS RA(EE_PLUS) // (backslash)
#define EE_SECT RA(EE_OTIL) // §
#define EE_SCAR RA(EE_S)    // š
#define EE_CIRC RA(EE_ADIA) // ^ (dead)
#define EE_HALF RA(EE_QUOT) // ½
#define EE_PIPE RA(EE_LABK) // |
#define EE_ZCAR RA(EE_Z)    // ž

