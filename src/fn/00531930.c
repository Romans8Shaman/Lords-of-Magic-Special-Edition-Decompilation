/* HAND-WRITTEN: if (*this) convert the 256-entry RGB palette at *this + 0x6c (r,g,b bytes) to 16-bit pixels at this+0xc:
 * px = ((r >> rs) << rl) + ((b >> bs) << bl) + ((g >> gs) << gl), shift counts from DAT_005853ec..00585400 (x86 counts & 31). */
#include "lom.h"
#define LOM_SELF_00531930 1
void __thiscall rb_00531930(void *this)
{
  int i, b = (int)this;
  ushort *d;
  uint v;
  if (*(int *)b == 0) return;
  d = (ushort *)(b + 0xc);
  i = 0;
  do {
    uchar *s = (uchar *)*(int *)b;
    v  = (uint)(ushort)(uchar)(s[i + 0x6c] >> (*(uchar *)0x5853f0 & 31)) << (*(uint *)0x5853ec & 31);
    v += (uint)(ushort)(uchar)(s[i + 0x6e] >> (*(uchar *)0x585400 & 31)) << (*(uint *)0x5853fc & 31);
    v += (uint)(ushort)(uchar)(s[i + 0x6d] >> (*(uchar *)0x5853f8 & 31)) << (*(uint *)0x5853f4 & 31);
    i += 3;
    *d++ = (ushort)v;
  } while (i < 0x300);
}
