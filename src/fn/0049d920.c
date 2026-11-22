/* Rebuilt from lomse.exe FUN_0049d920 @ 0x0049d920 (96 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0049d920 1
uint __thiscall rb_0049d920(void *this,uint param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    if ((int)param_1 < 0) {
      return 0;
    }
    if (*(int *)((int)this + 8) <= (int)param_1) {
      return 0;
    }
    param_1 = *(uint *)(*(int *)((int)this + 4) + param_1 * 4);
  }
  if ((((*(int *)this == 0) || (iVar1 = *(int *)(*(int *)this + 8), iVar1 == 0)) ||
      ((int)param_1 < 0)) || ((int)(uint)*(ushort *)(iVar1 + 0x1a) <= (int)param_1)) {
    return 0;
  }
  iVar1 = (param_1 & 0xffff) * 0x10 + *(int *)(iVar1 + 0x1c);
  if ((*(byte *)(iVar1 + 1) & 0x80) == 0) {
    return (uint)*(byte *)(iVar1 + 0xb);
  }
  return (uint)*(byte *)(iVar1 + 0xb) * 2 - 2;
}
