// Bitmap images adapted from jasperfracture here:
// [http://jasperfracture.com/basic-weather-widget-for-ssd1306-and-esp32/]
//
// X Bitmap Definitions for rain, cloudy, mostly cloudy, clear, sunny, thunderstorms
// Probably be easier and less cluttered to put these in their own file and then include it.
#define rain_bits_width 45
#define rain_bits_height 37
const char rain_bits[] PROGMEM = {
 0x00, 0x00, 0xFE, 0x0F, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x1F, 0x00, 0x00, 
 0x00, 0xC0, 0x0F, 0x7E, 0x00, 0x00, 0x00, 0xE0, 0x41, 0xF8, 0x00, 0x00, 
 0x00, 0xF0, 0x00, 0xE0, 0x01, 0x00, 0x00, 0x70, 0x55, 0xC2, 0x01, 0x00, 
 0x00, 0x78, 0x44, 0x98, 0x03, 0x00, 0xE0, 0x3F, 0x00, 0x82, 0xFF, 0x00, 
 0xF8, 0x5F, 0x00, 0xA4, 0xFF, 0x03, 0xFC, 0x1F, 0x44, 0x01, 0xFF, 0x07, 
 0x1E, 0x19, 0x11, 0x04, 0x87, 0x0F, 0x4E, 0x40, 0x44, 0x20, 0x01, 0x0E, 
 0x47, 0x44, 0x40, 0x00, 0x00, 0x1C, 0x17, 0x11, 0x05, 0x54, 0x44, 0x1C, 
 0x0B, 0x44, 0xA0, 0x01, 0x66, 0x1A, 0x43, 0x00, 0x02, 0x24, 0x00, 0x18, 
 0x07, 0x00, 0x40, 0x02, 0x00, 0x1C, 0x47, 0x22, 0x05, 0x68, 0x64, 0x1E, 
 0x57, 0xAA, 0xA0, 0x02, 0x26, 0x1E, 0x1E, 0x00, 0x02, 0x20, 0x00, 0x0E, 
 0x3C, 0x08, 0x02, 0x80, 0x80, 0x07, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 
 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x80, 0xFE, 0xFF, 0xFF, 0x37, 0x00, 
 0x00, 0xC0, 0xE1, 0xE0, 0x00, 0x00, 0x00, 0xC0, 0xE1, 0x70, 0x00, 0x00, 
 0x00, 0xE0, 0x70, 0x38, 0x00, 0x00, 0x00, 0xE0, 0x30, 0x38, 0x00, 0x00, 
 0x00, 0x70, 0x38, 0x1C, 0x00, 0x00, 0x00, 0x38, 0x1C, 0x0E, 0x00, 0x00, 
 0x00, 0x38, 0x1C, 0x0E, 0x00, 0x00, 0x00, 0x1C, 0x0E, 0x07, 0x00, 0x00, 
 0x00, 0x1C, 0x07, 0x07, 0x00, 0x00, 0x00, 0x0E, 0x87, 0x03, 0x00, 0x00, 
 0x00, 0x87, 0x83, 0x01, 0x00, 0x00, 0x00, 0x07, 0xC3, 0x01, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
 
#define snow_bits_width 37
#define snow_bits_height 41
const char snow_bits[] PROGMEM = {
 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 
 0x0E, 0x00, 0x00, 0x00, 0x20, 0x8E, 0x01, 0x00, 0x00, 0xF0, 0xCE, 0x01, 
 0x00, 0x00, 0xE0, 0xFE, 0x01, 0x00, 0x00, 0xE0, 0xFF, 0x00, 0x00, 0xC0, 
 0x80, 0x3F, 0x60, 0x00, 0xE0, 0x00, 0x1F, 0xE0, 0x00, 0xC0, 0x00, 0x0E, 
 0x60, 0x00, 0xC7, 0x01, 0x0E, 0x70, 0x1C, 0xDF, 0x01, 0x0E, 0x70, 0x1F, 
 0xFE, 0x01, 0x0E, 0xF0, 0x0F, 0xF8, 0x01, 0x0E, 0xF8, 0x03, 0xF0, 0x03, 
 0x0E, 0xF8, 0x00, 0xFC, 0x0F, 0x1F, 0xFE, 0x0F, 0xFF, 0xBF, 0xFF, 0xFF, 
 0x1F, 0x1F, 0xFC, 0xFF, 0x07, 0x1E, 0x00, 0xF0, 0xF1, 0x01, 0x00, 0x00, 
 0xE0, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0xE0, 0xE0, 
 0x00, 0x00, 0x00, 0xF0, 0xE0, 0x00, 0x00, 0x0E, 0xF8, 0xFF, 0x03, 0x0C, 
 0x7F, 0xFF, 0xFF, 0xCF, 0x1F, 0xFE, 0x1F, 0x1F, 0xFF, 0x0F, 0xF0, 0x07, 
 0x0E, 0xFC, 0x01, 0xF8, 0x03, 0x0E, 0xF8, 0x03, 0xFC, 0x01, 0x0E, 0xF0, 
 0x07, 0xDF, 0x01, 0x0E, 0xF0, 0x1F, 0xCF, 0x01, 0x0E, 0x70, 0x1E, 0xC3, 
 0x01, 0x0E, 0x70, 0x18, 0xE0, 0x00, 0x1F, 0x60, 0x00, 0xC0, 0x80, 0x7F, 
 0xE0, 0x00, 0x00, 0xC0, 0x7F, 0x00, 0x00, 0x00, 0xF0, 0xEF, 0x01, 0x00, 
 0x00, 0xF0, 0xEE, 0x01, 0x00, 0x00, 0x20, 0x8E, 0x01, 0x00, 0x00, 0x00, 
 0x0E, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 
 0x00, };
 
#define clear_bits_width 40
#define clear_bits_height 39
const char clear_bits[] PROGMEM = {
 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x10, 0x1C, 0x0C, 0x00, 0x00, 0x38, 
 0x38, 0x0E, 0x00, 0x00, 0x78, 0x1C, 0x0E, 0x00, 0x00, 0x70, 0x38, 0x0E, 
 0x00, 0xC0, 0x70, 0x1C, 0x07, 0x07, 0xC0, 0xE1, 0xFF, 0x87, 0x07, 0xC0, 
 0xE3, 0xFF, 0x87, 0x03, 0x80, 0xFF, 0xC7, 0xFF, 0x01, 0x00, 0x7E, 0x80, 
 0xFE, 0x00, 0x00, 0x3E, 0x08, 0x7C, 0x00, 0x1E, 0x0F, 0x00, 0xF0, 0x38, 
 0x7E, 0x07, 0x00, 0xE0, 0x3E, 0xFC, 0x07, 0x00, 0xE0, 0x3F, 0xE0, 0x83, 
 0x40, 0xC0, 0x07, 0xC0, 0x01, 0x00, 0xC0, 0x03, 0xC0, 0x01, 0x00, 0x80, 
 0x03, 0xC0, 0x01, 0x11, 0x80, 0x03, 0xFF, 0x21, 0x00, 0x88, 0xFF, 0xFF, 
 0x01, 0x00, 0x80, 0xFF, 0xFF, 0x21, 0x00, 0x80, 0xFF, 0xC0, 0x01, 0x00, 
 0x80, 0x03, 0xC0, 0x01, 0x01, 0x80, 0x03, 0xC0, 0x03, 0x20, 0xC0, 0x03, 
 0xF8, 0x03, 0x00, 0xC1, 0x1F, 0xFE, 0x07, 0x00, 0xE0, 0x7F, 0x3E, 0x0F, 
 0x00, 0xF0, 0x7C, 0x06, 0x1E, 0x20, 0x78, 0x20, 0x00, 0x3E, 0x01, 0xFC, 
 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x01, 0x80, 0xF7, 0xFF, 0xCF, 0x03, 0xC0, 
 0xE3, 0xFF, 0x87, 0x07, 0xE0, 0xE1, 0xFF, 0x07, 0x07, 0x40, 0x70, 0x38, 
 0x07, 0x02, 0x00, 0x70, 0x3C, 0x0E, 0x00, 0x00, 0x38, 0x18, 0x0E, 0x00, 
 0x00, 0x38, 0x38, 0x0E, 0x00, 0x00, 0x10, 0x1C, 0x0C, 0x00, 0x00, 0x00, 
 0x18, 0x00, 0x00, };
 
#define mostly_cloudy_bits_width 47
#define mostly_cloudy_bits_height 30
const char mostly_cloudy_bits[] PROGMEM = {
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x73, 0x06, 0x00, 0x00, 0x00, 0x00, 0x67, 0x07, 0x00, 0x00, 0x00, 
 0x70, 0x77, 0x67, 0x00, 0x00, 0x00, 0x60, 0xFE, 0x73, 0x00, 0x00, 0x00, 
 0xE0, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0xC0, 0x03, 0xFE, 0x3F, 0x00, 0x00, 
 0xDE, 0x01, 0xFC, 0xFF, 0x01, 0x00, 0xFC, 0x00, 0xFC, 0xF0, 0x03, 0x00, 
 0x70, 0x00, 0x1E, 0x82, 0x07, 0x00, 0x60, 0x00, 0x0E, 0x00, 0x0E, 0x00, 
 0x7E, 0x00, 0x07, 0x11, 0x0E, 0x00, 0x7E, 0x90, 0x43, 0x80, 0x1D, 0x00, 
 0x70, 0xFE, 0x27, 0x28, 0xFC, 0x07, 0xE0, 0xFF, 0x83, 0x00, 0xF8, 0x0F, 
 0xF8, 0xCF, 0x03, 0x00, 0x7C, 0x3E, 0xFE, 0x01, 0x41, 0x50, 0x08, 0x38, 
 0xEC, 0x40, 0x28, 0x11, 0x40, 0x70, 0xE0, 0x21, 0x80, 0x08, 0x01, 0x74, 
 0x60, 0x28, 0x01, 0x40, 0x88, 0x68, 0x60, 0x00, 0x14, 0x02, 0x12, 0x62, 
 0xE0, 0x00, 0x00, 0x00, 0x04, 0x64, 0xE0, 0x12, 0x82, 0x46, 0x00, 0x70, 
 0xC0, 0x44, 0x44, 0x84, 0x51, 0x70, 0xC0, 0x21, 0x00, 0x00, 0x00, 0x3C, 
 0x80, 0x07, 0x11, 0x00, 0x00, 0x1F, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 
 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x40, 0x66, 0x54, 0x14, 0x00, 
 };
 
#define cloudy_bits_width 46
#define cloudy_bits_height 24
const char cloudy_bits[] PROGMEM = {
 0x00, 0x00, 0xFC, 0x0F, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x3F, 0x00, 0x00, 
 0x00, 0xC0, 0x0F, 0x7C, 0x00, 0x00, 0x00, 0xC0, 0x21, 0xF0, 0x00, 0x00, 
 0x00, 0xE0, 0x10, 0xC0, 0x01, 0x00, 0x00, 0x70, 0x00, 0x80, 0x03, 0x00, 
 0x00, 0x78, 0x00, 0x85, 0x03, 0x00, 0xE0, 0x3F, 0x82, 0x00, 0xFF, 0x00, 
 0xF8, 0x3F, 0x00, 0x10, 0xFF, 0x07, 0x7C, 0x3E, 0x41, 0x00, 0xDE, 0x0F, 
 0x1E, 0x18, 0x00, 0x00, 0x07, 0x1E, 0x0E, 0x40, 0x04, 0x42, 0x01, 0x1C, 
 0x47, 0x08, 0x08, 0x82, 0x00, 0x38, 0x07, 0x00, 0x40, 0x00, 0x82, 0x38, 
 0x13, 0x00, 0x00, 0x00, 0x00, 0x30, 0x03, 0x41, 0x41, 0x10, 0x20, 0x38, 
 0x07, 0x82, 0x80, 0x20, 0x08, 0x3A, 0x17, 0x00, 0x00, 0x00, 0x00, 0x38, 
 0x0E, 0x00, 0x08, 0x20, 0x00, 0x1C, 0x1E, 0x10, 0x10, 0x04, 0x41, 0x1E, 
 0xFC, 0x01, 0x00, 0x00, 0x80, 0x0F, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 
 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x24, 0xA9, 0x49, 0x02, 0x00, };
 
#define partly_cloudy_bits_width 47
#define partly_cloudy_bits_height 30
const char partly_cloudy_bits[] PROGMEM = {
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x73, 0x06, 0x00, 0x00, 0x00, 0x00, 0x67, 0x07, 0x00, 0x00, 0x00, 
 0x70, 0x77, 0x67, 0x00, 0x00, 0x00, 0x60, 0xFE, 0x73, 0x00, 0x00, 0x00, 
 0xE0, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0xC0, 0x03, 0xFE, 0x3F, 0x00, 0x00, 
 0xDE, 0x01, 0xFC, 0xFF, 0x01, 0x00, 0xFC, 0x00, 0xFC, 0xF0, 0x03, 0x00, 
 0x70, 0x00, 0x1E, 0x82, 0x07, 0x00, 0x60, 0x00, 0x0E, 0x00, 0x0E, 0x00, 
 0x7E, 0x00, 0x07, 0x11, 0x0E, 0x00, 0x7E, 0x90, 0x43, 0x80, 0x1D, 0x00, 
 0x70, 0xFE, 0x27, 0x28, 0xFC, 0x07, 0xE0, 0xFF, 0x83, 0x00, 0xF8, 0x0F, 
 0xF8, 0xCF, 0x03, 0x00, 0x7C, 0x3E, 0xFE, 0x01, 0x41, 0x50, 0x08, 0x38, 
 0xEC, 0x40, 0x28, 0x11, 0x40, 0x70, 0xE0, 0x21, 0x80, 0x08, 0x01, 0x74, 
 0x60, 0x28, 0x01, 0x40, 0x88, 0x68, 0x60, 0x00, 0x14, 0x02, 0x12, 0x62, 
 0xE0, 0x00, 0x00, 0x00, 0x04, 0x64, 0xE0, 0x12, 0x82, 0x46, 0x00, 0x70, 
 0xC0, 0x44, 0x44, 0x84, 0x51, 0x70, 0xC0, 0x21, 0x00, 0x00, 0x00, 0x3C, 
 0x80, 0x07, 0x11, 0x00, 0x00, 0x1F, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 
 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x40, 0x66, 0x54, 0x14, 0x00, };
 
#define sunny_bits_width 40
#define sunny_bits_height 39
const char sunny_bits[] PROGMEM = {
 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x10, 0x1C, 0x0C, 0x00, 0x00, 0x38, 
 0x38, 0x0E, 0x00, 0x00, 0x78, 0x1C, 0x0E, 0x00, 0x00, 0x70, 0x38, 0x0E, 
 0x00, 0xC0, 0x70, 0x1C, 0x07, 0x07, 0xC0, 0xE1, 0xFF, 0x87, 0x07, 0xC0, 
 0xE3, 0xFF, 0x87, 0x03, 0x80, 0xFF, 0xC7, 0xFF, 0x01, 0x00, 0x7E, 0x80, 
 0xFE, 0x00, 0x00, 0x3E, 0x08, 0x7C, 0x00, 0x1E, 0x0F, 0x00, 0xF0, 0x38, 
 0x7E, 0x07, 0x00, 0xE0, 0x3E, 0xFC, 0x07, 0x00, 0xE0, 0x3F, 0xE0, 0x83, 
 0x40, 0xC0, 0x07, 0xC0, 0x01, 0x00, 0xC0, 0x03, 0xC0, 0x01, 0x00, 0x80, 
 0x03, 0xC0, 0x01, 0x11, 0x80, 0x03, 0xFF, 0x21, 0x00, 0x88, 0xFF, 0xFF, 
 0x01, 0x00, 0x80, 0xFF, 0xFF, 0x21, 0x00, 0x80, 0xFF, 0xC0, 0x01, 0x00, 
 0x80, 0x03, 0xC0, 0x01, 0x01, 0x80, 0x03, 0xC0, 0x03, 0x20, 0xC0, 0x03, 
 0xF8, 0x03, 0x00, 0xC1, 0x1F, 0xFE, 0x07, 0x00, 0xE0, 0x7F, 0x3E, 0x0F, 
 0x00, 0xF0, 0x7C, 0x06, 0x1E, 0x20, 0x78, 0x20, 0x00, 0x3E, 0x01, 0xFC, 
 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x01, 0x80, 0xF7, 0xFF, 0xCF, 0x03, 0xC0, 
 0xE3, 0xFF, 0x87, 0x07, 0xE0, 0xE1, 0xFF, 0x07, 0x07, 0x40, 0x70, 0x38, 
 0x07, 0x02, 0x00, 0x70, 0x3C, 0x0E, 0x00, 0x00, 0x38, 0x18, 0x0E, 0x00, 
 0x00, 0x38, 0x38, 0x0E, 0x00, 0x00, 0x10, 0x1C, 0x0C, 0x00, 0x00, 0x00, 
 0x18, 0x00, 0x00, };
 
 
#define tstorms_bits_width 43
#define tstorms_bits_height 44
const char tstorms_bits[] PROGMEM = {
 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x07, 0x00, 0x00, 
 0x00, 0x80, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0xE0, 0x83, 0x3E, 0x00, 0x00, 
 0x00, 0xF0, 0x20, 0x7A, 0x00, 0x00, 0x00, 0xF0, 0x09, 0x70, 0x00, 0x00, 
 0x00, 0x38, 0x82, 0xE8, 0x00, 0x00, 0x40, 0x19, 0x20, 0xE2, 0x04, 0x00, 
 0xF0, 0x9F, 0x90, 0xC0, 0x7F, 0x00, 0xFC, 0x1F, 0x02, 0xD9, 0xFF, 0x00, 
 0x7E, 0x9C, 0x0A, 0xC2, 0xE7, 0x01, 0x0E, 0x19, 0x90, 0x90, 0x80, 0x03, 
 0x07, 0x00, 0x20, 0x40, 0xA0, 0x07, 0x57, 0xA4, 0x06, 0x04, 0x06, 0x07, 
 0x4B, 0x25, 0x90, 0x65, 0x00, 0x06, 0x03, 0x00, 0x02, 0x00, 0xA4, 0x06, 
 0x2B, 0x49, 0x90, 0x24, 0x12, 0x07, 0x87, 0x10, 0x09, 0x00, 0x40, 0x07, 
 0x07, 0x00, 0x80, 0x61, 0x09, 0x07, 0x2E, 0x49, 0x14, 0x04, 0xD0, 0x03, 
 0x7C, 0x00, 0x01, 0x80, 0xF0, 0x01, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
 0xE0, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x49, 0x5F, 0x57, 0x02, 0x00, 
 0x00, 0x00, 0x87, 0x03, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x03, 0x00, 0x00, 
 0x00, 0x80, 0xC3, 0x1F, 0x00, 0x00, 0x00, 0x80, 0xC3, 0x1F, 0x00, 0x00, 
 0x00, 0xC0, 0x01, 0x0E, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x07, 0x00, 0x00, 
 0x00, 0xC0, 0x1F, 0x07, 0x00, 0x00, 0x00, 0xE0, 0xBF, 0x03, 0x00, 0x00, 
 0x00, 0xC0, 0xDD, 0x01, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0xEC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 
 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 
 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, };
