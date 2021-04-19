/*
 * MIT License
 * Copyright (c) 2021 _VIFEXTech
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the follo18wing conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#ifndef __DISPLAYPRIVATE_H
#define __DISPLAYPRIVATE_H

void Display_Init();

#ifdef ARDUINO

/*Basic*/
#include "Adafruit_ST7789/Adafruit_ST7789.h"
#include "Basic/SysConfig.h"
#include "lv_port/lv_port_indev.h"

typedef Adafruit_ST7789 SCREEN_CLASS;

void DisplayFault_Init(SCREEN_CLASS* scr);
void lv_port_disp_init(SCREEN_CLASS* scr);
void lv_fs_if_init(void);

#endif

#include "lvgl/lvgl.h"

#define ARRAY_SIZE(arr) (sizeof(arr)/sizeof(arr[0]))
#define MAP(x,in_min,in_max,out_min,out_max) \
    (((x)-(in_min))*((out_max)-(out_min))/((in_max)-(in_min))+(out_min))

#endif