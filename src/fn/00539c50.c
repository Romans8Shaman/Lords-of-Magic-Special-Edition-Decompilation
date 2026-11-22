/* Rebuilt from lomse.exe FUN_00539c50 @ 0x00539c50 (127 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053f160 ((undefined4 (__stdcall *)(void))0x0053f160)

#define LOM_SELF_00539c50 1
int __cdecl rb_00539c50(int param_1, int param_2, int volatile param_3, uint *volatile param_4, uint *volatile param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar4 = uVar3;
  uVar5 = uVar3;
  if (-1 < param_2) {
    do {
      if (uVar4 == 0xffffffff) {
        FUN_0053f160();
      }
      uVar4 = uVar4 - 1;
      iVar1 = iVar2 + uVar4 * 0x14;
      if ((*(int *)(iVar1 + 4) < param_3) && (param_3 <= *(int *)(iVar1 + 8))) {
LAB_00539c97:
        param_2 = param_2 + -1;
        uVar3 = uVar5;
        uVar5 = uVar4;
      }
      else if (uVar4 == 0xffffffff) goto LAB_00539c97;
    } while (-1 < param_2);
  }
  uVar4 = uVar4 + 1;
  *param_4 = uVar4;
  *param_5 = uVar3;
  if ((*(uint *)(param_1 + 0xc) < uVar3) || (uVar3 < uVar4)) {
    FUN_0053f160();
  }
  return iVar2 + uVar4 * 0x14;
}
