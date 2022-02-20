/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//
#define STATUS_LOGO_Y            8
#define STATUS_LOGO_WIDTH 32

const unsigned char status_logo_bmp[] PROGMEM = {
  0x00,0x00,0x00,0x00, // ················
  0x00,0x03,0x00,0x00, // ·······█········
  0x00,0x03,0x00,0x00, // ·······█········
  0x00,0x73,0x00,0x00, // ····▐█·█········
  0x03,0xFF,0x00,0x00, // ···█████········
  0x1F,0xDF,0xC0,0x00, // ·▐███▐███·······
  0x7E,0x03,0xF0,0x00, // ▐██▌···███······
  0x70,0x00,0x70,0x00, // ▐█······▐█······
  0x07,0x03,0x00,0x00, // ··▐█···█········
  0x07,0x83,0x00,0x00, // ··▐█▌··█········
  0x07,0xC3,0x00,0x00, // ··▐██··█········
  0x06,0xE3,0x1E,0x78, // ··▐▌█▌·█·▐█▌▐█▌·
  0x06,0x73,0x1E,0x78, // ··▐▌▐█·█·▐█▌▐█▌·
  0x06,0x3B,0x18,0x18, // ··▐▌·█▌█·▐▌··▐▌·
  0x06,0x1F,0x1C,0x30, // ··▐▌·▐██·▐█··█··
  0x06,0x0F,0x18,0x18, // ··▐▌··██·▐▌··▐▌·
  0x06,0x07,0x1E,0x78, // ··▐▌··▐█·▐█▌▐█▌·
  0x06,0x03,0x1E,0x70, // ··▐▌···█·▐█▌▐█··
  0x00,0x00,0x00,0x00  // ················
};

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          80
#endif
