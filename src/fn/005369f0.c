/* Rebuilt from lomse.exe FUN_005369f0 @ 0x005369f0 (101 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_005369f0 1
void __cdecl rb_005369f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x16b8) < 9) {
    if (*(int *)(param_1 + 0x16b8) < 1) goto LAB_00536a3f;
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b4);
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
         *(undefined1 *)(param_1 + 0x16b4);
    iVar1 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b5);
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
LAB_00536a3f:
  *(undefined2 *)(param_1 + 0x16b4) = 0;
  *(undefined4 *)(param_1 + 0x16b8) = 0;
  return;
}
