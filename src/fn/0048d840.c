/* Rebuilt from lomse.exe FUN_0048d840 @ 0x0048d840 (102 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0048d840 1
int __fastcall rb_0048d840(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 < *(int *)(param_1 + 0x54)) {
      iVar2 = iVar1 * 0x2c;
      *(undefined4 *)(iVar2 + 0xc + *(int *)(param_1 + 0x4c)) = 0xffffffff;
      *(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar2) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x4c) + 4 + iVar2) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x4c) + 8 + iVar2) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x10 + iVar2) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x18 + iVar2) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x20 + iVar2) = 0;
      *(int *)(*(int *)(param_1 + 0x4c) + 0x28 + iVar2) = param_1;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      return iVar1;
    }
  }
  return -1;
}
