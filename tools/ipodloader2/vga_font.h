#ifndef _VGA_FONT_H_
#define _VGA_FONT_H_

#define VGA_FONT_WIDTH   8
#define VGA_FONT_HEIGHT 16

unsigned char font8x16[256][16] = {
  {   0,   0,   0,   0,   0,   0,   0,   0,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,   0, 126, 129, 165, 129, 129, 189,    
    153, 129, 129, 126,   0,   0,   0,   0 },
  {   0,   0, 126, 255, 219, 255, 255, 195,    
    231, 255, 255, 126,   0,   0,   0,   0 },
  {   0,   0,   0,   0, 108, 254, 254, 254,    
    254, 124,  56,  16,   0,   0,   0,   0 },
  {   0,   0,   0,   0,  16,  56, 124, 254,    
    124,  56,  16,   0,   0,   0,   0,   0 },
  {   0,   0,   0,  24,  60,  60, 231, 231,    
    231,  24,  24,  60,   0,   0,   0,   0 },
  {   0,   0,   0,  24,  60, 126, 255, 255,    
    126,  24,  24,  60,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,   0,  24,  60,    
     60,  24,   0,   0,   0,   0,   0,   0 },
  { 255, 255, 255, 255, 255, 255, 231, 195,    
    195, 231, 255, 255, 255, 255, 255, 255 },
  {   0,   0,   0,   0,   0,  60, 102,  66,    
     66, 102,  60,   0,   0,   0,   0,   0 },
  { 255, 255, 255, 255, 255, 195, 153, 189,    
    189, 153, 195, 255, 255, 255, 255, 255 },
  {   0,   0,  30,  14,  26,  50, 120, 204,    
    204, 204, 204, 120,   0,   0,   0,   0 },
  {   0,   0,  60, 102, 102, 102, 102,  60,    
     24, 126,  24,  24,   0,   0,   0,   0 },
  {   0,   0,  63,  51,  63,  48,  48,  48,    
     48, 112, 240, 224,   0,   0,   0,   0 },
  {   0,   0, 127,  99, 127,  99,  99,  99,    
     99, 103, 231, 230, 192,   0,   0,   0 },
  {   0,   0,   0,  24,  24, 219,  60, 231,    
     60, 219,  24,  24,   0,   0,   0,   0 },
  {   0, 128, 192, 224, 240, 248, 254, 248,    
    240, 224, 192, 128,   0,   0,   0,   0 },
  {   0,   2,   6,  14,  30,  62, 254,  62,    
     30,  14,   6,   2,   0,   0,   0,   0 },
  {   0,   0,  24,  60, 126,  24,  24,  24,    
    126,  60,  24,   0,   0,   0,   0,   0 },
  {   0,   0, 102, 102, 102, 102, 102, 102,    
    102,   0, 102, 102,   0,   0,   0,   0 },
  {   0,   0, 127, 219, 219, 219, 123,  27,    
     27,  27,  27,  27,   0,   0,   0,   0 },
  {   0, 124, 198,  96,  56, 108, 198, 198,    
    108,  56,  12, 198, 124,   0,   0,   0 },
  {   0,   0,   0,   0,   0,   0,   0,   0,    
    254, 254, 254, 254,   0,   0,   0,   0 },
  {   0,   0,  24,  60, 126,  24,  24,  24,    
    126,  60,  24, 126,   0,   0,   0,   0 },
  {   0,   0,  24,  60, 126,  24,  24,  24,    
     24,  24,  24,  24,   0,   0,   0,   0 },
  {   0,   0,  24,  24,  24,  24,  24,  24,    
     24, 126,  60,  24,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,  24,  12, 254,    
     12,  24,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,  48,  96, 254,    
     96,  48,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,   0, 192, 192,    
    192, 254,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,  40, 108, 254,    
    108,  40,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,  16,  56,  56, 124,    
    124, 254, 254,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0, 254, 254, 124, 124,    
     56,  56,  16,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,   0,   0,   0,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,   0,  24,  60,  60,  60,  24,  24,    
     24,   0,  24,  24,   0,   0,   0,   0 },
  {   0, 102, 102, 102,  36,   0,   0,   0,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0, 108, 108, 254, 108, 108,    
    108, 254, 108, 108,   0,   0,   0,   0 },
  {  24,  24, 124, 198, 194, 192, 124,   6,    
      6, 134, 198, 124,  24,  24,   0,   0 },
  {   0,   0,   0,   0, 194, 198,  12,  24,    
     48,  96, 198, 134,   0,   0,   0,   0 },
  {   0,   0,  56, 108, 108,  56, 118, 220,    
    204, 204, 204, 118,   0,   0,   0,   0 },
  {   0,  48,  48,  48,  96,   0,   0,   0,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,   0,  12,  24,  48,  48,  48,  48,    
     48,  48,  24,  12,   0,   0,   0,   0 },
  {   0,   0,  48,  24,  12,  12,  12,  12,    
     12,  12,  24,  48,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 102,  60, 255,    
     60, 102,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,  24,  24, 126,    
     24,  24,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,   0,   0,   0,    
      0,  24,  24,  24,  48,   0,   0,   0 },
  {   0,   0,   0,   0,   0,   0,   0, 254,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,   0,   0,   0,    
      0,   0,  24,  24,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   2,   6,  12,  24,    
     48,  96, 192, 128,   0,   0,   0,   0 },
  {   0,   0,  56, 108, 198, 198, 214, 214,    
    198, 198, 108,  56,   0,   0,   0,   0 },
  {   0,   0,  24,  56, 120,  24,  24,  24,    
     24,  24,  24, 126,   0,   0,   0,   0 },
  {   0,   0, 124, 198,   6,  12,  24,  48,    
     96, 192, 198, 254,   0,   0,   0,   0 },
  {   0,   0, 124, 198,   6,   6,  60,   6,    
      6,   6, 198, 124,   0,   0,   0,   0 },
  {   0,   0,  12,  28,  60, 108, 204, 254,    
     12,  12,  12,  30,   0,   0,   0,   0 },
  {   0,   0, 254, 192, 192, 192, 252,   6,    
      6,   6, 198, 124,   0,   0,   0,   0 },
  {   0,   0,  56,  96, 192, 192, 252, 198,    
    198, 198, 198, 124,   0,   0,   0,   0 },
  {   0,   0, 254, 198,   6,   6,  12,  24,    
     48,  48,  48,  48,   0,   0,   0,   0 },
  {   0,   0, 124, 198, 198, 198, 124, 198,    
    198, 198, 198, 124,   0,   0,   0,   0 },
  {   0,   0, 124, 198, 198, 198, 126,   6,    
      6,   6,  12, 120,   0,   0,   0,   0 },
  {   0,   0,   0,   0,  24,  24,   0,   0,    
      0,  24,  24,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,  24,  24,   0,   0,    
      0,  24,  24,  48,   0,   0,   0,   0 },
  {   0,   0,   0,   6,  12,  24,  48,  96,    
     48,  24,  12,   6,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 126,   0,   0,    
    126,   0,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,  96,  48,  24,  12,   6,    
     12,  24,  48,  96,   0,   0,   0,   0 },
  {   0,   0, 124, 198, 198,  12,  24,  24,    
     24,   0,  24,  24,   0,   0,   0,   0 },
  {   0,   0,   0, 124, 198, 198, 222, 222,    
    222, 220, 192, 124,   0,   0,   0,   0 },
  {   0,   0,  16,  56, 108, 198, 198, 254,    
    198, 198, 198, 198,   0,   0,   0,   0 },
  {   0,   0, 252, 102, 102, 102, 124, 102,    
    102, 102, 102, 252,   0,   0,   0,   0 },
  {   0,   0,  60, 102, 194, 192, 192, 192,    
    192, 194, 102,  60,   0,   0,   0,   0 },
  {   0,   0, 248, 108, 102, 102, 102, 102,    
    102, 102, 108, 248,   0,   0,   0,   0 },
  {   0,   0, 254, 102,  98, 104, 120, 104,    
     96,  98, 102, 254,   0,   0,   0,   0 },
  {   0,   0, 254, 102,  98, 104, 120, 104,    
     96,  96,  96, 240,   0,   0,   0,   0 },
  {   0,   0,  60, 102, 194, 192, 192, 222,    
    198, 198, 102,  58,   0,   0,   0,   0 },
  {   0,   0, 198, 198, 198, 198, 254, 198,    
    198, 198, 198, 198,   0,   0,   0,   0 },
  {   0,   0,  60,  24,  24,  24,  24,  24,    
     24,  24,  24,  60,   0,   0,   0,   0 },
  {   0,   0,  30,  12,  12,  12,  12,  12,    
    204, 204, 204, 120,   0,   0,   0,   0 },
  {   0,   0, 230, 102, 102, 108, 120, 120,    
    108, 102, 102, 230,   0,   0,   0,   0 },
  {   0,   0, 240,  96,  96,  96,  96,  96,    
     96,  98, 102, 254,   0,   0,   0,   0 },
  {   0,   0, 198, 238, 254, 254, 214, 198,    
    198, 198, 198, 198,   0,   0,   0,   0 },
  {   0,   0, 198, 230, 246, 254, 222, 206,    
    198, 198, 198, 198,   0,   0,   0,   0 },
  {   0,   0, 124, 198, 198, 198, 198, 198,    
    198, 198, 198, 124,   0,   0,   0,   0 },
  {   0,   0, 252, 102, 102, 102, 124,  96,    
     96,  96,  96, 240,   0,   0,   0,   0 },
  {   0,   0, 124, 198, 198, 198, 198, 198,    
    198, 214, 222, 124,  12,  14,   0,   0 },
  {   0,   0, 252, 102, 102, 102, 124, 108,    
    102, 102, 102, 230,   0,   0,   0,   0 },
  {   0,   0, 124, 198, 198,  96,  56,  12,    
      6, 198, 198, 124,   0,   0,   0,   0 },
  {   0,   0, 126, 126,  90,  24,  24,  24,    
     24,  24,  24,  60,   0,   0,   0,   0 },
  {   0,   0, 198, 198, 198, 198, 198, 198,    
    198, 198, 198, 124,   0,   0,   0,   0 },
  {   0,   0, 198, 198, 198, 198, 198, 198,    
    198, 108,  56,  16,   0,   0,   0,   0 },
  {   0,   0, 198, 198, 198, 198, 214, 214,    
    214, 254, 238, 108,   0,   0,   0,   0 },
  {   0,   0, 198, 198, 108, 124,  56,  56,    
    124, 108, 198, 198,   0,   0,   0,   0 },
  {   0,   0, 102, 102, 102, 102,  60,  24,    
     24,  24,  24,  60,   0,   0,   0,   0 },
  {   0,   0, 254, 198, 134,  12,  24,  48,    
     96, 194, 198, 254,   0,   0,   0,   0 },
  {   0,   0,  60,  48,  48,  48,  48,  48,    
     48,  48,  48,  60,   0,   0,   0,   0 },
  {   0,   0,   0, 128, 192, 224, 112,  56,    
     28,  14,   6,   2,   0,   0,   0,   0 },
  {   0,   0,  60,  12,  12,  12,  12,  12,    
     12,  12,  12,  60,   0,   0,   0,   0 },
  {  16,  56, 108, 198,   0,   0,   0,   0,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,   0,   0,   0,    
      0,   0,   0,   0,   0, 255,   0,   0 },
  {   0,  48,  24,  12,   0,   0,   0,   0,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 120,  12, 124,    
    204, 204, 204, 118,   0,   0,   0,   0 },
  {   0,   0, 224,  96,  96, 120, 108, 102,    
    102, 102, 102, 124,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 124, 198, 192,    
    192, 192, 198, 124,   0,   0,   0,   0 },
  {   0,   0,  28,  12,  12,  60, 108, 204,    
    204, 204, 204, 118,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 124, 198, 254,    
    192, 192, 198, 124,   0,   0,   0,   0 },
  {   0,   0,  28,  54,  50,  48, 120,  48,    
     48,  48,  48, 120,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 118, 204, 204,    
    204, 204, 204, 124,  12, 204, 120,   0 },
  {   0,   0, 224,  96,  96, 108, 118, 102,    
    102, 102, 102, 230,   0,   0,   0,   0 },
  {   0,   0,  24,  24,   0,  56,  24,  24,    
     24,  24,  24,  60,   0,   0,   0,   0 },
  {   0,   0,   6,   6,   0,  14,   6,   6,    
      6,   6,   6,   6, 102, 102,  60,   0 },
  {   0,   0, 224,  96,  96, 102, 108, 120,    
    120, 108, 102, 230,   0,   0,   0,   0 },
  {   0,   0,  56,  24,  24,  24,  24,  24,    
     24,  24,  24,  60,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 236, 254, 214,    
    214, 214, 214, 198,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 220, 102, 102,    
    102, 102, 102, 102,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 124, 198, 198,    
    198, 198, 198, 124,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 220, 102, 102,    
    102, 102, 102, 124,  96,  96, 240,   0 },
  {   0,   0,   0,   0,   0, 118, 204, 204,    
    204, 204, 204, 124,  12,  12,  30,   0 },
  {   0,   0,   0,   0,   0, 220, 118, 102,    
     96,  96,  96, 240,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 124, 198,  96,    
     56,  12, 198, 124,   0,   0,   0,   0 },
  {   0,   0,  16,  48,  48, 252,  48,  48,    
     48,  48,  54,  28,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 204, 204, 204,    
    204, 204, 204, 118,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 198, 198, 198,    
    198, 198, 108,  56,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 198, 198, 214,    
    214, 214, 254, 108,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 198, 108,  56,    
     56,  56, 108, 198,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 198, 198, 198,    
    198, 198, 198, 126,   6,  12, 248,   0 },
  {   0,   0,   0,   0,   0, 254, 204,  24,    
     48,  96, 198, 254,   0,   0,   0,   0 },
  {   0,   0,  14,  24,  24,  24, 112,  24,    
     24,  24,  24,  14,   0,   0,   0,   0 },
  {   0,   0,  24,  24,  24,  24,  24,  24,    
     24,  24,  24,  24,   0,   0,   0,   0 },
  {   0,   0, 112,  24,  24,  24,  14,  24,    
     24,  24,  24, 112,   0,   0,   0,   0 },
  {   0, 118, 220,   0,   0,   0,   0,   0,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,  16,  56, 108, 198,    
    198, 198, 254,   0,   0,   0,   0,   0 },
  {   0,   0,  60, 102, 194, 192, 192, 192,    
    192, 194, 102,  60,  24, 112,   0,   0 },
  {   0,   0, 204,   0,   0, 204, 204, 204,    
    204, 204, 204, 118,   0,   0,   0,   0 },
  {   0,  12,  24,  48,   0, 124, 198, 254,    
    192, 192, 198, 124,   0,   0,   0,   0 },
  {   0,  16,  56, 108,   0, 120,  12, 124,    
    204, 204, 204, 118,   0,   0,   0,   0 },
  {   0,   0, 204,   0,   0, 120,  12, 124,    
    204, 204, 204, 118,   0,   0,   0,   0 },
  {   0,  96,  48,  24,   0, 120,  12, 124,    
    204, 204, 204, 118,   0,   0,   0,   0 },
  {   0,  56, 108,  56,   0, 120,  12, 124,    
    204, 204, 204, 118,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 124, 198, 192,    
    192, 192, 198, 124,  24, 112,   0,   0 },
  {   0,  16,  56, 108,   0, 124, 198, 254,    
    192, 192, 198, 124,   0,   0,   0,   0 },
  {   0,   0, 198,   0,   0, 124, 198, 254,    
    192, 192, 198, 124,   0,   0,   0,   0 },
  {   0,  96,  48,  24,   0, 124, 198, 254,    
    192, 192, 198, 124,   0,   0,   0,   0 },
  {   0,   0, 102,   0,   0,  56,  24,  24,    
     24,  24,  24,  60,   0,   0,   0,   0 },
  {   0,  24,  60, 102,   0,  56,  24,  24,    
     24,  24,  24,  60,   0,   0,   0,   0 },
  {   0,  96,  48,  24,   0,  56,  24,  24,    
     24,  24,  24,  60,   0,   0,   0,   0 },
  {   0, 198,   0,  16,  56, 108, 198, 198,    
    254, 198, 198, 198,   0,   0,   0,   0 },
  {  56, 108,  56,  16,  56, 108, 198, 198,    
    254, 198, 198, 198,   0,   0,   0,   0 },
  {  12,  24,   0, 254, 102,  98, 104, 120,    
    104,  98, 102, 254,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 236,  54,  54,    
    126, 216, 216, 110,   0,   0,   0,   0 },
  {   0,   0,  62, 108, 204, 204, 254, 204,    
    204, 204, 204, 206,   0,   0,   0,   0 },
  {   0,  16,  56, 108,   0, 124, 198, 198,    
    198, 198, 198, 124,   0,   0,   0,   0 },
  {   0,   0, 198,   0,   0, 124, 198, 198,    
    198, 198, 198, 124,   0,   0,   0,   0 },
  {   0,  96,  48,  24,   0, 124, 198, 198,    
    198, 198, 198, 124,   0,   0,   0,   0 },
  {   0,  48, 120, 204,   0, 204, 204, 204,    
    204, 204, 204, 118,   0,   0,   0,   0 },
  {   0,  96,  48,  24,   0, 204, 204, 204,    
    204, 204, 204, 118,   0,   0,   0,   0 },
  {   0,   0, 198,   0,   0, 198, 198, 198,    
    198, 198, 198, 126,   6,  12, 120,   0 },
  {   0, 198,   0, 124, 198, 198, 198, 198,    
    198, 198, 198, 124,   0,   0,   0,   0 },
  {   0, 198,   0, 198, 198, 198, 198, 198,    
    198, 198, 198, 124,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 124, 206, 222,    
    246, 230, 198, 124,   0,   0,   0,   0 },
  {   0,  56, 108, 100,  96, 240,  96,  96,    
     96,  96, 230, 252,   0,   0,   0,   0 },
  {   0,   4, 124, 206, 206, 214, 214, 214,    
    214, 230, 230, 124,  64,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 198, 108,  56,    
     56, 108, 198,   0,   0,   0,   0,   0 },
  {   0,  14,  27,  24,  24,  24, 126,  24,    
     24,  24, 216, 112,   0,   0,   0,   0 },
  {   0,  24,  48,  96,   0, 120,  12, 124,    
    204, 204, 204, 118,   0,   0,   0,   0 },
  {   0,  12,  24,  48,   0,  56,  24,  24,    
     24,  24,  24,  60,   0,   0,   0,   0 },
  {   0,  24,  48,  96,   0, 124, 198, 198,    
    198, 198, 198, 124,   0,   0,   0,   0 },
  {   0,  24,  48,  96,   0, 204, 204, 204,    
    204, 204, 204, 118,   0,   0,   0,   0 },
  {   0,   0, 118, 220,   0, 220, 102, 102,    
    102, 102, 102, 102,   0,   0,   0,   0 },
  { 118, 220,   0, 198, 230, 246, 254, 222,    
    206, 198, 198, 198,   0,   0,   0,   0 },
  {   0,   0,  60, 108, 108,  62,   0, 126,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,   0,  56, 108, 108,  56,   0, 124,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,   0,  48,  48,   0,  48,  48,  96,    
    192, 198, 198, 124,   0,   0,   0,   0 },
  {   0,   0, 124, 130, 178, 170, 178, 170,    
    170, 130, 124,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,   0, 254,   6,    
      6,   6,   6,   0,   0,   0,   0,   0 },
  {   0,  96, 224,  98, 102, 108,  24,  48,    
     96, 220, 134,  12,  24,  62,   0,   0 },
  {   0,  96, 224,  98, 102, 108,  24,  48,    
    102, 206, 154,  63,   6,   6,   0,   0 },
  {   0,   0,  24,  24,   0,  24,  24,  24,    
     60,  60,  60,  24,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,  54, 108, 216,    
    108,  54,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 216, 108,  54,    
    108, 216,   0,   0,   0,   0,   0,   0 },
  {  17,  68,  17,  68,  17,  68,  17,  68,    
     17,  68,  17,  68,  17,  68,  17,  68 },
  {  85, 170,  85, 170,  85, 170,  85, 170,    
     85, 170,  85, 170,  85, 170,  85, 170 },
  { 221, 119, 221, 119, 221, 119, 221, 119,    
    221, 119, 221, 119, 221, 119, 221, 119 },
  {  24,  24,  24,  24,  24,  24,  24,  24,    
     24,  24,  24,  24,  24,  24,  24,  24 },
  {  24,  24,  24,  24,  24,  24,  24, 248,    
     24,  24,  24,  24,  24,  24,  24,  24 },
  {  96, 192,  16,  56, 108, 198, 198, 254,    
    198, 198, 198, 198,   0,   0,   0,   0 },
  { 124, 198,  16,  56, 108, 198, 198, 254,    
    198, 198, 198, 198,   0,   0,   0,   0 },
  {  12,   6,  16,  56, 108, 198, 198, 254,    
    198, 198, 198, 198,   0,   0,   0,   0 },
  {   0,   0, 124, 130, 154, 162, 162, 162,    
    154, 130, 124,   0,   0,   0,   0,   0 },
  {  54,  54,  54,  54,  54, 246,   6, 246,    
     54,  54,  54,  54,  54,  54,  54,  54 },
  {  54,  54,  54,  54,  54,  54,  54,  54,    
     54,  54,  54,  54,  54,  54,  54,  54 },
  {   0,   0,   0,   0,   0, 254,   6, 246,    
     54,  54,  54,  54,  54,  54,  54,  54 },
  {  54,  54,  54,  54,  54, 246,   6, 254,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,   0,  24,  24, 124, 198, 192, 192,    
    198, 124,  24,  24,   0,   0,   0,   0 },
  {   0,   0,   0, 102, 102,  60,  24, 126,    
     24, 126,  24,  24,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,   0,   0, 248,    
     24,  24,  24,  24,  24,  24,  24,  24 },
  {  24,  24,  24,  24,  24,  24,  24,  31,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {  24,  24,  24,  24,  24,  24,  24, 255,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,   0,   0, 255,    
     24,  24,  24,  24,  24,  24,  24,  24 },
  {  24,  24,  24,  24,  24,  24,  24,  31,    
     24,  24,  24,  24,  24,  24,  24,  24 },
  {   0,   0,   0,   0,   0,   0,   0, 255,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {  24,  24,  24,  24,  24,  24,  24, 255,    
     24,  24,  24,  24,  24,  24,  24,  24 },
  {   0,   0, 118, 220,   0, 120,  12, 124,    
    204, 204, 204, 118,   0,   0,   0,   0 },
  { 118, 220,   0,  56, 108, 198, 198, 254,    
    198, 198, 198, 198,   0,   0,   0,   0 },
  {  54,  54,  54,  54,  54,  55,  48,  63,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,  63,  48,  55,    
     54,  54,  54,  54,  54,  54,  54,  54 },
  {  54,  54,  54,  54,  54, 247,   0, 255,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 255,   0, 247,    
     54,  54,  54,  54,  54,  54,  54,  54 },
  {  54,  54,  54,  54,  54,  55,  48,  55,    
     54,  54,  54,  54,  54,  54,  54,  54 },
  {   0,   0,   0,   0,   0, 255,   0, 255,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {  54,  54,  54,  54,  54, 247,   0, 247,    
     54,  54,  54,  54,  54,  54,  54,  54 },
  {   0,   0,   0,   0, 198, 124, 198, 198,    
    198, 198, 124, 198,   0,   0,   0,   0 },
  {   0,   0,  52,  24,  44,   6,  62, 102,    
    102, 102, 102,  60,   0,   0,   0,   0 },
  {   0,   0, 248, 108, 102, 102, 246, 102,    
    102, 102, 108, 248,   0,   0,   0,   0 },
  {  56, 108,   0, 254, 102,  98, 104, 120,    
    104,  98, 102, 254,   0,   0,   0,   0 },
  {   0, 198,   0, 254, 102,  98, 104, 120,    
    104,  98, 102, 254,   0,   0,   0,   0 },
  {  48,  24,   0, 254, 102,  98, 104, 120,    
    104,  98, 102, 254,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,  56,  24,  24,    
     24,  24,  24,  60,   0,   0,   0,   0 },
  {  12,  24,   0,  60,  24,  24,  24,  24,    
     24,  24,  24,  60,   0,   0,   0,   0 },
  {  60, 102,   0,  60,  24,  24,  24,  24,    
     24,  24,  24,  60,   0,   0,   0,   0 },
  {   0, 102,   0,  60,  24,  24,  24,  24,    
     24,  24,  24,  60,   0,   0,   0,   0 },
  {  24,  24,  24,  24,  24,  24,  24, 248,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,   0,   0,  31,    
     24,  24,  24,  24,  24,  24,  24,  24 },
  { 255, 255, 255, 255, 255, 255, 255, 255,    
    255, 255, 255, 255, 255, 255, 255, 255 },
  {   0,   0,   0,   0,   0,   0,   0, 255,    
    255, 255, 255, 255, 255, 255, 255, 255 },
  {   0,  24,  24,  24,  24,  24,   0,   0,    
     24,  24,  24,  24,  24,   0,   0,   0 },
  {  48,  24,   0,  60,  24,  24,  24,  24,    
     24,  24,  24,  60,   0,   0,   0,   0 },
  { 255, 255, 255, 255, 255, 255, 255,   0,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {  24,  48,   0, 124, 198, 198, 198, 198,    
    198, 198, 198, 124,   0,   0,   0,   0 },
  {   0,   0, 120, 204, 204, 204, 216, 204,    
    198, 198, 198, 204,   0,   0,   0,   0 },
  {  56, 108,   0, 124, 198, 198, 198, 198,    
    198, 198, 198, 124,   0,   0,   0,   0 },
  {  48,  24,   0, 124, 198, 198, 198, 198,    
    198, 198, 198, 124,   0,   0,   0,   0 },
  {   0,   0, 118, 220,   0, 124, 198, 198,    
    198, 198, 198, 124,   0,   0,   0,   0 },
  { 118, 220,   0, 124, 198, 198, 198, 198,    
    198, 198, 198, 124,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0, 102, 102, 102,    
    102, 102, 102, 124,  96,  96, 192,   0 },
  {   0,   0, 224,  96,  96, 124, 102, 102,    
    102, 102, 102, 124,  96,  96, 240,   0 },
  {   0,   0, 240,  96, 124, 102, 102, 102,    
    102, 124,  96, 240,   0,   0,   0,   0 },
  {  24,  48,   0, 198, 198, 198, 198, 198,    
    198, 198, 198, 124,   0,   0,   0,   0 },
  {  56, 108,   0, 198, 198, 198, 198, 198,    
    198, 198, 198, 124,   0,   0,   0,   0 },
  {  48,  24,   0, 198, 198, 198, 198, 198,    
    198, 198, 198, 124,   0,   0,   0,   0 },
  {   0,  12,  24,  48,   0, 198, 198, 198,    
    198, 198, 198, 126,   6,  12, 248,   0 },
  {  12,  24,   0, 102, 102, 102, 102,  60,    
     24,  24,  24,  60,   0,   0,   0,   0 },
  {   0, 255,   0,   0,   0,   0,   0,   0,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,  12,  24,  48,   0,   0,   0,   0,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,   0,   0, 254,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,  24,  24, 126,  24,    
     24,   0,   0, 126,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,   0,   0,   0,    
      0,   0,   0,   0, 255,   0, 255,   0 },
  {   0, 224,  48,  98,  54, 236,  24,  48,    
    102, 206, 154,  63,   6,   6,   0,   0 },
  {   0,   0, 127, 219, 219, 219, 123,  27,    
     27,  27,  27,  27,   0,   0,   0,   0 },
  {   0, 124, 198,  96,  56, 108, 198, 198,    
    108,  56,  12, 198, 124,   0,   0,   0 },
  {   0,   0,   0,   0,   0,  24,   0, 126,    
      0,  24,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,   0,   0,   0,    
      0,   0,   0,  24,  12, 120,   0,   0 },
  {   0,  56, 108, 108,  56,   0,   0,   0,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0, 198,   0,   0,   0,   0,   0,   0,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,   0,   0,  24,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,  24,  56,  24,  24,  24,  60,   0,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0, 124,   6,  60,   6,   6, 124,   0,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,  60, 102,  12,  24,  50, 126,   0,    
      0,   0,   0,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0, 126, 126, 126, 126,    
    126, 126, 126,   0,   0,   0,   0,   0 },
  {   0,   0,   0,   0,   0,   0,   0,   0,    
      0,   0,   0,   0,   0,   0,   0,   0 }};

#endif
