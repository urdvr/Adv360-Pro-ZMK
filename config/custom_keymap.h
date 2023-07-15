// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

//#include "keymap.h"
// clang-format off

// #define LC(keycode) APPLY_MODS(MOD_LCTL, keycode)
// #define LS(keycode) APPLY_MODS(MOD_LSFT, keycode)
// #define LA(keycode) APPLY_MODS(MOD_LALT, keycode)
// #define LG(keycode) APPLY_MODS(MOD_LGUI, keycode)
// #define RC(keycode) APPLY_MODS(MOD_RCTL, keycode)
// #define RS(keycode) APPLY_MODS(MOD_RSFT, keycode)
// #define RA(keycode) APPLY_MODS(MOD_RALT, keycode)
// #define RG(keycode) APPLY_MODS(MOD_RGUI, keycode)

//defined keys at https://github.com/zmkfirmware/zmk/blob/main/app/include/dt-bindings/zmk/keys.h


// Aliases mapped to my custom xkb layout
#define UDIA RA(U)
#define ADIA RA(A)
#define OTIL RA(Q)
#define ODIA RA(W)

#define LESS RA(COMMA)
#define GREATER RA(DOT)
#define COLON LS(DOT)
#define SEMI  LS(COMMA)
#define DOUBLEQUOTE LS(APOSTORPHE)


#define SLSH_QUEST (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK))
#define SLASH RA(N1)

#define HYPER LS(LC(LA(LEFT_GUI)))
#define COMMANDBAR LC(LS(A)) //command sft a 

//copy paste cut undo
#define COPY LC(C)
#define PASTE LC(V)
#define CUT LC(X)
#define UNDO LC(Z)


//pycharm
#define RUN_CURRENT_FILE LC(LS(F10))
#define RUN_PREV LS(F10)
#define DEBUG LS(F9)
#define MOVE_CARET_TO_MATCHING_BRACE LC(LS(M))




#define PASTE_CLIPBOARD LS(INSERT)
#define CLOSE_TAB LC(W)
#define OPEN_TERMINAL F12

// #define LC(keycode) APPLY_MODS(MOD_LCTL, keycode)
// #define LS(keycode) APPLY_MODS(MOD_LSFT, keycode)
// #define LA(keycode) APPLY_MODS(MOD_LALT, keycode)
// #define LG(keycode) APPLY_MODS(MOD_LGUI, keycode)
// #define RC(keycode) APPLY_MODS(MOD_RCTL, keycode)
// #define RS(keycode) APPLY_MODS(MOD_RSFT, keycode)
// #define RA(keycode) APPLY_MODS(MOD_RALT, keycode)
// #define RG(keycode) APPLY_MODS(MOD_RGUI, keycode)

//workspace
#define WS_1 LG(N1)
#define WS_2 LG(N2)
#define WS_3 LG(N3)
#define WS_4 LG(N4)
#define WS_5 LG(N5)
#define WS_6 LG(N6)
#define WS_7 LG(N7)
#define WS_8 LG(N8)
#define WS_9 LG(N9)
#define WS_10 LG(N0)

//i3
// Move window to workspace 1 - 10
#define MOVE_WS1 LG(LS(N1))
#define MOVE_WS2 LG(LS(N2))
#define MOVE_WS3 LG(LS(N3))
#define MOVE_WS4 LG(LS(N4))
#define MOVE_WS5 LG(LS(N5))
#define MOVE_WS6 LG(LS(N6))
#define MOVE_WS7 LG(LS(N7))
#define MOVE_WS8 LG(LS(N8))
#define MOVE_WS9 LG(LS(N9))
#define MOVE_WS10 LG(LS(N0))


#define FOCUS_LEFT  LG(LEFT)
#define FOCUS_RIGHT LG(RIGHT)
#define FOCUS_UP    LG(UP)
#define FOCUS_DOWN  LG(DOWN)

#define MOVE_TO_NEXT_MONITOR LG(LS(E))