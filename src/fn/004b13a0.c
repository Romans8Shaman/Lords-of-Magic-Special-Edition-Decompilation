/* Rebuilt from lomse.exe FUN_004b13a0 @ 0x004b13a0 (66 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004b13a0 1
int __thiscall rb_004b13a0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0xc0))) {
    iVar1 = *(int *)(*(int *)((int)this + 200) + param_1 * 4);
    iVar2 = *(int *)(*(int *)((int)this + 200) + 4 + param_1 * 4);
    if (iVar1 != iVar2) {
      iVar3 = 0;
      piVar4 = (int *)(iVar1 * 0x20 + *(int *)((int)this + 0x18));
      do {
        if (iVar2 == *piVar4) {
          return iVar3;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < 8);
    }
  }
  return -1;
}
