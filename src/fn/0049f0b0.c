/* HAND-WRITTEN: one-shot (bit 0 of DAT_005836d0): destroy the list at DAT_005836f4 (next at +0x3c): m = p->vt[0](p, 0)
 * (non-deleting dtor returns the block); if (m) Ordinal_403(m, __FILE__ storm.h, 0x3eb, 0) (storm free). */
#include "lom.h"
#define DAT_005836d0 (*(uchar *)0x005836d0)
#define DAT_005836f4 (*(void **)0x005836f4)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define LOM_SELF_0049f0b0 1
void __cdecl rb_0049f0b0(void)
{
  void *p;
  int m;
  if (DAT_005836d0 & 1) return;
  DAT_005836d0 = DAT_005836d0 | 1;
  p = DAT_005836f4;
  while (p != 0) {
    DAT_005836f4 = *(void **)((int)p + 0x3c);
    m = (**(int (__thiscall ***)(void *, int))p)(p, 0);
    if (m != 0) Ordinal_403(m, 0x555130, 0x3eb, 0);
    p = DAT_005836f4;
  }
  DAT_005836f4 = 0;
}
