/* HAND-WRITTEN: this[1] = (byte)param_2; this[0] = 0; copy param_2*8 bytes param_1 -> this+4 (rep movsd + rep movsb order). Returns param_2*8. */
#include "lom.h"
#define LOM_SELF_00407480 1
uint __thiscall rb_00407480(void *this, uint *param_1, uint param_2)
{
  uint n = param_2 << 3, k;
  uint *d = (uint *)((int)this + 4), *s = param_1;
  *(uchar *)((int)this + 1) = (uchar)param_2;
  *(uchar *)this = 0;
  for (k = n >> 2; k != 0; k--) *(volatile uint *)d++ = *s++;
  for (k = n & 3; k != 0; k--) { *(volatile uchar *)d = *(uchar *)s; d = (uint *)((uchar *)d + 1); s = (uint *)((uchar *)s + 1); }
  return n;
}
