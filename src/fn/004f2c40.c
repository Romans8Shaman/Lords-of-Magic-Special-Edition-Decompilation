/* HAND-WRITTEN: angle wrap of param_1 stored to this->+4 (as 004f2b80), then o = this - 4: FUN_004f2f70(o, FUN_004f3660(o)). */
#include "lom.h"
#define K18 (*(float *)0x0054de18)
#define K1c (*(float *)0x0054de1c)
#define K20 (*(float *)0x0054de20)
#define FUN_004f3660 ((uint (__fastcall *)(void *))0x004f3660)
#define FUN_004f2f70 ((uint (__thiscall *)(void *, uint))0x004f2f70)
#define LOM_SELF_004f2c40 1
uint __thiscall rb_004f2c40(void *this, float param_1)
{
  long double st = param_1;
  void *o;
  if (st >= (long double)K18) st = (long double)param_1 - (long double)K18;
  if (!(st >= (long double)K1c)) st = st - (long double)K20;
  *(float *)((int)this + 4) = (float)st;
  o = (void *)((int)this - 4);
  return FUN_004f2f70(o, FUN_004f3660(o));
}
