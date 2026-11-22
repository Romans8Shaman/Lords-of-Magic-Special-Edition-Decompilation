/* Rebuilt from lomse.exe FUN_004a6d70 @ 0x004a6d70 (95 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004a6d70 1
undefined4 __thiscall rb_004a6d70(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < param_2) && (param_2 < *(int *)((int)this + 0x68))) {
    piVar1 = (int *)(*(int *)((int)this + 100) + param_2 * 8);
    iVar3 = *piVar1;
    if (iVar3 == param_1) {
      *piVar1 = *(int *)(param_1 + 0x3c);
      *(undefined4 *)(param_1 + 0x3c) = 0;
      return 1;
    }
    if (iVar3 != 0) {
      do {
        iVar2 = *(int *)(iVar3 + 0x3c);
        if (iVar2 == param_1) {
          *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
          *(undefined4 *)(param_1 + 0x3c) = 0;
          return 1;
        }
        iVar3 = iVar2;
      } while (iVar2 != 0);
      return 0;
    }
  }
  return 0;
}
