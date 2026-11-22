/* Rebuilt from lomse.exe FUN_00524300 @ 0x00524300 (61 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00524300 1
int __thiscall rb_00524300(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 4);
  iVar1 = 0;
  if (0 < iVar4) {
    piVar2 = (int *)(*(int *)((int)this + 8) + 0x164);
    piVar3 = (int *)(*(int *)((int)this + 8) + 0x380 + param_1 * 4);
    do {
      if (*piVar2 == param_2) {
        iVar1 = iVar1 + *piVar3;
      }
      piVar2 = piVar2 + 0xfa;
      piVar3 = piVar3 + 0xfa;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar1;
}
