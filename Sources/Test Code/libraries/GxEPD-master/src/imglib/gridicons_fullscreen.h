#if defined(ESP8266) || defined(ESP32)
#include <pgmspace.h>
#else
#include <avr/pgmspace.h>
#endif
// 24 x 24 gridicons_aside
const unsigned char gridicons_fullscreen[] PROGMEM = { /* 0X01,0X01,0XB4,0X00,0X40,0X00, */
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xE1, 
0xFF, 0x87, 0xE0, 0xFF, 0x07, 0xE4, 0x7E, 0x27, 
0xE6, 0x7E, 0x67, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE6, 0x7E, 0x67, 
0xE4, 0x7E, 0x27, 0xE0, 0xFF, 0x07, 0xE1, 0xFF, 
0x87, 0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};
