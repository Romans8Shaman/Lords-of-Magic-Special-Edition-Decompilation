/* HAND-WRITTEN: this->+0xa0 = param_2; copy param_2*8 bytes param_1 -> this (rep movsd + rep movsb order). Returns param_2*8. */
#include "lom.h"
#define LOM_SELF_00498b40 1
uint __thiscall rb_00498b40(void *this, uint *param_1, uint param_2)
{
  uint n = param_2 * 8, k;
  uint *d = (uint *)this, *s = param_1;
  *(uint *)((int)this + 0xa0) = param_2;
  for (k = n >> 2; k != 0; k--) *(volatile uint *)d++ = *s++;
  for (k = n & 3; k != 0; k--) { *(volatile uchar *)d = *(uchar *)s; d = (uint *)((uchar *)d + 1); s = (uint *)((uchar *)s + 1); }
  return n;
}
