#define BvH_width 56
#define BvH_height 64
static unsigned char BvH_bits[] U8G_PROGMEM = {
 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3A, 0x06, 0x00,
 0x00, 0x00, 0x00, 0x00, 0xFE, 0x07, 0x38, 0x00, 0x00, 0x00, 0x80, 0xFF,
 0x1F, 0x7C, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x1F, 0x3C, 0x00, 0x00, 0x00,
 0xC0, 0xFF, 0x3F, 0x04, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x7F, 0x06, 0x00,
 0x00, 0x00, 0xF8, 0xFF, 0x7F, 0x06, 0xC0, 0x01, 0x00, 0xFC, 0xFF, 0x7F,
 0x05, 0x70, 0x01, 0x00, 0xFC, 0xFF, 0xFF, 0x05, 0x1C, 0x01, 0x00, 0xFC,
 0xFF, 0xFF, 0x05, 0x0E, 0x01, 0x00, 0xFC, 0xFF, 0xFF, 0x84, 0x03, 0x01,
 0x00, 0xFF, 0xFF, 0xFF, 0xC4, 0x00, 0x01, 0x00, 0xFC, 0xFF, 0xFF, 0x64,
 0x00, 0x01, 0x00, 0xFF, 0xFF, 0xFF, 0x34, 0x00, 0x01, 0x00, 0xFF, 0xFF,
 0xFF, 0x1C, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0xFF, 0x08, 0x00, 0x01, 0x80,
 0xFF, 0xFF, 0x7F, 0x08, 0x80, 0x01, 0x80, 0xFF, 0xFF, 0x7F, 0x08, 0x80,
 0x00, 0x80, 0xFF, 0xFF, 0x7F, 0x08, 0x80, 0x00, 0x80, 0xFF, 0xFF, 0x7F,
 0x08, 0x84, 0x00, 0x00, 0xFF, 0xFF, 0x3F, 0x08, 0x86, 0x00, 0x60, 0xFF,
 0xFF, 0x3F, 0x88, 0x81, 0x00, 0xE0, 0xFF, 0xFF, 0x3F, 0x08, 0x80, 0x00,
 0xC0, 0xFF, 0xFF, 0x3F, 0x08, 0xC0, 0x00, 0xC0, 0xFF, 0xFF, 0x1F, 0x08,
 0x40, 0x00, 0xE0, 0xFF, 0xFF, 0x1F, 0x08, 0x40, 0x00, 0xC0, 0xFF, 0xFF,
 0x1F, 0x08, 0x40, 0x00, 0xC0, 0xFF, 0xFF, 0x1F, 0x08, 0x40, 0x00, 0x80,
 0xFF, 0xFF, 0x0F, 0x0C, 0x40, 0x00, 0xC0, 0xFF, 0xFF, 0x0F, 0x04, 0x40,
 0x00, 0x00, 0xFF, 0xFF, 0x0F, 0x04, 0x60, 0x00, 0x00, 0xFF, 0xFF, 0x07,
 0x04, 0x20, 0x00, 0x00, 0xFF, 0xFF, 0x07, 0x04, 0x20, 0x00, 0x00, 0xFF,
 0xFF, 0x07, 0x04, 0x20, 0x00, 0x00, 0xFE, 0xFF, 0x07, 0x04, 0x30, 0x00,
 0x00, 0xF2, 0xFF, 0x03, 0x04, 0x10, 0x00, 0x00, 0xF0, 0xFF, 0x03, 0x04,
 0x10, 0x00, 0x00, 0xF2, 0xFF, 0x03, 0x04, 0x18, 0x00, 0xE0, 0xEF, 0xFF,
 0x03, 0x04, 0x08, 0x00, 0xA0, 0x79, 0xFF, 0x01, 0x06, 0x08, 0x00, 0x30,
 0xC1, 0xFF, 0x01, 0x02, 0x0C, 0x00, 0x10, 0x01, 0x7C, 0x01, 0x02, 0x04,
 0x00, 0x18, 0x01, 0x7C, 0x01, 0x02, 0x04, 0x00, 0x08, 0x01, 0x3C, 0x01,
 0x02, 0x06, 0x00, 0x08, 0x03, 0xBC, 0x00, 0x02, 0x02, 0x00, 0x18, 0x02,
 0xBC, 0x00, 0x82, 0x03, 0x00, 0x38, 0x02, 0xBC, 0x3E, 0x7E, 0x00, 0x00,
 0x68, 0x06, 0xBC, 0xC1, 0x02, 0x00, 0x00, 0x48, 0x04, 0xDC, 0x1F, 0x03,
 0x00, 0x00, 0x68, 0x04, 0x7C, 0x70, 0x00, 0x00, 0x00, 0xD8, 0x05, 0x1C,
 0xC0, 0x01, 0x00, 0x00, 0x00, 0x07, 0xCC, 0x3F, 0x03, 0x00, 0x00, 0x00,
 0x06, 0xE6, 0x7F, 0x06, 0x00, 0x00, 0x00, 0xF8, 0xF2, 0xFF, 0x04, 0x00,
 0x00, 0x00, 0x00, 0xFA, 0xFF, 0x09, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
 0xF3, 0x03, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x07, 0xE4, 0x39, 0x00, 0x0F,
 0xFE, 0xFF, 0xFF, 0x37, 0x6A, 0xC0, 0x79, 0x2C, 0xFF, 0xC1, 0x0F, 0x44,
 0x7F, 0xE0, 0x07, 0x3C, 0x00, 0x06, 0x40, 0x04, 0x1F, 0xFC, 0x01, 0x7F,
 0xF0, 0x7F, 0xCC, 0x71, 0x04, 0xFF, 0xC3, 0x31, 0x00, 0x78, 0xC0, 0x07,
 0x00, 0x00, 0x1F, 0x00 };
 
 #define euro_width 23
 #define euro_height 23
 static unsigned char euro_bits[] U8G_PROGMEM = {
   0x00, 0xf8, 0x03, 0x00, 0xfe, 0x0f, 0x80, 0x07, 0x3c, 0xc0, 0x01, 0x70,
   0xe0, 0x00, 0x60, 0x60, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00,
   0x38, 0x00, 0x00, 0xff, 0xff, 0x0f, 0xfe, 0xff, 0x0f, 0x18, 0x00, 0x00,
   0xfe, 0xff, 0x07, 0xff, 0xff, 0x07, 0x38, 0x00, 0x00, 0x30, 0x00, 0x00,
   0x30, 0x00, 0x00, 0x60, 0x00, 0x00, 0xe0, 0x00, 0x20, 0xc0, 0x01, 0x30,
   0x80, 0x07, 0x1c, 0x00, 0xfe, 0x0f, 0x00, 0xf8, 0x01 };
   
 #define fles_width 25
 #define fles_height 64
 static unsigned char fles_bits[] U8G_PROGMEM = {
   0x00, 0xfe, 0x00, 0x00, 0x00, 0xff, 0x01, 0x00, 0x00, 0xff, 0x01, 0x00,
   0x00, 0xff, 0x01, 0x00, 0x00, 0xff, 0x01, 0x00, 0x00, 0xff, 0x01, 0x00,
   0x00, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x80, 0xff, 0x03, 0x00, 0xc0, 0x01, 0x07, 0x00, 0xe0, 0x00, 0x0e, 0x00,
   0x70, 0x00, 0x1c, 0x00, 0x38, 0x00, 0x38, 0x00, 0x18, 0x00, 0x30, 0x00,
   0x8c, 0xff, 0x63, 0x00, 0xcc, 0xff, 0x67, 0x00, 0xe6, 0xff, 0xcf, 0x00,
   0xf6, 0xff, 0xdf, 0x00, 0xf3, 0xff, 0x9f, 0x01, 0xfb, 0xff, 0xbf, 0x01,
   0xfb, 0xff, 0xbf, 0x01, 0xfb, 0xff, 0xbf, 0x01, 0xfb, 0xff, 0xbf, 0x01,
   0xfb, 0xff, 0xbf, 0x01, 0x03, 0x00, 0x80, 0x01, 0xff, 0xff, 0xff, 0x01,
   0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x01,
   0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x01,
   0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x01,
   0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x01,
   0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x01,
   0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x01,
   0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x01,
   0xff, 0xff, 0xff, 0x01, 0x03, 0x00, 0x80, 0x01, 0xfb, 0xff, 0xbf, 0x01,
   0xfb, 0xff, 0xbf, 0x01, 0xfb, 0xff, 0xbf, 0x01, 0xfb, 0xff, 0xbf, 0x01,
   0xfb, 0xff, 0xbf, 0x01, 0xfb, 0xff, 0xbf, 0x01, 0xfb, 0xff, 0xbf, 0x01,
   0xfb, 0xff, 0xbf, 0x01, 0xf3, 0xff, 0x9f, 0x01, 0xf3, 0xff, 0x9f, 0x01,
   0xe6, 0xff, 0xcf, 0x00, 0x0c, 0x00, 0x60, 0x00, 0xf8, 0xff, 0x3f, 0x00,
   0xf0, 0xff, 0x1f, 0x00 };
   
#define scouting_width 56
#define scouting_height 42
static unsigned char scouting_bits[] U8G_PROGMEM = {
   0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x08, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x80, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe,
   0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x10, 0x70, 0x00, 0x00, 0x00,
   0x00, 0x02, 0x10, 0x8c, 0x01, 0x00, 0x00, 0x00, 0x02, 0x20, 0x02, 0x02,
   0x00, 0x00, 0x00, 0x02, 0x20, 0x01, 0x84, 0x00, 0x00, 0x00, 0x04, 0xa0,
   0x00, 0x64, 0x01, 0x00, 0x00, 0x0c, 0x60, 0x00, 0x34, 0x01, 0x00, 0x00,
   0x08, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00, 0x18, 0x00, 0x00, 0x06, 0x01,
   0x00, 0x00, 0x10, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00, 0x0f, 0x00, 0x8f,
   0x01, 0x01, 0x00, 0xc0, 0x00, 0xc0, 0x91, 0x00, 0x01, 0x00, 0x60, 0x00,
   0x60, 0xa0, 0x00, 0x01, 0x00, 0x78, 0x00, 0x30, 0xa0, 0x80, 0x00, 0x00,
   0x7f, 0x00, 0x18, 0xc0, 0x40, 0x00, 0xe0, 0xff, 0x00, 0x0c, 0x03, 0xe0,
   0x07, 0xf8, 0xff, 0x00, 0x84, 0x06, 0x30, 0x08, 0xfe, 0xff, 0x01, 0xdc,
   0x09, 0x08, 0x10, 0xff, 0xff, 0x47, 0xa0, 0x09, 0x00, 0x10, 0xff, 0xff,
   0x3f, 0xa0, 0x09, 0x00, 0x10, 0xce, 0xff, 0x3f, 0x50, 0x09, 0x00, 0x70,
   0x00, 0xfe, 0x23, 0x30, 0x0a, 0xc0, 0xf0, 0x00, 0x7e, 0x60, 0x18, 0x0e,
   0xfc, 0xf8, 0x00, 0x02, 0xc0, 0x0f, 0x00, 0x3e, 0x3c, 0x00, 0x01, 0x00,
   0x0c, 0x00, 0xfe, 0x07, 0x80, 0x00, 0x00, 0x08, 0x00, 0xf8, 0x00, 0x80,
   0x00, 0x00, 0x08, 0x00, 0xc0, 0x00, 0x80, 0x00, 0x00, 0x1e, 0x07, 0x30,
   0x00, 0x00, 0x1f, 0xc0, 0xff, 0xc3, 0x0f, 0x00, 0x00, 0x08, 0xf8, 0xbf,
   0xe3, 0x1f, 0x00, 0x00, 0x18, 0xff, 0xdf, 0xf1, 0x1f, 0x00, 0x00, 0xf0,
   0xff, 0xcf, 0xf8, 0x0f, 0x00, 0x00, 0xe0, 0xff, 0xcf, 0xfc, 0x07, 0x00,
   0x00, 0xe0, 0xff, 0x7f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0xff, 0x7f, 0x1f,
   0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0xe0,
   0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x0c, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };