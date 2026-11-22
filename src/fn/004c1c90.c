/* Rebuilt from lomse.exe FUN_004c1c90 @ 0x004c1c90 (37 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004c1c90 1
uint __thiscall rb_004c1c90(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x4c);
  iVar3 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
    do {
      if ((param_1 & 1) != 0) {
        iVar3 = iVar3 + 1;
      }
      param_1 = param_1 >> 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return (uint)(iVar3 == iVar1);
}
