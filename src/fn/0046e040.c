/* Rebuilt from lomse.exe FUN_0046e040 @ 0x0046e040 (57 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0046e040 1
uint __fastcall rb_0046e040(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  uVar1 = 0;
  if (-1 < iVar3 + -1) {
    piVar2 = (int *)(*(int *)(param_1 + 4) + 0x20 + (iVar3 + -1) * 0x30);
    do {
      if (((*(byte *)(piVar2 + -3) & 8) != 0) && (-1 < *piVar2)) {
        uVar1 = uVar1 | 1 << ((byte)*piVar2 & 0x1f);
      }
      piVar2 = piVar2 + -0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar1;
}
