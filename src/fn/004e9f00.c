/* Rebuilt from lomse.exe FUN_004e9f00 @ 0x004e9f00 (40 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004e9f00 1
uint __fastcall rb_004e9f00(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x20c);
  uVar1 = 0;
  if (-1 < iVar3 + -1) {
    piVar2 = (int *)((iVar3 + -1) * 0x10 + 0x18 + param_1);
    do {
      uVar1 = uVar1 << 1;
      if (*piVar2 != 0) {
        uVar1 = uVar1 | 1;
      }
      piVar2 = piVar2 + -4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar1;
}
