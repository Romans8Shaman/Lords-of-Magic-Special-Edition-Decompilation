/* HAND-WRITTEN: mirrored RLE sprite decode (as 004f41e0 but each row written right-to-left from dst+width).
 * Rows param_4, width param_3, row advance param_5 + width. Returns 0. */
#include "lom.h"
#define LOM_SELF_004f4240 1
int __cdecl rb_004f4240(signed char *param_1, uchar *param_2, uint param_3, uint param_4, int param_5)
{
  signed char *s = param_1;
  uchar *d = param_2 + param_3;
  int n = *s++, adv = param_5 + (int)param_3;
  uint w, h = param_4;
  if (n >= 0) n += 3;
  do {
    w = param_3;
    do {
      if (n == 0) { n = *s++; if (n >= 0) n += 3; }
      if (n < 0) { *--d = (uchar)*s++; n++; }
      else { *--d = (uchar)*s; if (--n == 0) s++; }
    } while (--w != 0);
    d += adv;
  } while (--h != 0);
  return 0;
}
