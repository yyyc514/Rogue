#include <Arduino.h>
#include <Sprites.h>
#include <Print.h>
#include "Font5x7.h"

#define FONT5x7_WIDTH 5
#define FONT5x7_HEIGHT 8


const uint8_t PROGMEM font_images[] = {
5, 8,

0x00, 0x00, 0x00, 0x00, 0x00,	//' '
0x00,0x00,0x6F,0x6F,0x00,	//'!'
0x00, 0x07, 0x00, 0x07, 0x00,	//'"'
0x14, 0x7F, 0x14, 0x7F, 0x14,	//'#'
0x04,0x2E,0x6B,0x3A,0x10,	//'$'
0x23, 0x13, 0x08, 0x64, 0x62,	//'%'
0x36,0x7F,0x49,0x36,0x50,	//'&'
0x00, 0x08, 0x07, 0x03, 0x00,	//'''
0x00,0x1C,0x3E,0x41,0x00,	//'('
0x41,0x3E,0x1C,0x00,0x00,	//')'
0x2A, 0x1C, 0x7F, 0x1C, 0x2A,	//'*'
0x08, 0x08, 0x3E, 0x08, 0x08,	//'+'
0x00, 0x80, 0x70, 0x30, 0x00,	//','
0x08, 0x08, 0x08, 0x08, 0x08,	//'-'
0x00,0x00,0x30,0x30,0x00,	//'.'
0x20, 0x10, 0x08, 0x04, 0x02,	//'/'
0x3E,0x7F,0x49,0x7F,0x3E,	//'0'
0x00,0x42,0x7F,0x7F,0x40,	//'1'
0x62,0x71,0x59,0x4F,0x46,	//'2'
0x22,0x41,0x49,0x7F,0x36,	//'3'
0x18,0x14,0x7E,0x7F,0x10,	//'4'
0x2F,0x4F,0x49,0x79,0x31,	//'5'
0x3E,0x7F,0x49,0x79,0x30,	//'6'
0x01,0x61,0x79,0x1F,0x07,	//'7'
0x36,0x7F,0x49,0x7F,0x36,	//'8'
0x06,0x4F,0x49,0x7F,0x3E,	//'9'
0x00,0x00,0x36,0x36,0x00,	//':'
0x00, 0x40, 0x34, 0x00, 0x00,	//';'
0x00, 0x08, 0x14, 0x22, 0x41,	//'<'
0x14, 0x14, 0x14, 0x14, 0x14,	//'='
0x00, 0x41, 0x22, 0x14, 0x08,	//'>'
0x00,0x02,0x69,0x6F,0x06,	//'?'
0x3E,0x7F,0x41,0x59,0x5E,	//'@'
0x7E,0x7F,0x09,0x7F,0x7E,	//'A'
0x7F,0x7F,0x49,0x7F,0x36,	//'B'
0x3E,0x7F,0x41,0x41,0x22,	//'C'
0x7F,0x7F,0x41,0x7F,0x3E,	//'D'
0x7F,0x7F,0x49,0x49,0x41,	//'E'
0x7F,0x7F,0x09,0x09,0x01,	//'F'
0x3E,0x7F,0x41,0x79,0x7A,	//'G'
0x7F,0x7F,0x08,0x7F,0x7F,	//'H'
0x00,0x41,0x7F,0x7F,0x41,	//'I'
0x41,0x41,0x7F,0x3F,0x01,	//'J'
0x7F,0x7F,0x1C,0x36,0x63,	//'K'
0x7F,0x7F,0x40,0x40,0x40,	//'L'
0x7F,0x7E,0x0C,0x7E,0x7F,	//'M'
0x7F,0x7E,0x1C,0x3F,0x7F,	//'N'
0x3E,0x7F,0x41,0x7F,0x3E,	//'O'
0x7F,0x7F,0x09,0x0F,0x06,	//'P'
0x3E,0x7F,0x61,0x3F,0x5E,	//'Q'
0x7F,0x7F,0x09,0x7F,0x76,	//'R'
0x26,0x4F,0x49,0x79,0x32,	//'S'
0x00,0x01,0x7F,0x7F,0x01,	//'T'
0x3F,0x7F,0x40,0x7F,0x3F,	//'U'
0x1F,0x3F,0x60,0x3F,0x1F,	//'V'
0x7F,0x3F,0x10,0x3F,0x7F,	//'W'
0x77,0x7F,0x08,0x7F,0x77,	//'X'
0x03,0x7F,0x78,0x07,0x03,	//'Y'
0x71,0x79,0x4D,0x47,0x43,	//'Z'
0x00,0x7F,0x7F,0x41,0x41,	//'['
0x02, 0x04, 0x08, 0x10, 0x20,	//'\'
0x41,0x41,0x7F,0x7F,0x00,	//']'
0x04, 0x02, 0x01, 0x02, 0x04,	//'^'
0x40, 0x40, 0x40, 0x40, 0x40,	//'_'
0x00, 0x03, 0x07, 0x08, 0x00,	//'`'
0x20,0x74,0x54,0x7C,0x78,	//'a'
0x7F,0x7F,0x44,0x7C,0x38,	//'b'
0x38,0x7C,0x44,0x44,0x28,	//'c'
0x38,0x7C,0x44,0x7F,0x7F,	//'d'
0x38,0x7C,0x54,0x5C,0x18,	//'e'
0x00,0x04,0x7E,0x7F,0x05,	//'f'
0x18,0xBC,0xA4,0xFC,0x7C,	//'g'
0x7F,0x7F,0x08,0x78,0x70,	//'h'
0x00,0x44,0x7D,0x7D,0x40,	//'i'
0x80,0x80,0xFD,0x7D,0x00,	//'j'
0x7F,0x7F,0x38,0x6C,0x44,	//'k'
0x00,0x41,0x7F,0x7F,0x40,	//'l'
0x7C,0x78,0x10,0x78,0x7C,	//'m'
0x7C,0x7C,0x04,0x7C,0x78,	//'n'
0x38,0x7C,0x44,0x7C,0x38,	//'o'
0xFC,0xFC,0x24,0x3C,0x18,	//'p'
0x18,0x3C,0x24,0xFC,0xFC,	//'q'
0x7C,0x7C,0x08,0x04,0x04,	//'r'
0x08,0x5C,0x54,0x74,0x20,	//'s'
0x00,0x04,0x7E,0x7E,0x04,	//'t'
0x3C,0x7C,0x40,0x7C,0x7C,	//'u'
0x1C,0x3C,0x40,0x3C,0x1C,	//'v'
0x7C,0x3C,0x10,0x3C,0x7C,	//'w'
0x6C,0x7C,0x10,0x7C,0x6C,	//'x'
0x1C,0xBC,0xA0,0xFC,0x7C,	//'y'
0x44,0x64,0x74,0x5C,0x4C,	//'z'
0x00,0x08,0x3E,0x77,0x41,	//'{'
0x00, 0x00, 0x77, 0x00, 0x00,	//'|'
0x41,0x77,0x3E,0x08,0x00,	//'}'
0x02, 0x01, 0x02, 0x04, 0x02	//'~'

};

/*
const uint8_t PROGMEM back_ground[] = {
6, 8,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};
*/

Font5x7::Font5x7(uint8_t lineSpacing) {

  _lineHeight = lineSpacing;
  _letterSpacing = 1;

  _cursorX = _cursorY = _baseX = 0;
  _textColor = 1;

}

size_t Font5x7::write(uint8_t c) {

  if (c == '\n')      { _cursorX = _baseX; _cursorY += _lineHeight; }
  else {

    printChar(c, _cursorX, _cursorY);
    _cursorX += FONT5x7_WIDTH + _letterSpacing;

  }

  return 1;

}

void Font5x7::printChar(const char c, const int8_t x, int8_t y) {

  int8_t idx = -1;

  ++y;

  switch (c) {
    
    case 32 ... 126:
      idx = c - 32;
      break;
      
//    case 123:
//      idx = 63;
//      break;
      
//    case 124:
//      idx = 64;
//      break;

//    case 125:
//      idx = 65;
//      break;

  }

  if (idx > -1) {
    
//    if (_textColor == WHITE) {
      SpritesB::drawOverwrite(x, y, font_images, idx);
//    }
//    else {
//      Sprites::drawOverwrite(x, y, back_ground, 0);
//      SpritesB::drawErase(x, y, font_images, idx);
//    }

  }

}

void Font5x7::setCursor(const int8_t x, const int8_t y) {
  _cursorX = _baseX = x;
  _cursorY = y;
}

void Font5x7::setTextColor(const uint8_t color){
  _textColor = color;
}

void Font5x7::setHeight(const uint8_t color){
  _lineHeight = color;
}
