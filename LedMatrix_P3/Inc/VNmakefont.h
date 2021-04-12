#ifndef VN_MAKEFONT___H__
#define VN_MAKEFONT___H__

#include "stm32f4xx_hal.h"
#include "P3.h"

#define RED   (Color){0xFF,0,0}
#define GREEN (Color){0,0xFF,0}
#define BLUE  (Color){0,0,0xFF}
#define WHITE (Color){0xFF,0xFF,0xFF}
#define BLACK (Color){0,0,0}

typedef struct
{ 
	uint8_t r;
	uint8_t g;
	uint8_t b;
}Color;
typedef struct
{ 
	const uint8_t *font;
	const uint16_t *font_map;
}Font;


extern const Font Font1;

void put_String(int16_t x,int16_t y,char *s,Font my_font,Color color,Color backcolor);
void put_String_noBackColor(int16_t x,int16_t y,char *s,Font my_font,Color color);

#endif
