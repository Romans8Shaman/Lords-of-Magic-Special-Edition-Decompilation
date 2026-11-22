/* HAND-WRITTEN: 4-bit RLE decode through a 16-entry LUT: control c < 0 -> -c literal bytes, c >= 0 -> c+3 repeats of the next byte;
 * every source byte expands to 2 output bytes (lut[lo nibble], lut[hi nibble]); until dst >= dst + param_3. Returns 0. */
#include "lom.h"
#define LOM_SELF_004f49f0 1
int __cdecl rb_004f49f0(signed char *param_1, uchar *param_2, uint param_3, uchar *param_4)
{
  signed char *s = param_1;
  uchar *d = param_2, *end = param_2 + param_3;
  int c;
  uint b;
  do {
    c = *s++;
    if (c < 0) {
      do { b = (uchar)*s++; d[0] = param_4[b & 0xf]; d[1] = param_4[b >> 4]; d += 2; } while (++c != 0);
    } else {
      b = (uchar)*s; c += 3;
      do { d[0] = param_4[b & 0xf]; d[1] = param_4[b >> 4]; d += 2; } while (--c != 0);
      s++;
    }
  } while (d < end);
  return 0;
}
