/* HAND-WRITTEN: one-shot (bit 0 of DAT_00583400): delete the singly linked list at DAT_0058340c (next at +0x3c) via vt[0](p, 1). */
#include "lom.h"
#define DAT_00583400 (*(uchar *)0x00583400)
#define DAT_0058340c (*(void **)0x0058340c)
#define LOM_SELF_0047e930 1
void __cdecl rb_0047e930(void)
{
  void *p;
  if (DAT_00583400 & 1) return;
  DAT_00583400 = DAT_00583400 | 1;
  p = DAT_0058340c;
  while (p != 0) {
    DAT_0058340c = *(void **)((int)p + 0x3c);
    (**(void (__thiscall ***)(void *, int))p)(p, 1);
    p = DAT_0058340c;
  }
  DAT_0058340c = 0;
}
