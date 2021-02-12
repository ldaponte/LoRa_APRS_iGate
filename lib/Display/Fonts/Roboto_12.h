/*
    created with FontEditor written by H. Reddmann
    HaReddmann at t-online dot de

    File Name           : Roboto_12.h
    Date                : 12.03.2019
    Font size in bytes  : 0x12EE, 4846
    Font width          : 11
    Font height         : 21
    Font first char     : 0x01
    Font last char      : 0xFF
    Font bits per pixel : 1
    Font is compressed  : false

    The font data are defined as

    struct _FONT_ {
     // common shared fields
       uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
       uint8_t    font_Width_in_Pixel_for_fixed_drawing;
       uint8_t    font_Height_in_Pixel_for_all_Characters;
       uint8_t    font_Bits_per_Pixels;
                    // if MSB are set then font is a compressed font
       uint8_t    font_First_Char;
       uint8_t    font_Last_Char;
       uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
                    // for each character the separate width in pixels,
                    // characters < 128 have an implicit virtual right empty row
                    // characters with font_Char_Widths[] == 0 are undefined

     // if compressed font then additional fields
       uint8_t    font_Byte_Padding;
                    // each Char in the table are aligned in size to this value
       uint8_t    font_RLE_Table[3];
                    // Run Length Encoding Table for compression
       uint8_t    font_Char_Size_in_Bytes[font_Last_Char - font_First_Char +1];
                    // for each char the size in (bytes / font_Byte_Padding) are stored,
                    // this get us the table to seek to the right beginning of each char
                    // in the font_data[].

     // for compressed and uncompressed fonts
       uint8_t    font_data[];
                    // bit field of all characters
    }
*/

#include "FontDesc.h"

#ifndef Roboto_12_FONT_H
#define Roboto_12_FONT_H

#define Roboto_12_WIDTH 11
#define Roboto_12_HEIGHT 21

static unsigned char const Roboto_12_Bytes[] = {
    0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0x05, 0x09, 0x08, 0x09, 0x09, 0x01, 0x04, 0x05, 0x08, 0x08, 0x03, 0x07, 0x03, 0x06, 0x08, 
    0x05, 0x08, 0x08, 0x09, 0x08, 0x08, 0x08, 0x07, 0x07, 0x03, 0x04, 0x07, 0x08, 0x07, 0x08, 0x09, 
    0x0A, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x06, 0x08, 0x09, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x09, 0x08, 0x08, 0x09, 0x08, 0x09, 0x09, 0x0A, 0x0A, 0x08, 0x04, 0x06, 0x04, 0x06, 0x07, 0x04, 
    0x08, 0x08, 0x07, 0x07, 0x08, 0x08, 0x08, 0x08, 0x07, 0x05, 0x08, 0x07, 0x08, 0x08, 0x08, 0x08, 
    0x07, 0x07, 0x08, 0x08, 0x08, 0x08, 0x09, 0x08, 0x0A, 0x08, 0x06, 0x02, 0x05, 0x09, 0x05, 0x09, 
    0x00, 0x06, 0x09, 0x08, 0x0A, 0x09, 0x09, 0x07, 0x09, 0x09, 0x07, 0x09, 0x00, 0x09, 0x00, 0x00, 
    0x06, 0x06, 0x07, 0x08, 0x07, 0x09, 0x09, 0x07, 0x09, 0x09, 0x07, 0x09, 0x00, 0x09, 0x0A, 0x00, 
    0x06, 0x09, 0x09, 0x09, 0x0A, 0x06, 0x09, 0x08, 0x09, 0x07, 0x08, 0x08, 0x09, 0x09, 0x08, 0x07, 
    0x08, 0x07, 0x07, 0x07, 0x09, 0x08, 0x06, 0x06, 0x06, 0x08, 0x09, 0x0A, 0x0A, 0x0A, 0x09, 0x0A, 
    0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x08, 0x08, 0x08, 0x08, 0x09, 
    0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x0A, 0x09, 0x09, 0x09, 
    0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x08, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
    0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x0A, 0x09, 0x0A, 
    0xF8, 0xFF, 0x00, 0xFF, 0x1F, 0x20, 0x00, 0x02, 0x04, 0x40, 0x80, 0xFF, 0x0F, 0xF0, 0xFF, 0x01, 
    0x00, 0x20, 0x00, 0xFF, 0x0C, 0xE0, 0x9F, 0x01, 0x3C, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 
    0x1E, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x0C, 0x00, 0x98, 0x01, 0x00, 0xFB, 0x01, 0xFC, 0x07, 0x80, 
    0xCD, 0x04, 0x80, 0xFD, 0x00, 0xFE, 0x03, 0xC0, 0x66, 0x00, 0xC0, 0x00, 0x00, 0x08, 0x06, 0xC0, 
    0xC7, 0x01, 0xFC, 0x31, 0x80, 0x31, 0x1C, 0x3C, 0x8E, 0x03, 0x8E, 0x19, 0x80, 0xF3, 0x03, 0x60, 
    0x38, 0x00, 0x0E, 0x00, 0xE0, 0x03, 0x00, 0x6C, 0x08, 0x80, 0xCF, 0x00, 0xE0, 0x0E, 0x00, 0x60, 
    0x0F, 0x00, 0x33, 0x03, 0x20, 0x66, 0x00, 0x80, 0x0F, 0x00, 0xF0, 0x00, 0x78, 0x3F, 0x80, 0x3F, 
    0x06, 0x30, 0xCF, 0x00, 0xBE, 0x1F, 0x80, 0xC3, 0x01, 0x00, 0x7E, 0x00, 0xC0, 0x0D, 0x00, 0x00, 
    0x01, 0x3C, 0x00, 0x00, 0xFC, 0x07, 0xE0, 0xFF, 0x03, 0x06, 0xE0, 0x60, 0x00, 0x30, 0x04, 0x00, 
    0x82, 0x01, 0xE0, 0xE0, 0x01, 0x07, 0xF8, 0x7F, 0x00, 0xF8, 0x01, 0x00, 0x02, 0x00, 0x60, 0x04, 
    0x00, 0xC8, 0x00, 0x60, 0x0F, 0x00, 0xFC, 0x00, 0x00, 0x7C, 0x00, 0x80, 0x0C, 0x00, 0x18, 0x00, 
    0x00, 0x0C, 0x00, 0x80, 0x01, 0x00, 0x30, 0x00, 0xE0, 0x3F, 0x00, 0xFC, 0x07, 0x00, 0x18, 0x00, 
    0x00, 0x03, 0x00, 0x60, 0x00, 0x00, 0x00, 0x07, 0x00, 0xF8, 0x00, 0x00, 0x03, 0x00, 0x06, 0x00, 
    0xC0, 0x00, 0x00, 0x18, 0x00, 0x00, 0x03, 0x00, 0x60, 0x00, 0x00, 0x0C, 0x00, 0x80, 0x01, 0x00, 
    0x00, 0x01, 0x00, 0x70, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x03, 0x00, 0x7C, 0x00, 0xF0, 0x03, 0xE0, 
    0x0F, 0x00, 0x3E, 0x00, 0xC0, 0x00, 0x00, 0xE0, 0x1F, 0x00, 0xFE, 0x07, 0xE0, 0xD8, 0x01, 0x0C, 
    0x31, 0x80, 0x11, 0x06, 0xF0, 0xFF, 0x00, 0xFC, 0x0F, 0x00, 0x3C, 0x00, 0x60, 0x00, 0x00, 0x0C, 
    0x00, 0xC0, 0x00, 0x00, 0xF8, 0x3F, 0x80, 0xFF, 0x07, 0xE0, 0xC0, 0x00, 0x1C, 0x1C, 0xC0, 0xE0, 
    0x03, 0x18, 0x6E, 0x00, 0xE3, 0x0C, 0xE0, 0x8F, 0x01, 0xF8, 0x30, 0x00, 0x00, 0x06, 0x60, 0x60, 
    0x00, 0x0C, 0x1C, 0xC0, 0x18, 0x03, 0x18, 0x63, 0x00, 0x63, 0x0C, 0xE0, 0xFF, 0x01, 0x78, 0x1F, 
    0x00, 0x80, 0x00, 0x00, 0x08, 0x00, 0x80, 0x03, 0x00, 0x7C, 0x00, 0xC0, 0x0D, 0x00, 0x8E, 0x01, 
    0xE0, 0xFF, 0x01, 0xFC, 0x3F, 0x00, 0xC0, 0x00, 0x00, 0x18, 0x00, 0x70, 0x04, 0xC0, 0x9F, 0x01, 
    0xB8, 0x61, 0x00, 0x33, 0x0C, 0x60, 0x86, 0x01, 0xCC, 0x3F, 0x80, 0xF1, 0x03, 0x00, 0x18, 0x00, 
    0xF0, 0x07, 0x00, 0xFF, 0x01, 0x70, 0x61, 0x00, 0x33, 0x0C, 0x60, 0x86, 0x01, 0xCC, 0x3F, 0x00, 
    0xF0, 0x03, 0x00, 0x18, 0x00, 0x06, 0x00, 0xC0, 0x00, 0x03, 0x18, 0x78, 0x00, 0xC3, 0x07, 0x60, 
    0x3E, 0x00, 0xFC, 0x00, 0x80, 0x07, 0x00, 0x10, 0x00, 0x00, 0x38, 0x0F, 0x80, 0xFF, 0x03, 0x98, 
    0x63, 0x00, 0x63, 0x0C, 0x60, 0x8C, 0x01, 0xFC, 0x3F, 0x00, 0xEF, 0x03, 0xC0, 0x07, 0x00, 0xFC, 
    0x19, 0xC0, 0x30, 0x03, 0x18, 0x66, 0x00, 0xC3, 0x06, 0xC0, 0xFF, 0x00, 0xF0, 0x07, 0x00, 0x08, 
    0x02, 0x80, 0xE3, 0x00, 0x70, 0x1C, 0x00, 0x04, 0x00, 0xC0, 0x81, 0x03, 0x38, 0x7C, 0x00, 0x80, 
    0x01, 0x00, 0x03, 0x00, 0x70, 0x00, 0x00, 0x1E, 0x00, 0x40, 0x03, 0x00, 0xCC, 0x00, 0x80, 0x19, 
    0x00, 0x18, 0x07, 0x00, 0x6C, 0x00, 0x80, 0x0D, 0x00, 0xB0, 0x01, 0x00, 0x36, 0x00, 0xC0, 0x06, 
    0x00, 0xD8, 0x00, 0x00, 0x1B, 0x00, 0x60, 0x03, 0x00, 0xC3, 0x00, 0xC0, 0x0C, 0x00, 0x98, 0x01, 
    0x00, 0x1B, 0x00, 0xC0, 0x03, 0x00, 0x78, 0x00, 0x00, 0x06, 0x00, 0x04, 0x00, 0xC0, 0x00, 0x00, 
    0x1C, 0x00, 0x80, 0xE1, 0x06, 0x30, 0xDE, 0x00, 0xFE, 0x00, 0x80, 0x0F, 0x00, 0x60, 0x00, 0x00, 
    0xE0, 0x00, 0x80, 0xFF, 0x00, 0x18, 0x18, 0x80, 0xF8, 0x06, 0x90, 0xD0, 0x00, 0x92, 0x19, 0x40, 
    0x7E, 0x01, 0x10, 0x08, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x01, 0x00, 0x3C, 0x00, 0xF0, 0x07, 0xE0, 
    0x3F, 0x00, 0x3E, 0x06, 0xC0, 0xCF, 0x00, 0xE0, 0x1F, 0x00, 0xE0, 0x0F, 0x00, 0xE0, 0x01, 0x00, 
    0x20, 0x80, 0xFF, 0x07, 0xF0, 0xFF, 0x00, 0xC6, 0x18, 0xC0, 0x18, 0x03, 0x18, 0x63, 0x00, 0x73, 
    0x0C, 0xC0, 0xFF, 0x01, 0x70, 0x1E, 0x00, 0xFE, 0x01, 0xE0, 0x7F, 0x00, 0x06, 0x18, 0xC0, 0x00, 
    0x03, 0x18, 0x60, 0x00, 0x07, 0x0E, 0xC0, 0xE1, 0x00, 0x30, 0x0C, 0x80, 0xFF, 0x07, 0xF0, 0xFF, 
    0x00, 0x06, 0x18, 0xC0, 0x00, 0x03, 0x18, 0x60, 0x00, 0x0E, 0x07, 0xC0, 0xFF, 0x00, 0xE0, 0x07, 
    0x80, 0xFF, 0x07, 0xF0, 0xFF, 0x00, 0xC6, 0x18, 0xC0, 0x18, 0x03, 0x18, 0x63, 0x00, 0x63, 0x0C, 
    0x60, 0x8C, 0x01, 0x0C, 0x30, 0x80, 0xFF, 0x07, 0xF0, 0xFF, 0x00, 0xC6, 0x00, 0xC0, 0x18, 0x00, 
    0x18, 0x03, 0x00, 0x63, 0x00, 0x60, 0x0C, 0x00, 0x0C, 0x00, 0x00, 0xFE, 0x01, 0xE0, 0x7F, 0x00, 
    0x0E, 0x1C, 0xC0, 0x00, 0x03, 0x18, 0x66, 0x00, 0xC7, 0x0C, 0xC0, 0xF9, 0x00, 0x30, 0x1F, 0x80, 
    0xFF, 0x07, 0xF0, 0xFF, 0x00, 0xC0, 0x00, 0x00, 0x18, 0x00, 0x00, 0x03, 0x00, 0xFF, 0x0F, 0xE0, 
    0xFF, 0x01, 0xFC, 0x3F, 0x80, 0x01, 0x06, 0x30, 0xC0, 0x00, 0xFE, 0x1F, 0xC0, 0xFF, 0x03, 0x18, 
    0x60, 0x00, 0x03, 0x0C, 0x00, 0xE0, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x06, 0x00, 0xC0, 0x00, 0x00, 
    0x18, 0xC0, 0xFF, 0x03, 0xF8, 0x3F, 0x00, 0xFF, 0x01, 0xE0, 0xFF, 0x01, 0xFC, 0x3F, 0x00, 0x70, 
    0x00, 0x00, 0x07, 0x00, 0xF8, 0x03, 0x80, 0xF3, 0x01, 0x38, 0x78, 0x00, 0x03, 0x0C, 0x20, 0x00, 
    0x01, 0xFC, 0x3F, 0x80, 0xFF, 0x07, 0x00, 0xC0, 0x00, 0x00, 0x18, 0x00, 0x00, 0x03, 0x00, 0x60, 
    0x00, 0x00, 0x0C, 0x00, 0x80, 0x01, 0xFC, 0x3F, 0x80, 0xFF, 0x07, 0xF0, 0x01, 0x00, 0xF0, 0x01, 
    0x00, 0x3F, 0x00, 0x78, 0x00, 0x00, 0xFF, 0x0F, 0xE0, 0xFF, 0x01, 0xFC, 0x3F, 0x80, 0xFF, 0x07, 
    0xE0, 0x01, 0x00, 0xF0, 0x01, 0x00, 0xF0, 0x00, 0xF8, 0x7F, 0x00, 0xFF, 0x0F, 0xE0, 0xFF, 0x01, 
    0xF0, 0x0F, 0x00, 0xFF, 0x03, 0x30, 0xC0, 0x00, 0x06, 0x18, 0xC0, 0x00, 0x03, 0x38, 0x70, 0x00, 
    0xFE, 0x07, 0x00, 0x3F, 0x00, 0xFC, 0x3F, 0x80, 0xFF, 0x07, 0x30, 0x0C, 0x00, 0x86, 0x01, 0xC0, 
    0x30, 0x00, 0x38, 0x07, 0x00, 0x7E, 0x00, 0x80, 0x07, 0x00, 0xF0, 0x0F, 0x00, 0xFF, 0x03, 0x30, 
    0xC0, 0x00, 0x06, 0x18, 0xC0, 0x00, 0x03, 0x38, 0x70, 0x00, 0xFE, 0x1F, 0x80, 0x7F, 0x06, 0x00, 
    0x40, 0x80, 0xFF, 0x07, 0xF0, 0xFF, 0x00, 0x86, 0x01, 0xC0, 0x30, 0x00, 0x18, 0x0E, 0x00, 0xE7, 
    0x07, 0xC0, 0xEF, 0x01, 0xF0, 0x30, 0x00, 0x8E, 0x03, 0xE0, 0x73, 0x00, 0x66, 0x18, 0xC0, 0x18, 
    0x03, 0x18, 0x63, 0x00, 0xE3, 0x0C, 0xC0, 0xF9, 0x00, 0x30, 0x1E, 0x80, 0x01, 0x00, 0x30, 0x00, 
    0x00, 0x06, 0x00, 0xC0, 0x00, 0x00, 0xF8, 0x7F, 0x00, 0xFF, 0x0F, 0x60, 0x00, 0x00, 0x0C, 0x00, 
    0x80, 0x01, 0x00, 0xF0, 0x3F, 0x00, 0xFE, 0x0F, 0x00, 0x80, 0x03, 0x00, 0x60, 0x00, 0x00, 0x0C, 
    0xE0, 0xFF, 0x01, 0xFC, 0x1F, 0x80, 0xFF, 0x00, 0x10, 0x00, 0x00, 0x1E, 0x00, 0xC0, 0x3F, 0x00, 
    0xC0, 0x3F, 0x00, 0x80, 0x0F, 0x00, 0xFC, 0x01, 0xF0, 0x0F, 0x80, 0x1F, 0x00, 0x70, 0x00, 0x00, 
    0x06, 0x00, 0xC0, 0xFF, 0x00, 0xE0, 0x7F, 0x00, 0xF0, 0x0F, 0xE0, 0x0F, 0x00, 0xFC, 0x0F, 0x00, 
    0xE0, 0x07, 0xF0, 0xFF, 0x00, 0xFE, 0x00, 0x40, 0x00, 0x02, 0x18, 0x60, 0x00, 0x0F, 0x0F, 0xC0, 
    0xFF, 0x00, 0xE0, 0x07, 0x00, 0xFC, 0x00, 0xE0, 0x7F, 0x00, 0x1E, 0x1E, 0xC0, 0x00, 0x03, 0x00, 
    0x40, 0x00, 0x01, 0x00, 0xE0, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0xFF, 0x00, 0xE0, 
    0x1F, 0x00, 0x1F, 0x00, 0xF8, 0x00, 0x00, 0x03, 0x00, 0x20, 0x00, 0x00, 0x0C, 0x38, 0x80, 0x81, 
    0x07, 0x30, 0xFC, 0x00, 0xC6, 0x19, 0xC0, 0x1E, 0x03, 0xF8, 0x60, 0x00, 0x0F, 0x0C, 0x60, 0x80, 
    0x01, 0xFF, 0xFF, 0xE1, 0xFF, 0x3F, 0x0C, 0x00, 0x86, 0x01, 0xC0, 0xC0, 0x00, 0x00, 0xF8, 0x00, 
    0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x0C, 0x0C, 0x00, 0x86, 0xFF, 0xFF, 
    0xF0, 0xFF, 0x1F, 0xFE, 0xFF, 0x03, 0x30, 0x00, 0x80, 0x07, 0x00, 0x1C, 0x00, 0x80, 0x07, 0x00, 
    0xC0, 0x03, 0x00, 0x40, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x80, 0x01, 0x00, 0x30, 0x00, 0x00, 0x06, 
    0x00, 0xC0, 0x00, 0x00, 0x18, 0x00, 0x00, 0x03, 0x02, 0x00, 0x40, 0x00, 0x00, 0x18, 0x00, 0x00, 
    0x02, 0x00, 0x00, 0xF6, 0x00, 0xE0, 0x3E, 0x00, 0x6C, 0x06, 0x80, 0xCD, 0x00, 0xB0, 0x19, 0x00, 
    0xFE, 0x03, 0x80, 0x7F, 0x00, 0x00, 0x08, 0xE0, 0xFF, 0x01, 0xFC, 0x3F, 0x00, 0x18, 0x02, 0x80, 
    0xC1, 0x00, 0x30, 0x18, 0x00, 0xDE, 0x03, 0x80, 0x3F, 0x00, 0xC0, 0x01, 0x00, 0x7C, 0x00, 0xC0, 
    0x1F, 0x00, 0x1C, 0x07, 0x80, 0xC1, 0x00, 0x30, 0x18, 0x00, 0x8E, 0x03, 0x80, 0x31, 0x00, 0xE0, 
    0x03, 0x00, 0xFF, 0x00, 0x60, 0x30, 0x00, 0x0C, 0x06, 0x80, 0xC1, 0x00, 0xFE, 0x1F, 0xC0, 0xFF, 
    0x03, 0x00, 0x1F, 0x00, 0xF0, 0x07, 0x00, 0xDB, 0x01, 0x60, 0x33, 0x00, 0x6C, 0x06, 0x80, 0xCD, 
    0x00, 0xE0, 0x0D, 0x00, 0x38, 0x01, 0xC0, 0x00, 0x00, 0x18, 0x00, 0xC0, 0xFF, 0x01, 0xFC, 0x3F, 
    0xC0, 0x0D, 0x00, 0x98, 0x01, 0x00, 0x33, 0x00, 0x60, 0x00, 0x00, 0x00, 0x1F, 0x01, 0xF0, 0x77, 
    0x00, 0xC7, 0x0D, 0x60, 0xB0, 0x01, 0x0C, 0x36, 0x00, 0xFF, 0x07, 0xF0, 0x7F, 0x00, 0xFE, 0x03, 
    0xF8, 0x7F, 0x00, 0xFF, 0x0F, 0x00, 0x02, 0x00, 0x60, 0x00, 0x00, 0x0C, 0x00, 0x80, 0xFF, 0x00, 
    0xE0, 0x1F, 0x00, 0xF8, 0x03, 0xC0, 0x60, 0x00, 0x18, 0x0C, 0x60, 0xFF, 0x01, 0xEC, 0x3F, 0x00, 
    0x00, 0x06, 0x00, 0xC0, 0x00, 0x00, 0x18, 0x00, 0x06, 0x18, 0xC0, 0x00, 0x03, 0x19, 0x70, 0x60, 
    0xFF, 0x07, 0xEC, 0x7F, 0x80, 0xFF, 0x07, 0xF0, 0xFF, 0x00, 0x80, 0x03, 0x00, 0x78, 0x00, 0x80, 
    0x1F, 0x00, 0x38, 0x0F, 0x00, 0xC3, 0x01, 0x20, 0x20, 0x80, 0x01, 0x06, 0x30, 0xC0, 0x00, 0xFE, 
    0x1F, 0xC0, 0xFF, 0x03, 0x00, 0x60, 0x00, 0x00, 0x0C, 0x00, 0x80, 0x01, 0xE0, 0x3F, 0x00, 0xF8, 
    0x07, 0x80, 0x01, 0x00, 0xF0, 0x1F, 0x00, 0xFC, 0x03, 0xC0, 0x00, 0x00, 0xF8, 0x0F, 0x00, 0xFE, 
    0x01, 0xE0, 0x3F, 0x00, 0xFC, 0x07, 0x00, 0x01, 0x00, 0x30, 0x00, 0x00, 0x06, 0x00, 0xC0, 0x7F, 
    0x00, 0xF0, 0x0F, 0x00, 0xFC, 0x01, 0x80, 0x0F, 0x00, 0xF8, 0x03, 0x80, 0xC1, 0x00, 0x30, 0x18, 
    0x00, 0x06, 0x03, 0xC0, 0x71, 0x00, 0xF0, 0x07, 0x00, 0x38, 0x00, 0xE0, 0xFF, 0x01, 0xFC, 0x3F, 
    0x00, 0x41, 0x00, 0x30, 0x18, 0x00, 0x06, 0x03, 0xC0, 0x7B, 0x00, 0xF0, 0x07, 0x00, 0x38, 0x00, 
    0x80, 0x0F, 0x00, 0xFC, 0x03, 0x80, 0xE3, 0x00, 0x30, 0x18, 0x00, 0x06, 0x03, 0xC0, 0xFF, 0x03, 
    0xF8, 0x7F, 0x00, 0xFF, 0x01, 0xE0, 0x3F, 0x00, 0x18, 0x00, 0x80, 0x01, 0x00, 0x30, 0x00, 0x00, 
    0x06, 0x00, 0xC0, 0x00, 0x00, 0x60, 0x06, 0x00, 0xCE, 0x00, 0x60, 0x33, 0x00, 0x4C, 0x06, 0x80, 
    0xC9, 0x00, 0x70, 0x1B, 0x00, 0xCC, 0x01, 0x00, 0x11, 0x00, 0x18, 0x00, 0x00, 0x03, 0x00, 0xF8, 
    0x1F, 0x00, 0xFF, 0x07, 0x80, 0xC1, 0x00, 0x30, 0x18, 0x00, 0x06, 0x03, 0x00, 0x40, 0x00, 0xF8, 
    0x03, 0x00, 0xFF, 0x01, 0x00, 0x38, 0x00, 0x00, 0x06, 0x00, 0xC0, 0x00, 0xF0, 0x0F, 0x00, 0xFE, 
    0x03, 0xC0, 0x7F, 0x00, 0x38, 0x00, 0x00, 0x1F, 0x00, 0x80, 0x1F, 0x00, 0x00, 0x07, 0x00, 0xF8, 
    0x00, 0xE0, 0x07, 0x00, 0x1E, 0x00, 0xC0, 0x00, 0x00, 0x18, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x3F, 
    0x00, 0xE0, 0x07, 0x80, 0x07, 0x00, 0xF0, 0x07, 0x00, 0x80, 0x03, 0xC0, 0x7F, 0x00, 0x78, 0x00, 
    0x00, 0x01, 0x01, 0xE0, 0x38, 0x00, 0xB8, 0x03, 0x00, 0x3E, 0x00, 0xC0, 0x07, 0x00, 0xDE, 0x01, 
    0xC0, 0x71, 0x00, 0x08, 0x08, 0x00, 0x01, 0x00, 0xE0, 0x00, 0x01, 0x7C, 0x30, 0x00, 0x3E, 0x07, 
    0x00, 0x7F, 0x00, 0xE0, 0x03, 0x00, 0x1F, 0x00, 0xF8, 0x00, 0x00, 0x07, 0x00, 0x20, 0x00, 0x00, 
    0x0C, 0x06, 0x80, 0xE1, 0x00, 0x30, 0x1F, 0x00, 0x76, 0x03, 0xC0, 0x67, 0x00, 0x78, 0x0C, 0x00, 
    0x87, 0x01, 0x60, 0x30, 0x00, 0x60, 0x00, 0x00, 0x0C, 0x00, 0xF8, 0x1F, 0xC0, 0xCF, 0x0F, 0x1C, 
    0x80, 0x03, 0x01, 0x20, 0xE0, 0xFF, 0x0F, 0xFC, 0xFF, 0xC1, 0x00, 0x30, 0xF0, 0xF3, 0x03, 0xFC, 
    0x3F, 0x00, 0x30, 0x00, 0x00, 0x06, 0x00, 0x80, 0x00, 0x00, 0x1C, 0x00, 0x80, 0x01, 0x00, 0x30, 
    0x00, 0x00, 0x0C, 0x00, 0x00, 0x03, 0x00, 0x60, 0x00, 0x00, 0x0E, 0x00, 0xC0, 0x00, 0xF0, 0xFF, 
    0x00, 0xFE, 0x1F, 0x40, 0x00, 0x02, 0xF8, 0x7F, 0x00, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x80, 0x06, 
    0x00, 0xF8, 0x01, 0xC0, 0xFF, 0x00, 0x7C, 0x3F, 0x80, 0x69, 0x06, 0x30, 0xCD, 0x00, 0x06, 0x18, 
    0xC0, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 
    0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x18, 0xC0, 0x00, 0x03, 0x18, 0x70, 0xF0, 0xFF, 0x0F, 
    0xFE, 0x7F, 0x60, 0x0C, 0x00, 0x0C, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x80, 0x0F, 0x00, 0x70, 0x00, 0x00, 0x10, 0x00, 0xC0, 0x07, 0x00, 0x18, 0x00, 
    0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x0E, 0x00, 0xC0, 0x01, 0x00, 0x10, 0x00, 0x00, 0x07, 0x00, 
    0xE0, 0x00, 0x00, 0x08, 0x00, 0x80, 0x03, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x60, 
    0x00, 0x00, 0x0C, 0x00, 0xF0, 0xFF, 0x00, 0xFE, 0x1F, 0x00, 0x06, 0x00, 0xC0, 0x00, 0x00, 0x18, 
    0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x00, 0x0C, 0x06, 0x80, 0xC1, 0x00, 0xFE, 0xFF, 0xC0, 0xFF, 
    0x1F, 0xC0, 0x60, 0x00, 0x18, 0x0C, 0x00, 0x83, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x20, 0x00, 
    0x00, 0x02, 0x00, 0xC0, 0x00, 0x00, 0x10, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x02, 
    0x80, 0x2D, 0x01, 0xF0, 0xFB, 0x00, 0x6C, 0x1B, 0x00, 0xE4, 0x03, 0x40, 0x7C, 0x00, 0x84, 0x0D, 
    0x00, 0xF0, 0x01, 0x00, 0x00, 0x00, 0x8E, 0x03, 0xE2, 0x73, 0x40, 0x66, 0x18, 0xD0, 0x18, 0x03, 
    0x1A, 0x63, 0x20, 0xE3, 0x0C, 0xC4, 0xF9, 0x00, 0x30, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x1F, 0x00, 0x30, 0x06, 0x00, 0x82, 0x00, 0x00, 0x00, 0x00, 
    0xFF, 0x03, 0x70, 0xE0, 0x00, 0x06, 0x18, 0xC0, 0x00, 0x03, 0xF8, 0x7F, 0x00, 0xFF, 0x0F, 0x60, 
    0x8C, 0x01, 0x8C, 0x31, 0x00, 0x00, 0x00, 0x30, 0xE0, 0x40, 0x06, 0x1E, 0xC8, 0xF0, 0x03, 0x1A, 
    0x67, 0x40, 0x7B, 0x0C, 0xE4, 0x83, 0x81, 0x3C, 0x30, 0x80, 0x01, 0x06, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0xF0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x07, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0xF8, 0x00, 0x00, 0x1E, 0x00, 0xE0, 0x03, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 
    0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x78, 0x00, 
    0x00, 0x0F, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x60, 0x00, 0x00, 0x0C, 0x00, 
    0x80, 0x01, 0x00, 0x30, 0x00, 0x00, 0x06, 0x00, 0xC0, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 
    0x60, 0x00, 0x00, 0x0C, 0x00, 0x80, 0x01, 0x00, 0x30, 0x00, 0x00, 0x06, 0x00, 0xC0, 0x00, 0x00, 
    0x18, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x0C, 0x00, 0x80, 0x01, 0x00, 0x30, 
    0x00, 0x00, 0x06, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xE0, 0x03, 0x00, 0x04, 
    0x00, 0x00, 0x00, 0x00, 0xF0, 0x01, 0x00, 0x38, 0x00, 0x80, 0x01, 0x00, 0xF8, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0xCC, 0x00, 0xC4, 0x19, 0x80, 0x6C, 0x06, 0xA0, 0xC9, 0x00, 0x34, 0x19, 0x40, 0x6E, 
    0x03, 0x88, 0x39, 0x00, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 
    0x00, 0xE0, 0x0E, 0x00, 0x70, 0x00, 0x00, 0x04, 0x00, 0xE0, 0x03, 0x00, 0xFE, 0x00, 0x60, 0x30, 
    0x00, 0x0C, 0x06, 0x80, 0xFF, 0x00, 0xF0, 0x1F, 0x00, 0x36, 0x03, 0xC0, 0x67, 0x00, 0xF0, 0x0C, 
    0x00, 0x00, 0x00, 0x60, 0x30, 0x80, 0x0C, 0x07, 0x90, 0xF9, 0x00, 0xB4, 0x1B, 0x80, 0x3E, 0x03, 
    0xC8, 0x63, 0x00, 0x39, 0x0C, 0x00, 0x83, 0x01, 0x04, 0x00, 0x80, 0x03, 0x00, 0xF6, 0x01, 0xC0, 
    0xF8, 0x00, 0x00, 0xFC, 0x03, 0x80, 0x7F, 0x60, 0x7C, 0x00, 0xEC, 0x03, 0x00, 0x0C, 0x00, 0x80, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB8, 0x7F, 0x00, 
    0xF7, 0x0F, 0x00, 0x00, 0x00, 0xF0, 0x01, 0x00, 0x7F, 0x00, 0x70, 0x1C, 0x80, 0x07, 0x0F, 0xF0, 
    0xE0, 0x01, 0x38, 0x0E, 0x00, 0xC6, 0x00, 0x80, 0x08, 0x00, 0x00, 0x00, 0x00, 0xC6, 0x00, 0xF8, 
    0x1F, 0x80, 0xFF, 0x03, 0x18, 0x63, 0x00, 0x63, 0x0C, 0x60, 0x8C, 0x01, 0x1C, 0x30, 0x00, 0x03, 
    0x06, 0x00, 0x00, 0x00, 0xF0, 0x1F, 0x00, 0xDC, 0x01, 0xC0, 0x60, 0x00, 0x18, 0x0C, 0x00, 0x83, 
    0x01, 0xC0, 0x38, 0x00, 0xFC, 0x07, 0x00, 0x5D, 0x00, 0x02, 0x00, 0xC0, 0xD1, 0x00, 0xF8, 0x1A, 
    0x00, 0x7C, 0x03, 0x00, 0xFE, 0x01, 0xC0, 0x3F, 0x00, 0xBF, 0x01, 0xF0, 0x34, 0x00, 0x86, 0x06, 
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x9F, 0x1F, 
    0xF0, 0xF3, 0x03, 0x00, 0x00, 0x80, 0x77, 0x0C, 0xF0, 0x9F, 0x03, 0x33, 0x63, 0x60, 0xC6, 0x0C, 
    0x8C, 0x99, 0x81, 0x31, 0x33, 0x60, 0xFE, 0x03, 0x88, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x06, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x1F, 0x00, 0x10, 0x04, 0x00, 0x7D, 0x01, 0xA0, 0x28, 0x00, 0x14, 0x05, 0x80, 
    0x94, 0x00, 0x20, 0x08, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x06, 0x00, 0xEC, 
    0x01, 0x80, 0x24, 0x00, 0x90, 0x06, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0xE0, 
    0x03, 0x00, 0xC6, 0x00, 0x40, 0x12, 0x00, 0xF0, 0x01, 0x00, 0x63, 0x00, 0x20, 0x08, 0x00, 0x00, 
    0x00, 0x00, 0x03, 0x00, 0x60, 0x00, 0x00, 0x0C, 0x00, 0x80, 0x01, 0x00, 0x30, 0x00, 0x00, 0x1E, 
    0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x18, 0x00, 0x00, 0x03, 
    0x00, 0x60, 0x00, 0x00, 0x0C, 0x00, 0x80, 0x01, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x03, 
    0x00, 0x82, 0x00, 0xA0, 0x2F, 0x00, 0x54, 0x04, 0x80, 0x9A, 0x00, 0x90, 0x14, 0x00, 0x04, 0x01, 
    0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x80, 0x01, 0x00, 0x30, 0x00, 0x00, 
    0x06, 0x00, 0xC0, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0x00, 0x90, 0x00, 0x00, 0x12, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x30, 0x0C, 0x00, 
    0x86, 0x01, 0xC0, 0x30, 0x00, 0xFF, 0x06, 0xE0, 0xDF, 0x00, 0x60, 0x18, 0x00, 0x0C, 0x03, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x80, 0x0C, 0x00, 0x9C, 0x01, 0x80, 0x39, 0x00, 0xB0, 0x06, 0x00, 0xCC, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x00, 0x60, 0x0C, 0x00, 0xAC, 0x01, 0x80, 0x35, 
    0x00, 0x70, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x60, 0x00, 
    0x00, 0x04, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x00, 0xFE, 0x1F, 0xC0, 0xFF, 
    0x03, 0x00, 0x0C, 0x00, 0x80, 0x01, 0x00, 0x38, 0x00, 0xFC, 0x07, 0x80, 0xFF, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xF0, 0x03, 0x00, 0xFF, 0x00, 0xE0, 0x1F, 0x00, 0xFC, 0x03, 0x80, 0xFF, 0x07, 
    0xF0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 
    0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x40, 0x03, 
    0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x0C, 0x00, 0x80, 
    0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 0xCC, 0x00, 0x80, 0x10, 0x00, 0x10, 
    0x02, 0x00, 0x7E, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x00, 0xC0, 
    0x1D, 0x00, 0xE0, 0x00, 0x00, 0x49, 0x00, 0xE0, 0x0E, 0x00, 0x70, 0x00, 0x00, 0x04, 0x00, 0x02, 
    0x00, 0x40, 0x00, 0x00, 0xFC, 0x08, 0x00, 0xC0, 0x01, 0x00, 0x0E, 0x00, 0x70, 0x0C, 0x00, 0xC3, 
    0x01, 0x00, 0x26, 0x00, 0xC0, 0x0F, 0x00, 0x80, 0x00, 0x08, 0x00, 0x00, 0x01, 0x00, 0xF0, 0x23, 
    0x00, 0x00, 0x07, 0x00, 0x38, 0x00, 0xC0, 0x45, 0x00, 0xCC, 0x0C, 0x00, 0x48, 0x01, 0x00, 0x2F, 
    0x00, 0x00, 0x04, 0x20, 0x01, 0x00, 0x66, 0x00, 0x40, 0x0A, 0x00, 0xF8, 0x11, 0x00, 0x92, 0x03, 
    0x00, 0xDC, 0x00, 0xE0, 0x1C, 0x00, 0x66, 0x02, 0x00, 0xFC, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0xE0, 0x0F, 0x60, 0x8F, 0x01, 0xEC, 0x30, 0x00, 0x00, 0x07, 
    0x00, 0x60, 0x00, 0x00, 0x04, 0x00, 0x40, 0x00, 0x00, 0x0F, 0x04, 0xFC, 0x81, 0xF8, 0x0F, 0xB0, 
    0x8F, 0x01, 0xF4, 0x33, 0x00, 0xF8, 0x07, 0x00, 0xF8, 0x03, 0x00, 0x78, 0x00, 0x00, 0x08, 0x00, 
    0x00, 0x01, 0x00, 0x3C, 0x00, 0xF0, 0x07, 0xE0, 0x3F, 0x80, 0x3E, 0x06, 0xD8, 0xCF, 0x00, 0xE1, 
    0x1F, 0x20, 0xE0, 0x0F, 0x00, 0xE0, 0x01, 0x00, 0x20, 0x00, 0x00, 0x04, 0x00, 0xF0, 0x80, 0xC0, 
    0x1F, 0x90, 0xFF, 0x00, 0xF9, 0x18, 0x60, 0x3F, 0x03, 0x88, 0x7F, 0x00, 0x81, 0x3F, 0x00, 0x80, 
    0x07, 0x00, 0x80, 0x00, 0x00, 0x10, 0x00, 0xC0, 0x03, 0x02, 0x7F, 0x60, 0xFE, 0x03, 0xEC, 0x63, 
    0x80, 0xFD, 0x0C, 0x30, 0xFE, 0x01, 0x02, 0xFE, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x02, 0x00, 0x40, 
    0x00, 0x00, 0x0F, 0x0C, 0xFC, 0x81, 0xF9, 0x0F, 0x80, 0x8F, 0x01, 0xF0, 0x33, 0xC0, 0xF8, 0x07, 
    0x18, 0xF8, 0x03, 0x00, 0x78, 0x00, 0x00, 0x08, 0x00, 0x00, 0x01, 0x00, 0x3C, 0x00, 0xF0, 0x07, 
    0xE6, 0x3F, 0x20, 0x3F, 0x06, 0xFC, 0xCF, 0x00, 0xE0, 0x1F, 0x00, 0xE0, 0x0F, 0x00, 0xE0, 0x01, 
    0x00, 0x20, 0x00, 0x00, 0x04, 0x00, 0xF0, 0x00, 0xC0, 0x1F, 0x00, 0x7F, 0x00, 0xF8, 0x0C, 0x00, 
    0xFF, 0x0F, 0xE0, 0xFF, 0x01, 0x8C, 0x31, 0x80, 0x31, 0x06, 0x00, 0x00, 0x00, 0xF8, 0x07, 0x80, 
    0xFF, 0x01, 0x18, 0x60, 0x00, 0x03, 0x6C, 0x60, 0x80, 0x0F, 0x1C, 0x38, 0x00, 0x87, 0x03, 0xC0, 
    0x30, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x03, 0xF9, 0x7F, 0x20, 0x63, 0x0C, 0x6C, 0x8C, 0x01, 0x8D, 
    0x31, 0x80, 0x31, 0x06, 0x30, 0xC6, 0x00, 0x06, 0x18, 0x00, 0x00, 0x00, 0xF8, 0x7F, 0x00, 0xFF, 
    0x0F, 0x60, 0x8C, 0x01, 0x8D, 0x31, 0xB0, 0x31, 0x06, 0x32, 0xC6, 0x40, 0xC6, 0x18, 0xC0, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0xFF, 0x0F, 0xE8, 0xFF, 0x01, 0x8D, 0x31, 0x90, 0x31, 0x06, 0x36, 0xC6, 
    0x80, 0xC6, 0x18, 0xD0, 0x18, 0x03, 0x18, 0x60, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x81, 0xFD, 0x3F, 
    0xB0, 0x31, 0x06, 0x30, 0xC6, 0x00, 0xC6, 0x18, 0xD8, 0x18, 0x03, 0x1B, 0x63, 0x00, 0x03, 0x0C, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x01, 0x06, 0x32, 0xC0, 0xC0, 0xFE, 0x1F, 0xD0, 0xFF, 0x03, 
    0x18, 0x60, 0x00, 0x03, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x06, 0x30, 0xC0, 0x80, 
    0xFE, 0x1F, 0xD8, 0xFF, 0x03, 0x19, 0x60, 0x20, 0x03, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 
    0x01, 0x06, 0x34, 0xC0, 0x40, 0xFE, 0x1F, 0xD8, 0xFF, 0x03, 0x1A, 0x60, 0x40, 0x03, 0x0C, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0xB0, 0x01, 0x06, 0x36, 0xC0, 0x00, 0xFE, 0x1F, 0xC0, 0xFF, 0x03, 0x1B, 
    0x60, 0x60, 0x03, 0x0C, 0x00, 0x0C, 0x00, 0xFC, 0x3F, 0x80, 0xFF, 0x07, 0x30, 0xC6, 0x00, 0xC6, 
    0x18, 0xC0, 0x00, 0x03, 0x30, 0x30, 0x00, 0xFE, 0x07, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x80, 0xFF, 
    0x07, 0xF4, 0xFF, 0xC0, 0x3C, 0x00, 0x18, 0x3E, 0x00, 0x03, 0x1E, 0x60, 0xFF, 0x0F, 0xE4, 0xFF, 
    0x01, 0xFC, 0x3F, 0x00, 0x00, 0x00, 0xC0, 0x3F, 0x40, 0xFC, 0x0F, 0xC8, 0x00, 0x03, 0x1B, 0x60, 
    0x40, 0x03, 0x0C, 0xE0, 0xC0, 0x01, 0xF8, 0x1F, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x07, 
    0x80, 0xFF, 0x01, 0x18, 0x60, 0x40, 0x03, 0x0C, 0x6C, 0x80, 0x81, 0x1C, 0x38, 0x10, 0xFF, 0x03, 
    0x80, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xF2, 0x3F, 0x40, 0x03, 0x0C, 0x64, 0x80, 0x81, 
    0x0D, 0x30, 0xA0, 0x03, 0x07, 0xE4, 0x7F, 0x00, 0xF0, 0x03, 0x00, 0x00, 0x00, 0xE0, 0x1F, 0x40, 
    0xFE, 0x07, 0x6C, 0x80, 0x81, 0x0D, 0x30, 0xB0, 0x01, 0x06, 0x76, 0xE0, 0x40, 0xFC, 0x0F, 0x00, 
    0x7E, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x03, 0xCC, 0xFF, 0x80, 0x0D, 0x30, 0x80, 0x01, 0x06, 0x30, 
    0xC0, 0xC0, 0x0E, 0x1C, 0x98, 0xFF, 0x01, 0xC0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x70, 
    0x0C, 0x00, 0xD8, 0x00, 0x00, 0x0E, 0x00, 0xE0, 0x01, 0x00, 0x6E, 0x00, 0xE0, 0x18, 0x00, 0x08, 
    0x01, 0x00, 0x00, 0x01, 0xF0, 0x2F, 0x00, 0xFF, 0x03, 0x30, 0xF8, 0x00, 0xC6, 0x19, 0xC0, 0x0E, 
    0x03, 0x78, 0x70, 0x00, 0xFF, 0x07, 0xA0, 0x7F, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x01, 0xF2, 0x7F, 
    0x40, 0x00, 0x1C, 0x18, 0x00, 0x03, 0x02, 0x60, 0x00, 0xFF, 0x0F, 0xE0, 0xFF, 0x00, 0xFC, 0x07, 
    0x00, 0x00, 0x00, 0xF0, 0x3F, 0x00, 0xFE, 0x0F, 0x00, 0x80, 0x03, 0x02, 0x60, 0x60, 0x00, 0x0C, 
    0xE4, 0xFF, 0x81, 0xFC, 0x1F, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x07, 0xD0, 0xFF, 0x01, 
    0x02, 0x70, 0x20, 0x00, 0x0C, 0x0C, 0x80, 0x01, 0xFD, 0x3F, 0xA0, 0xFF, 0x03, 0xF0, 0x1F, 0x00, 
    0x00, 0x00, 0xC0, 0xFF, 0x00, 0xFB, 0x3F, 0x60, 0x00, 0x0E, 0x00, 0x80, 0x01, 0x00, 0x30, 0xB0, 
    0xFF, 0x07, 0xF6, 0x7F, 0x00, 0xFE, 0x03, 0x40, 0x00, 0x00, 0x38, 0x00, 0x00, 0x1F, 0x00, 0x80, 
    0x0F, 0x00, 0xC1, 0x3F, 0x30, 0xF8, 0x07, 0xC2, 0x07, 0x40, 0x3E, 0x00, 0xC0, 0x00, 0x00, 0x08, 
    0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x01, 0xFC, 0x3F, 0x00, 0x86, 0x01, 0xC0, 0x30, 0x00, 0x18, 
    0x06, 0x00, 0xE7, 0x00, 0xC0, 0x0F, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x3F, 0x00, 0xFF, 
    0x07, 0x70, 0x00, 0x00, 0x06, 0x18, 0xC0, 0x1C, 0x03, 0xF8, 0x67, 0x00, 0xCE, 0x0F, 0x00, 0xF0, 
    0x00, 0x00, 0x00, 0x00, 0xD8, 0x03, 0x90, 0xFB, 0x00, 0xB2, 0x19, 0xC0, 0x36, 0x03, 0xD0, 0x66, 
    0x00, 0xF8, 0x0F, 0x00, 0xFE, 0x01, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x7B, 0x00, 0x70, 0x1F, 
    0x00, 0x36, 0x03, 0xD0, 0x66, 0x00, 0xDB, 0x0C, 0x20, 0xFF, 0x01, 0xC4, 0x3F, 0x00, 0x00, 0x04, 
    0x00, 0x00, 0x00, 0x60, 0x0F, 0x80, 0xEE, 0x03, 0xD0, 0x66, 0x00, 0xD9, 0x0C, 0x60, 0x9B, 0x01, 
    0xE8, 0x3F, 0x00, 0xF9, 0x07, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0xEC, 0x01, 0xD0, 0x7D, 0x00, 
    0xDB, 0x0C, 0x60, 0x9B, 0x01, 0x6C, 0x33, 0x80, 0xFD, 0x07, 0x10, 0xFF, 0x00, 0x00, 0x10, 0x00, 
    0x00, 0x00, 0x80, 0x3D, 0x00, 0xBB, 0x0F, 0x60, 0x9B, 0x01, 0x60, 0x33, 0x00, 0x6C, 0x06, 0xB0, 
    0xFF, 0x00, 0xE6, 0x1F, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xB0, 0x07, 0x00, 0xF7, 0x01, 0x6C, 
    0x33, 0x40, 0x6E, 0x06, 0xF8, 0xCD, 0x00, 0xF0, 0x1F, 0x00, 0xFC, 0x03, 0x00, 0x40, 0x00, 0x00, 
    0x03, 0x00, 0xF3, 0x01, 0x60, 0x3F, 0x00, 0x6C, 0x06, 0x80, 0x7F, 0x00, 0xF0, 0x1F, 0x00, 0x36, 
    0x03, 0xC0, 0x67, 0x00, 0xF0, 0x0C, 0x00, 0x00, 0x00, 0x80, 0x0F, 0x00, 0xF8, 0x03, 0x80, 0xE3, 
    0x00, 0x30, 0xD8, 0x00, 0x06, 0x1F, 0xC0, 0x71, 0x00, 0x30, 0x06, 0x00, 0x00, 0x00, 0x80, 0x0F, 
    0x80, 0xF8, 0x03, 0x90, 0xED, 0x00, 0xB6, 0x19, 0x80, 0x36, 0x03, 0xC0, 0x66, 0x00, 0xF0, 0x06, 
    0x00, 0x9C, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x01, 0x00, 0x7F, 0x00, 0xB0, 0x1D, 0x80, 0x36, 0x03, 
    0xD8, 0x66, 0x00, 0xD9, 0x0C, 0x20, 0xDE, 0x00, 0x80, 0x13, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 
    0xE4, 0x0F, 0x80, 0xB6, 0x03, 0xC8, 0x66, 0x00, 0xDB, 0x0C, 0x40, 0x9B, 0x01, 0xC8, 0x1B, 0x00, 
    0x70, 0x02, 0x00, 0x00, 0x00, 0xC0, 0x07, 0xC0, 0xFC, 0x01, 0xD8, 0x76, 0x00, 0xD8, 0x0C, 0x00, 
    0x9B, 0x01, 0x6C, 0x33, 0x80, 0x79, 0x03, 0x00, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC8, 
    0x60, 0x00, 0x19, 0x0C, 0x60, 0xFF, 0x01, 0xE8, 0x3F, 0x00, 0x00, 0x06, 0x00, 0xC0, 0x00, 0x00, 
    0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x0C, 0x00, 0x83, 0x01, 0xE8, 0x3F, 0x80, 0xFD, 
    0x07, 0x10, 0xC0, 0x00, 0x02, 0x18, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x83, 
    0x01, 0x68, 0x30, 0x80, 0xFC, 0x07, 0xB0, 0xFF, 0x00, 0x04, 0x18, 0x80, 0x00, 0x03, 0x00, 0x60, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6C, 0x30, 0x80, 0x0D, 0x06, 0x80, 0xFF, 0x00, 0xF0, 0x1F, 
    0xC0, 0x00, 0x03, 0x18, 0x60, 0x00, 0x00, 0x0C, 0x00, 0x30, 0x00, 0x80, 0x1F, 0x00, 0xF8, 0x07, 
    0xE0, 0xC3, 0x00, 0x6E, 0x18, 0xC0, 0x0D, 0x03, 0xF0, 0x3F, 0x00, 0xFD, 0x07, 0x00, 0x1C, 0x00, 
    0x00, 0x00, 0x00, 0xFC, 0x07, 0xA0, 0xFF, 0x00, 0x26, 0x00, 0xC0, 0x06, 0x00, 0xD8, 0x00, 0x00, 
    0xFB, 0x0F, 0x20, 0xFE, 0x01, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0xE2, 0x0F, 0x40, 
    0x06, 0x03, 0xD8, 0x60, 0x00, 0x1A, 0x0C, 0x00, 0xC7, 0x01, 0xC0, 0x1F, 0x00, 0xE0, 0x00, 0x00, 
    0x00, 0x00, 0xC0, 0x07, 0x00, 0xFC, 0x01, 0xC0, 0x60, 0x00, 0x1A, 0x0C, 0x60, 0x83, 0x01, 0xE4, 
    0x38, 0x80, 0xF8, 0x03, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x90, 0x3F, 0x00, 0x1A, 
    0x0C, 0x20, 0x83, 0x01, 0x6C, 0x30, 0x00, 0x1D, 0x07, 0x20, 0x7F, 0x00, 0x80, 0x03, 0x00, 0x00, 
    0x00, 0x00, 0x1F, 0x00, 0xF2, 0x07, 0x60, 0x83, 0x01, 0x6C, 0x30, 0x80, 0x0D, 0x06, 0xB0, 0xE3, 
    0x00, 0xE2, 0x0F, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x03, 0x60, 0xFE, 0x00, 0x6C, 0x30, 
    0x00, 0x0C, 0x06, 0x80, 0xC1, 0x00, 0x76, 0x1C, 0xC0, 0xFC, 0x01, 0x00, 0x0E, 0x00, 0x00, 0x00, 
    0x00, 0x18, 0x00, 0x00, 0x03, 0x00, 0x60, 0x00, 0xC0, 0x6C, 0x00, 0x98, 0x0D, 0x00, 0x30, 0x00, 
    0x00, 0x06, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0F, 0x00, 0xF8, 0x0F, 0x80, 0xE1, 0x00, 
    0x30, 0x1F, 0x00, 0x1E, 0x03, 0xC0, 0x71, 0x00, 0xF4, 0x07, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 
    0xFC, 0x01, 0x90, 0xFF, 0x00, 0x02, 0x1C, 0xC0, 0x00, 0x03, 0x10, 0x60, 0x00, 0xF8, 0x07, 0x00, 
    0xFF, 0x01, 0xE0, 0x3F, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0xF0, 0x1F, 0x00, 0x80, 0x03, 0x10, 
    0x60, 0x00, 0x03, 0x0C, 0x20, 0xFF, 0x00, 0xE4, 0x3F, 0x00, 0xFC, 0x07, 0x00, 0x00, 0x00, 0xF0, 
    0x07, 0x80, 0xFE, 0x03, 0x10, 0x70, 0x00, 0x01, 0x0C, 0x60, 0x80, 0x01, 0xE8, 0x1F, 0x00, 0xFD, 
    0x07, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0xD8, 0x7F, 0x00, 0x03, 0x0E, 0x00, 0x80, 
    0x01, 0x00, 0x30, 0x80, 0xFD, 0x03, 0xB0, 0xFF, 0x00, 0xF0, 0x1F, 0x00, 0x02, 0x00, 0xC0, 0x01, 
    0x02, 0xF8, 0x60, 0x00, 0x7C, 0x0E, 0x08, 0xFE, 0x80, 0xC1, 0x07, 0x10, 0x3E, 0x00, 0xF2, 0x01, 
    0x00, 0x0E, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x0F, 0xFC, 0xFF, 0x01, 0x08, 0x02, 
    0x80, 0xC1, 0x00, 0x30, 0x18, 0x00, 0xDE, 0x03, 0x80, 0x3F, 0x00, 0xC0, 0x01, 0x00, 0x01, 0x00, 
    0xE0, 0x00, 0x81, 0x7D, 0x30, 0x30, 0x3E, 0x07, 0x00, 0x7F, 0x00, 0xE0, 0x03, 0x18, 0x1F, 0x00, 
    0xFB, 0x00, 0x00, 0x07, 0x00, 0x20, 0x00, 0x00
};

static struct fontDesc_t const Roboto_12_Desc = {
   sizeof(Roboto_12_Bytes),         // total Size
   11,                       // width in pixel
   21,                       // height in pixel
   1,                       // bits per pixel
   0x01,                  // Code of first char
   0xFF,                  // Code of last char
   Roboto_12_Bytes                  // Data
};

#endif