/* Copyright 2021 Xeon Xai <xeokeri@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"
#include "mcuconf.h"
#include "halconf.h"

#define VIAL_KEYBOARD_UID {0x57, 0xE5, 0xC6, 0xA2, 0xD8, 0x2F, 0xC1, 0x72}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 5 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 4 }

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#ifdef RGB_MATRIX_ENABLE
#define DRIVER_LED_TOTAL 25
#define RGB_DI_PIN A7
#ifdef RGB_DI_PIN
   #define RGBLED_NUM 25
#endif
#endif
