/*
Copyright 2021 Howard Tseng

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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0x1234
#define PRODUCT_ID   0x5678
#define DEVICE_VER   0x0000
#define MANUFACTURER Howard Tseng
#define PRODUCT      keyboard0
#define DESCRIPTION  keyboard0 by ht12345

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 18

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */

#define MATRIX_ROW_PINS { B9, B8, B5, B4, B3, A15 }
#define MATRIX_COL_PINS { C14, C15, C13, A0, A1, A2, A3, A4, A5, A6, B10, B11, B12, B13, B14, B15, A8, A9 }
#define UNUSED_PINS { A13, A14 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Encoder port configurator */
#define ENCODERS_PAD_A { A7, A7 }
#define ENCODERS_PAD_B { B0, B1 }
// #define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTION 4

#define RGB_DI_PIN A10
#ifdef RGB_DI_PIN
  #define RGBLED_NUM 90
  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8
  #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
  #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
  #define RGBLIGHT_ANIMATIONS
#endif
