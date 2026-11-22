/* Rebuilt from lomse.exe FUN_0040f1c0 @ 0x0040f1c0 (95 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0040f1c0 1
int __thiscall rb_0040f1c0(void *this,int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  if (iVar3 != 0) {
    do {
      if (*(int *)(iVar3 + 0x18) == param_4) {
        iVar1 = 0;
        if (0 < *(int *)(param_1 + 0x4c)) {
          piVar2 = (int *)(param_1 + 0xe4);
          do {
            if (((param_2 & 1 << ((byte)iVar1 & 0x1f)) != 0) && (*piVar2 == *(int *)(iVar3 + 4))) {
              return iVar1;
            }
            iVar1 = iVar1 + 1;
            piVar2 = piVar2 + 0x13;
          } while (iVar1 < *(int *)(param_1 + 0x4c));
        }
      }
      iVar3 = *(int *)(iVar3 + 0x4c);
    } while (iVar3 != 0);
  }
  return -1;
}
