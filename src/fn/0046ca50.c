/* Rebuilt from lomse.exe FUN_0046ca50 @ 0x0046ca50 (95 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0046ca50 1
undefined4 __thiscall rb_0046ca50(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 < 4) {
    iVar3 = 4;
  }
  else {
    iVar3 = ((7 < param_1) - 1 & 0xfffffffb) + 0xe;
  }
  iVar1 = param_1 + 1;
  if (iVar3 < iVar1) {
    return 0;
  }
  piVar2 = (int *)(iVar1 * 0x30 + 0x20 + *(int *)((int)this + 4));
  while (((*(byte *)(piVar2 + 1) & 4) == 0 || (*piVar2 < 0))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0xc;
    if (iVar3 < iVar1) {
      return 0;
    }
  }
  return 1;
}
