/* HAND-WRITTEN: angle wrap on the x87 stack (extended precision), stored to this->+4 as float:
 * st = p; if (st >= K18) st = p - K18; if (!(st >= K1c)) st -= K20;  (fcomp/test ah,1 = below OR unordered). */
#include "lom.h"
#define K18 (*(float *)0x0054de18)
#define K1c (*(float *)0x0054de1c)
#define K20 (*(float *)0x0054de20)
#define LOM_SELF_004f2b80 1
void __thiscall rb_004f2b80(void *this, float param_1)
{
  long double st = param_1;
  if (st >= (long double)K18) st = (long double)param_1 - (long double)K18;
  if (!(st >= (long double)K1c)) st = st - (long double)K20;
  *(float *)((int)this + 4) = (float)st;
}
