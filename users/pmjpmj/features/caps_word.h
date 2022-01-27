// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//
// Caps Word, activated by pressing both shift keys at the same time.
//
// This library implements "Caps Word", which is like conventional Caps Lock,
// but automatically disables itself at the end of the word. This is useful for
// typing all-caps identifiers like `MOD_MASK_ALT`.
//
// Caps Word is activated by pressing the left and right shift keys at the same
// time. This way you don't need a dedicated key for using Caps Word. I've
// tested that this works as expected with one-shot mods and Space Cadet Shift.
// If your shift keys are mod-taps, activate Caps Word by holding both shift
// mod-tap keys until the tapping term, release them, then begin typing.
//
// For full documentation, see
// https://getreuer.info/posts/keyboards/caps-word

#pragma once

#include QMK_KEYBOARD_H
#include "pmjpmj.h"

bool is_caps_word_enabled(void);
void enable_caps_word(void);
void disable_caps_word(void);
void toggle_caps_word(void);

bool process_record_caps_word(uint16_t keycode, const keyrecord_t *record);

void caps_word_set(bool active);

// An optional callback that gets called when Caps Word turns on or off. This is
// useful to represent the current Caps Word state, e.g. by setting an LED or
// playing a sound. In your keymap, define
//
//   void caps_word_set_user(bool active) {
//     if (active) {
//       // Do something when Caps Word activates.
//     } else {
//       // Do something when Caps Word deactivates.
//     }
//   }
void caps_word_set_user(bool active);