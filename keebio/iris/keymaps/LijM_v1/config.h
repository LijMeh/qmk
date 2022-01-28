/*
Copyright 2017 Danny Nguyen <danny@keeb.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// #define USE_I2C
#define EE_HANDS

#define MK_3_SPEED

/*  These are for tap to select mouse movements
#define MK_C_OFFSET_1 8

#define MK_C_OFFSET_2 24
*/

#define MK_MOMENTARY_ACCEL

#define MK_C_OFFSET_UNMOD 32 /* was 24*/

#define MK_C_OFFSET_1 8

#define TAPPING_TERM 200

// Add support for rotary encoder
#define ENCODERS_PAD_A { B2 }
#define ENCODERS_PAD_B { B3 }

#define COMBO_COUNT 1

