// Copyright 2025 Dasky (@daskygit)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "quantum.h"

#ifdef OLED_ENABLE
void render_logo(void) {
    static const char PROGMEM pro_logo[] = {
        252, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 31,  31,  31,  31,  31,  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 254, 252, 0,   0,   0,   240, 248, 24,  24,  24,  24,  24,  24,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   240, 248, 24,  24,  24,  24,  16,  0,   0,   248, 248, 0,   0,   0,   0,   0,   0,   0,   0,   0,  0,  0,  0,  0,  0,   0,   0,   0,   0,   0,   0,   0,  0,  0,  0,  0,  0,   0,   0,   0,  0,  0,  0,  0,  0,   255, 255, 255, 255, 255, 7,   7,  7,  7,  7,  255, 7,   7,   7,   7,   7,   255, 7, 7, 7, 7, 7, 255, 7,  7,  7,  7,  7,  255, 7,  7,  7,  7,  7,  255, 255, 255, 4,  4,  4,  4, 4, 255,
        7,   7,   7,   7,   7,   255, 7,   7,   7,   7,   7,   255, 255, 255, 255, 255, 0,   0,   0,   3,   7,   6,   6,   6,   6,   254, 252, 0,   0,   254, 255, 3,   3,   3,   3,   255, 254, 0,   0,   3,   255, 255, 3,   3,   3,   0,   0,   0,   0,   255, 255, 0,   0,   0,   0,   254, 255, 51,  51,  51,  51,  63,  30,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   255, 255, 255, 255, 255, 65,  65,  65,  65,  65,  255, 255, 255, 255, 255, 255, 255, 65, 65, 65, 65, 65, 255, 255, 255, 255, 255, 255, 255, 65, 65, 65, 65, 65, 255, 255, 255, 65, 65, 65, 65, 65, 255, 127, 127, 127, 127, 127, 255, 65, 65, 65, 65, 65,  255, 255, 255, 255, 255, 0,   0, 0, 3, 3, 3, 3,   3,  3,  3,  1,  0,  0,   1,  3,  3,  3,  3,  3,   3,   1,   0,  0,  0,  3, 3, 0,
        0,   0,   0,   0,   0,   0,   1,   3,   3,   3,   0,   0,   1,   3,   3,   3,   3,   3,   3,   1,   0,   0,   224, 240, 48,  176, 176, 112, 240, 48,  176, 176, 112, 240, 112, 176, 176, 112, 240, 224, 0,   0,   63,  127, 255, 255, 255, 240, 240, 240, 240, 240, 255, 255, 255, 255, 255, 255, 255, 240, 240, 240, 240, 240, 255, 255, 255, 255, 255, 255, 255, 240, 240, 240, 240, 240, 255, 255, 255, 240, 240, 240, 240, 240, 255, 240, 240, 240, 240, 240, 255, 240, 240, 240, 240, 240, 255, 255, 255, 127, 63,  0,   0,  0,  0,  0,  0,  0,   0,   0,   0,   0,   0,   0,   0,  0,  0,  0,  0,  0,   0,   0,   0,  0,  0,  0,  0,  0,   0,   0,   0,   0,   0,   0,   0,  0,  0,  0,  0,   0,   0,   0,   0,   0,   0,   0, 0, 0, 0, 0, 31,  63, 48, 61, 61, 62, 63,  48, 61, 61, 50, 63, 56,  55,  55,  56, 63, 31, 0, 0,
    };
    oled_write_raw_P(pro_logo, sizeof(pro_logo));
}
#endif

void leader_end_user(void) {
    if (leader_sequence_one_key(KC_J)) {
        tap_code16(LSG(KC_LEFT));
    } else if (leader_sequence_one_key(KC_K)) {
        tap_code16(LGUI(KC_DOWN));
    } else if (leader_sequence_one_key(KC_I)) {
        tap_code16(LGUI(KC_UP));
    } else if (leader_sequence_one_key(KC_U)) {
        tap_code16(LGUI(KC_LEFT));
    } else if (leader_sequence_one_key(KC_O)) {
        tap_code16(LGUI(KC_RIGHT));
    } else if (leader_sequence_one_key(KC_L)) {
        tap_code16(LSG(KC_RIGHT));
    } else if(leader_sequence_one_key(KC_W)) {
        tap_code16(KC_WWW_HOME);
    } else if(leader_sequence_one_key(KC_T)) {
        tap_code16(KC_MY_COMPUTER);
    }
}
