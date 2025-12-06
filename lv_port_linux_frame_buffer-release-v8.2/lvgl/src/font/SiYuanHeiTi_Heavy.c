/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --no-compress --stride 1 --align 1 --font SourceHanSansCN-Heavy.otf --range 32-127 --format lvgl -o SiYuanHeiTi_Heavy.c
 ******************************************************************************/

#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif



#ifndef SIYUANHEITI_HEAVY
#define SIYUANHEITI_HEAVY 1
#endif

#if SIYUANHEITI_HEAVY

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+0022 "\"" */
    0xef, 0xdf, 0xbf, 0x74, 0x40,

    /* U+0023 "#" */
    0x24, 0x4b, 0xff, 0xf6, 0xdf, 0xff, 0xa4, 0x48,
    0x90,

    /* U+0024 "$" */
    0x10, 0x31, 0xff, 0xf, 0x1f, 0x1f, 0xf, 0xf,
    0x9f, 0xf1, 0xc1, 0x0,

    /* U+0025 "%" */
    0x70, 0x47, 0xc4, 0x36, 0x61, 0xb2, 0xef, 0xaf,
    0xb9, 0x6c, 0x13, 0x61, 0x9b, 0x8, 0xf8, 0x83,
    0x80,

    /* U+0026 "&" */
    0x3c, 0x1f, 0x86, 0x61, 0xb8, 0x3c, 0xde, 0x3e,
    0xfb, 0x9e, 0xff, 0xdf, 0x30,

    /* U+0027 "'" */
    0xff, 0xf4,

    /* U+0028 "(" */
    0x6, 0x66, 0xcc, 0xcc, 0xcc, 0xc6, 0x66, 0x20,

    /* U+0029 ")" */
    0x4, 0x66, 0x33, 0x33, 0x33, 0x36, 0x66, 0x40,

    /* U+002A "*" */
    0x20, 0xcf, 0xdc, 0x79, 0x20,

    /* U+002B "+" */
    0x18, 0x33, 0xff, 0xf1, 0x83, 0x6, 0x0,

    /* U+002C "," */
    0x6f, 0x73, 0x6c,

    /* U+002D "-" */
    0xff,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0x18, 0xc4, 0x23, 0x18, 0x84, 0x63, 0x18, 0x84,
    0x60,

    /* U+0030 "0" */
    0x3c, 0x7e, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0x7e, 0x3c,

    /* U+0031 "1" */
    0x39, 0xf0, 0xe1, 0xc3, 0x87, 0xe, 0x1c, 0xff,
    0xfc,

    /* U+0032 "2" */
    0x7d, 0xfd, 0x38, 0x70, 0xe3, 0x8e, 0x38, 0xff,
    0xfc,

    /* U+0033 "3" */
    0x3e, 0x7f, 0x7, 0x7, 0x3e, 0x3e, 0x7, 0x47,
    0xff, 0x3c,

    /* U+0034 "4" */
    0x1e, 0x3e, 0x3e, 0x6e, 0x6e, 0xce, 0xff, 0xff,
    0xe, 0xe,

    /* U+0035 "5" */
    0x7e, 0x7e, 0x60, 0x7c, 0x7f, 0x7, 0x7, 0x47,
    0xfe, 0x7c,

    /* U+0036 "6" */
    0x3e, 0x7e, 0xe0, 0xee, 0xff, 0xe7, 0xe7, 0xe7,
    0x7e, 0x3c,

    /* U+0037 "7" */
    0xff, 0xfc, 0x10, 0x61, 0xc3, 0xe, 0x1c, 0x38,
    0x70,

    /* U+0038 "8" */
    0x7c, 0xfe, 0xc6, 0xc6, 0x7c, 0x7e, 0xc7, 0xc7,
    0xff, 0x3e,

    /* U+0039 "9" */
    0x3c, 0xfe, 0xe7, 0xe7, 0xff, 0x77, 0x7, 0xe,
    0x7e, 0x3c,

    /* U+003A ":" */
    0xff, 0x81, 0xff,

    /* U+003B ";" */
    0xff, 0x81, 0xbf, 0x7b, 0x0,

    /* U+003C "<" */
    0x1, 0xf, 0x7c, 0xe0, 0xf8, 0x3f, 0x7,

    /* U+003D "=" */
    0xff, 0xfc, 0x0, 0xf, 0xff, 0xc0,

    /* U+003E ">" */
    0x80, 0xf0, 0x7c, 0xf, 0x1f, 0xf8, 0xe0,

    /* U+003F "?" */
    0x7b, 0xf1, 0xc7, 0x38, 0xc6, 0x0, 0x71, 0xc7,
    0x0,

    /* U+0040 "@" */
    0xf, 0xc0, 0xff, 0xe, 0x1c, 0xcd, 0x7e, 0xf9,
    0xee, 0xcf, 0x66, 0x7b, 0x27, 0xdf, 0xf7, 0x67,
    0x1c, 0x0, 0x7f, 0x1, 0xf0, 0x0,

    /* U+0041 "A" */
    0x1c, 0xf, 0xd, 0x86, 0xc3, 0x73, 0x99, 0xfc,
    0xff, 0xe3, 0xf0, 0xc0,

    /* U+0042 "B" */
    0xfe, 0xff, 0xe7, 0xe7, 0xfe, 0xfe, 0xe7, 0xe7,
    0xff, 0xfe,

    /* U+0043 "C" */
    0x1e, 0x3f, 0x9c, 0x1c, 0xe, 0x7, 0x3, 0x80,
    0xe2, 0x7f, 0x8f, 0x0,

    /* U+0044 "D" */
    0xf8, 0xfe, 0xef, 0xe7, 0xe7, 0xe7, 0xe7, 0xef,
    0xfe, 0xf8,

    /* U+0045 "E" */
    0xff, 0xff, 0x87, 0xf, 0xdf, 0xb8, 0x70, 0xff,
    0xfc,

    /* U+0046 "F" */
    0xff, 0xff, 0x87, 0xf, 0xdf, 0xb8, 0x70, 0xe1,
    0xc0,

    /* U+0047 "G" */
    0x1f, 0x3f, 0xdc, 0x5c, 0xe, 0x7f, 0x3f, 0x86,
    0xe3, 0x7f, 0x8f, 0x80,

    /* U+0048 "H" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7f, 0xff, 0xff, 0x8f,
    0xc7, 0xe3, 0xf1, 0xc0,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+004A "J" */
    0xe, 0x1c, 0x38, 0x70, 0xe1, 0xc3, 0xa7, 0xfc,
    0xf0,

    /* U+004B "K" */
    0xe3, 0x73, 0xbb, 0x9f, 0x8f, 0xc7, 0xf3, 0xf9,
    0xce, 0xe3, 0x71, 0xc0,

    /* U+004C "L" */
    0xe1, 0xc3, 0x87, 0xe, 0x1c, 0x38, 0x70, 0xff,
    0xfc,

    /* U+004D "M" */
    0xe3, 0xf8, 0xfe, 0x3f, 0xdf, 0xf7, 0xf5, 0x7d,
    0xdf, 0x77, 0xc9, 0xf0, 0x70,

    /* U+004E "N" */
    0xe3, 0xf9, 0xfc, 0xff, 0x7f, 0xbf, 0x7f, 0xbf,
    0xcf, 0xe7, 0xf1, 0xc0,

    /* U+004F "O" */
    0x1e, 0x1f, 0xef, 0x3b, 0x87, 0xe1, 0xf8, 0x7e,
    0x1d, 0xce, 0x7f, 0x87, 0x80,

    /* U+0050 "P" */
    0xfc, 0xfe, 0xe7, 0xe7, 0xe7, 0xfe, 0xfc, 0xe0,
    0xe0, 0xe0,

    /* U+0051 "Q" */
    0x1e, 0xf, 0xf1, 0xce, 0x70, 0xee, 0x1d, 0xc3,
    0xb8, 0x77, 0x9c, 0x7f, 0x87, 0xe0, 0x38, 0x3,
    0xe0, 0x3e,

    /* U+0052 "R" */
    0xfc, 0x7f, 0xb9, 0xdc, 0xef, 0xe7, 0xe3, 0xb1,
    0xdc, 0xe7, 0x73, 0x80,

    /* U+0053 "S" */
    0x3c, 0xfe, 0xe0, 0xf0, 0x7c, 0x3f, 0xf, 0x47,
    0xfe, 0x7c,

    /* U+0054 "T" */
    0xff, 0xff, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c,

    /* U+0055 "U" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0x7f, 0x1f, 0x0,

    /* U+0056 "V" */
    0xe3, 0xf1, 0xd8, 0xcc, 0x67, 0x71, 0xb0, 0xd8,
    0x6c, 0x1c, 0xe, 0x0,

    /* U+0057 "W" */
    0xe7, 0x3f, 0x39, 0xd9, 0xcc, 0xcb, 0x66, 0x5b,
    0x3e, 0xd9, 0xf6, 0xc7, 0xbe, 0x3c, 0xe1, 0xc7,
    0x0,

    /* U+0058 "X" */
    0x63, 0xb9, 0x8d, 0x87, 0xc1, 0xc0, 0xe0, 0xd8,
    0x6e, 0x77, 0x71, 0xc0,

    /* U+0059 "Y" */
    0xe3, 0xb1, 0x9d, 0xc6, 0xc3, 0xe0, 0xe0, 0x70,
    0x38, 0x1c, 0xe, 0x0,

    /* U+005A "Z" */
    0x7f, 0x7f, 0x6, 0xe, 0x1c, 0x38, 0x38, 0x70,
    0xff, 0xff,

    /* U+005B "[" */
    0xff, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcf, 0xf0,

    /* U+005C "\\" */
    0x42, 0x18, 0xc6, 0x10, 0xc6, 0x30, 0x84, 0x31,
    0x8c,

    /* U+005D "]" */
    0xff, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3f, 0xf0,

    /* U+005E "^" */
    0x30, 0x71, 0xe3, 0x46, 0xd9, 0xb1, 0x80,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0060 "`" */
    0x4e, 0x71,

    /* U+0061 "a" */
    0x7c, 0xfd, 0x3b, 0xff, 0xfd, 0xff, 0xbf,

    /* U+0062 "b" */
    0xe0, 0xe0, 0xe0, 0xfe, 0xfe, 0xe7, 0xe7, 0xe7,
    0xe7, 0xfe, 0xfc,

    /* U+0063 "c" */
    0x3c, 0xfb, 0xc7, 0xe, 0x1e, 0x1f, 0x9e,

    /* U+0064 "d" */
    0x7, 0x7, 0x7, 0x3f, 0x7f, 0xe7, 0xe7, 0xe7,
    0xe7, 0x7f, 0x3f,

    /* U+0065 "e" */
    0x38, 0xfb, 0x9f, 0xff, 0xfc, 0x1f, 0x1e,

    /* U+0066 "f" */
    0x3d, 0xe7, 0x3e, 0xf9, 0xc7, 0x1c, 0x71, 0xc7,
    0x0,

    /* U+0067 "g" */
    0x7f, 0xff, 0xec, 0xec, 0x7c, 0xf8, 0xfe, 0x7f,
    0xc7, 0xff, 0x7c,

    /* U+0068 "h" */
    0xe0, 0xe0, 0xe0, 0xee, 0xff, 0xe7, 0xe7, 0xe7,
    0xe7, 0xe7, 0xe7,

    /* U+0069 "i" */
    0xfc, 0x7f, 0xff, 0xff, 0x80,

    /* U+006A "j" */
    0x39, 0xc0, 0x73, 0x9c, 0xe7, 0x39, 0xce, 0x7f,
    0xf8,

    /* U+006B "k" */
    0xe0, 0xe0, 0xe0, 0xe7, 0xee, 0xfc, 0xf8, 0xfc,
    0xee, 0xe6, 0xe7,

    /* U+006C "l" */
    0xee, 0xee, 0xee, 0xee, 0xef, 0x70,

    /* U+006D "m" */
    0xfd, 0xdf, 0xff, 0xbb, 0xf7, 0x7e, 0xef, 0xdd,
    0xfb, 0xbf, 0x77,

    /* U+006E "n" */
    0xee, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,

    /* U+006F "o" */
    0x3c, 0x7e, 0xe7, 0xe7, 0xe7, 0xe7, 0x7e, 0x3c,

    /* U+0070 "p" */
    0xfe, 0xfe, 0xe7, 0xe7, 0xe7, 0xe7, 0xfe, 0xfc,
    0xe0, 0xe0, 0xe0,

    /* U+0071 "q" */
    0x3b, 0x7f, 0xe7, 0xe7, 0xe7, 0xe7, 0x7f, 0x7f,
    0x7, 0x7, 0x7,

    /* U+0072 "r" */
    0xef, 0xff, 0x38, 0xe3, 0x8e, 0x38,

    /* U+0073 "s" */
    0x7b, 0xfe, 0xbc, 0x3c, 0x7f, 0xde,

    /* U+0074 "t" */
    0x73, 0xbf, 0xf7, 0x39, 0xce, 0x79, 0xc0,

    /* U+0075 "u" */
    0xef, 0xdf, 0xbf, 0x7e, 0xfd, 0xff, 0xbf,

    /* U+0076 "v" */
    0xe3, 0x67, 0x66, 0x76, 0x36, 0x3e, 0x3c, 0x1c,

    /* U+0077 "w" */
    0x67, 0x36, 0x73, 0x67, 0x77, 0xf6, 0x7d, 0x63,
    0xde, 0x3d, 0xe3, 0x9c,

    /* U+0078 "x" */
    0x67, 0x76, 0x3e, 0x3c, 0x3c, 0x3e, 0x66, 0x67,

    /* U+0079 "y" */
    0xe3, 0x67, 0x76, 0x36, 0x36, 0x3c, 0x1c, 0x1c,
    0x18, 0x78, 0x70,

    /* U+007A "z" */
    0xff, 0xf1, 0x8c, 0x71, 0x8f, 0xff,

    /* U+007B "{" */
    0x77, 0x66, 0x66, 0xee, 0x66, 0x66, 0x67, 0x30,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+007D "}" */
    0xee, 0x66, 0x66, 0x77, 0x66, 0x66, 0x6e, 0xc0,

    /* U+007E "~" */
    0x30, 0x7f, 0x4e
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 51, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 89, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 141, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 10, .adv_w = 136, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 136, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 31, .adv_w = 221, .box_w = 13, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 173, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 79, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 63, .adv_w = 90, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 71, .adv_w = 90, .box_w = 4, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 79, .adv_w = 118, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 84, .adv_w = 136, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 91, .adv_w = 79, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 94, .adv_w = 86, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 95, .adv_w = 79, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 86, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 106, .adv_w = 136, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 136, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 136, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 136, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 136, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 136, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 164, .adv_w = 136, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 136, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 136, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 136, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 79, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 79, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 211, .adv_w = 136, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 218, .adv_w = 136, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 224, .adv_w = 136, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 231, .adv_w = 120, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 240, .adv_w = 233, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 262, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 156, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 284, .adv_w = 149, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 163, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 315, .adv_w = 135, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 324, .adv_w = 164, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 173, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 348, .adv_w = 78, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 352, .adv_w = 131, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 361, .adv_w = 159, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 134, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 382, .adv_w = 196, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 171, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 407, .adv_w = 176, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 154, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 176, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 448, .adv_w = 159, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 460, .adv_w = 143, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 470, .adv_w = 143, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 480, .adv_w = 171, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 144, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 209, .box_w = 13, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 147, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 533, .adv_w = 136, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 545, .adv_w = 139, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 555, .adv_w = 90, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 563, .adv_w = 86, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 572, .adv_w = 90, .box_w = 4, .box_h = 15, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 580, .adv_w = 136, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 587, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 589, .adv_w = 143, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 591, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 598, .adv_w = 147, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 609, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 616, .adv_w = 147, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 627, .adv_w = 134, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 634, .adv_w = 89, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 643, .adv_w = 138, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 654, .adv_w = 147, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 665, .adv_w = 72, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 670, .adv_w = 72, .box_w = 5, .box_h = 14, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 679, .adv_w = 142, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 690, .adv_w = 74, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 221, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 707, .adv_w = 147, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 143, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 723, .adv_w = 147, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 734, .adv_w = 147, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 745, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 751, .adv_w = 114, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 757, .adv_w = 100, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 764, .adv_w = 146, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 771, .adv_w = 136, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 779, .adv_w = 201, .box_w = 12, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 791, .adv_w = 134, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 799, .adv_w = 135, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 810, .adv_w = 119, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 816, .adv_w = 90, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 824, .adv_w = 70, .box_w = 2, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 828, .adv_w = 90, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 836, .adv_w = 136, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 0,
    1, 2, 0, 0, 0, 3, 4, 3,
    5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 6, 0, 0, 0,
    0, 0, 7, 8, 9, 10, 11, 12,
    13, 0, 0, 14, 15, 16, 0, 0,
    10, 17, 10, 18, 19, 20, 21, 22,
    23, 24, 25, 26, 2, 27, 0, 0,
    0, 0, 28, 29, 30, 0, 31, 32,
    33, 34, 0, 0, 35, 36, 34, 34,
    29, 29, 37, 38, 39, 40, 37, 41,
    42, 43, 44, 45, 2, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 0, 0, 0, 0,
    2, 0, 3, 4, 0, 5, 6, 7,
    8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 9, 10, 0, 0, 0,
    11, 0, 12, 0, 13, 0, 0, 0,
    13, 0, 0, 14, 0, 0, 0, 0,
    13, 0, 13, 0, 15, 16, 17, 18,
    19, 20, 21, 22, 0, 23, 3, 0,
    0, 0, 24, 0, 25, 25, 25, 26,
    27, 0, 28, 29, 0, 0, 30, 30,
    25, 30, 25, 30, 31, 32, 33, 34,
    35, 36, 37, 38, 0, 0, 3, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, -35, 0, -35, 0,
    0, 0, 0, -19, 0, -30, -3, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, -5, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -34, 0, -44,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -26, -7, -20, -10, 0,
    -30, 0, 0, 0, -3, 0, 0, 0,
    10, 0, 0, -17, 0, -16, -9, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    -7, -15, 0, -5, -3, -10, -20, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, -4, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -10, -3, -21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    -4, 0, -3, 1, 1, 0, 0, -2,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -10, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -19, 0, -21,
    0, 0, 0, 0, 0, 0, -10, 0,
    -3, 0, 0, -19, -3, -5, 0, -2,
    -5, 0, -10, 3, 0, -3, 0, 0,
    0, 0, 3, -5, 0, -4, -2, -2,
    -4, 0, 0, 0, 0, -8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    -5, -7, 0, -4, -2, -2, -5, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, -5, -3, -3, -5, 0,
    0, 0, 0, 0, 0, -10, 0, 0,
    0, 0, 0, 0, -10, -3, -7, -3,
    -5, -2, -2, -2, -4, -3, 0, 0,
    0, 0, -5, 0, 0, 0, 0, -10,
    -3, -5, -3, 0, -5, 0, 0, 0,
    0, -6, 0, 0, 0, -3, 0, 0,
    0, -3, 0, -14, 0, -7, 0, -3,
    0, -7, -5, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, -7, 0, -3, 0, -12,
    -3, 0, 0, 0, 0, 0, -24, 0,
    -24, -12, 0, 0, 0, -10, -3, -34,
    -7, 0, 0, -2, -2, -7, -4, -8,
    0, -10, -5, 0, -7, 0, 0, -5,
    -7, -3, -5, -9, -7, -10, -7, -14,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, -5,
    0, -5, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, 0, -7, 0, 0, 0,
    0, 0, 0, -10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -9, 0, -10,
    0, -14, 0, 0, 0, 0, -4, -3,
    -7, 0, -6, -7, -5, -5, -3, 0,
    -7, 0, 0, 0, -4, 0, 0, 0,
    -3, 0, 0, -14, -3, -9, -7, -7,
    -9, -5, 0, -38, 0, -45, 0, -11,
    0, 0, 0, 0, -14, -2, -10, 0,
    -7, -31, -10, -20, -15, 0, -22, 0,
    -21, 0, -4, -5, -2, 0, 0, 0,
    0, -7, -3, -14, -10, 0, -14, 0,
    0, 0, 0, 0, -34, -6, -34, -12,
    0, 0, 0, -13, 0, -36, -3, -3,
    0, 0, 0, -7, -3, -12, 0, -8,
    -5, 0, -4, 0, 0, 0, -3, 0,
    0, 0, 0, -5, 0, -5, 0, 0,
    0, -3, 0, -8, 0, 0, 0, 0,
    0, -2, 0, -3, -4, -5, 0, -4,
    0, -2, -4, -3, 0, -2, -3, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, -4, 0, 0, 0, -3,
    0, 5, 0, 0, 0, 0, 0, 0,
    0, -5, -5, -5, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, -4, 0, 0, 0, 0, -30, -16,
    -30, -17, -5, -5, 0, -10, -7, -31,
    -6, 0, 0, 0, 0, -5, -5, -11,
    0, -16, -20, -3, -16, 0, 0, -11,
    -15, -3, -11, -6, -6, -6, -6, -16,
    0, 0, 0, 0, -7, 0, -7, -4,
    0, 0, 0, -3, 0, -15, -3, 0,
    0, -2, 0, -3, -5, 0, 0, -2,
    0, 0, -3, 0, 0, 0, -2, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, -20, -5, -20, -6, 0, 0,
    0, -5, -3, -16, -3, 0, -3, 3,
    0, 0, 0, -5, 0, -9, -5, 0,
    -5, 0, 0, -5, -5, 0, -8, -3,
    -3, -5, -3, -5, 0, 0, 0, 0,
    -10, -3, -10, -1, 0, 0, 0, 0,
    0, -11, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, -3, 0, -3, 0, -10,
    0, 0, 0, 0, 0, -2, -7, -4,
    -5, -5, -3, 0, 0, 0, 0, 0,
    0, -3, -4, -7, 0, 0, 0, 0,
    0, -7, -3, -7, -5, -3, -7, -5,
    0, 0, 0, 0, -29, -20, -29, -11,
    -10, -10, -4, -5, -5, -26, -5, -5,
    -3, 0, 0, 0, 0, -5, 0, -20,
    -15, 0, -15, 0, 0, -10, -15, -14,
    -10, -5, -7, -10, -5, -15, 0, 0,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, 0, -5, -6, -8, 0, -3, 0,
    0, 0, -5, -3, 0, -3, -3, -5,
    -3, 0, 0, 0, 0, -5, -3, -3,
    -3, -7, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -17, -4, -11, -4, 0,
    -16, 0, 0, 0, 0, 0, 6, 0,
    16, 0, 0, 0, 0, -5, -3, 0,
    1, 0, 0, 0, 0, -11, 0, 0,
    0, 0, 0, 0, -9, 0, 0, 0,
    0, -7, 0, -7, -2, 0, -7, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, -4, 0, -1, -3, 0, -3, 0,
    0, 0, -9, 0, 0, 0, 0, -15,
    0, -5, 0, -2, -15, 0, -10, -3,
    0, -1, 0, 0, 0, 0, -1, -7,
    0, -2, -2, -7, -2, -4, 0, 0,
    0, 0, 0, -9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 0, -5,
    0, 0, -7, 0, 0, -3, -7, 0,
    -3, 0, 0, 0, 0, -3, 0, 0,
    0, -2, 0, 0, 0, 0, 0, -6,
    0, 3, 0, 0, 0, 0, -4, 0,
    0, -5, -5, -7, 0, -7, -3, 0,
    -10, 0, -9, -3, 0, -1, -3, 0,
    0, 0, 0, -3, 0, -2, -2, -4,
    -2, -2, 1, 10, 9, 0, -17, -5,
    -17, -1, 0, 0, 5, 0, 0, 0,
    0, 11, 0, 16, 11, 6, 11, 0,
    7, -5, -3, 0, -3, 0, -3, 0,
    -2, 0, 0, 1, 0, -2, 0, -5,
    0, 0, 1, -6, 0, 0, 0, 6,
    0, 0, -12, 0, 0, 0, 0, -10,
    0, 0, 0, 0, -5, 0, 0, -5,
    -5, 0, 0, 0, 12, 0, 0, 0,
    0, -2, -2, 0, 1, -5, 0, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, -7, 0, -3,
    0, 0, -7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    1, -23, 1, 0, 1, 1, -9, 0,
    0, 0, 0, -14, 0, 0, 0, 0,
    -5, 0, 0, -3, -8, 0, -3, 0,
    -3, 0, 0, -9, -5, 0, 0, -4,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, -5, 0, 0, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -24, -7, -24, -6, 1, 1,
    0, -5, 0, -19, 0, 0, 0, 0,
    0, 0, 0, -3, 1, -7, -3, 0,
    -3, 0, 0, 0, -2, 0, 0, 1,
    1, 0, 1, -2, 0, 0, 0, -6,
    0, 3, 0, 0, 0, 0, -7, 0,
    0, 0, 0, -7, 0, -3, 0, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, -10,
    -4, -2, 1, 1, -10, 0, 0, 0,
    0, -5, 0, 0, 0, 0, -2, 0,
    0, -5, -5, 0, -3, 0, 0, 0,
    -3, -5, 0, 0, 0, -3, 0, 0,
    0, 0, 0, -3, -16, -4, -16, -5,
    0, 0, 0, -3, 0, -10, 0, -5,
    0, -3, 0, 0, -5, -3, 0, -5,
    -2, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    0, -3, -23, 0, -23, 0, 0, 0,
    0, -2, 0, -8, 0, -7, 0, -3,
    0, -5, -7, 0, 0, -3, -2, 0,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, -7, -5, 0, 0, -5,
    4, -5, -4, 0, 0, 4, 0, 0,
    -3, 0, -2, -6, 0, -5, 0, -3,
    -10, 0, 0, -3, -7, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, -16, 0,
    -16, -1, 0, 0, 0, 0, 0, -10,
    0, -5, 0, -2, 0, -2, -4, 0,
    0, -5, -2, 0, 0, 0, -3, 0,
    0, 0, 0, 0, 0, -5, 0, -7,
    0, 0, 0, 0, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, 0, 0, 0, -4, 0, 0, -3,
    -3, 0, 0, 0, 0, 0, 0, 0,
    -3, -2, 0, 0, -2, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 45,
    .right_class_cnt     = 38,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif

};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t SiYuanHeiTi_Heavy = {
#else
lv_font_t SiYuanHeiTi_Heavy = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    // .static_bitmap = 0,
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if SIYUANHEITI_HEAVY*/
