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
#define OTIL RA(I)
#define ODIA RA(O)

#define LESS RA(COMMA)
#define GREATER RA(DOT)
#define COLON LS(DOT)
#define SEMI  LS(COMMA)