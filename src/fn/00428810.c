/* Rebuilt from lomse.exe FUN_00428810 @ 0x00428810 (41 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00428810 1
int __thiscall rb_00428810(void *this,char param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)((int)this + 0x1c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
    if ((*(uint *)(iVar1 + 0x10) & 1 << (param_1 + 8U & 0x1f)) != 0) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}
