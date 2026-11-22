/* Rebuilt from lomse.exe FUN_0050a570 @ 0x0050a570 (65 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d2cd8 (*(int * *)0x005d2cd8)

#define LOM_SELF_0050a570 1
int * __thiscall rb_0050a570(void *this,int param_1,int param_2)

{
  DAT_005d2cd8 = *(int **)((int)this + 0x84);
  if (DAT_005d2cd8 == (int *)0x0) {
    DAT_005d2cd8 = (int *)0x0;
    return (int *)0x0;
  }
  while ((*DAT_005d2cd8 != param_1 || (DAT_005d2cd8[1] != param_2))) {
    DAT_005d2cd8 = (int *)DAT_005d2cd8[5];
    if (DAT_005d2cd8 == (int *)0x0) {
      return (int *)0x0;
    }
  }
  return DAT_005d2cd8;
}
