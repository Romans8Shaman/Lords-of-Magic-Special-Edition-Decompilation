/* HAND-WRITTEN: RLE sprite decode. Control byte c (signed): c < 0 -> -c literal bytes; c >= 0 -> run of c+3 copies of the next byte.
 * Rows param_4, width param_3, dst stride param_5; run state carries across rows. Returns 0. */
#include "lom.h"
#define LOM_SELF_004f41e0 1
int __cdecl rb_004f41e0(signed char *param_1, uchar *param_2, uint param_3, uint param_4, int param_5)
{
  signed char *s = param_1;
  uchar *d = param_2;
  int n = *s++;
  uint w, h = param_4;
  if (n >= 0) n += 3;
  do {
    w = param_3;
    do {
      if (n == 0) { n = *s++; if (n >= 0) n += 3; }
      if (n < 0) { *d++ = (uchar)*s++; n++; }
      else { *d++ = (uchar)*s; if (--n == 0) s++; }
    } while (--w != 0);
    d += param_5 - (int)param_3;
  } while (--h != 0);
  return 0;
}
