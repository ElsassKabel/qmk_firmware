// Copyright 2022 ElsassKabel (@LucasCtrl)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    L00, L01, L02, L03, L04,      R00, R01, R02, R03, R04, \
    L10, L11, L12, L13, L14,      R10, R11, R12, R13, R14, \
    L20, L21, L22, L23, L24,      R20, R21, R22, R23, R24, \
              L30, L31, L32,      R30, R31, R32 \
) \
{ \
    { L00, L01, L02, L03, L04 }, \
    { L10, L11, L12, L13, L14 }, \
    { L20, L21, L22, L23, L24 }, \
    { KC_NO, KC_NO, L30, L31, L32 }, \
    { R04, R03, R02, R01, R00 }, \
    { R14, R13, R12, R11, R10 }, \
    { R24, R23, R22, R21, R20 }, \
    { KC_NO, KC_NO, R32, R31, R30 } \
}
