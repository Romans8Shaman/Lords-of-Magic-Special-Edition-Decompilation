/* Rebuilt from lomse.exe FUN_00536960 @ 0x00536960 (140 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00536960 1
void __cdecl rb_00536960(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x16b8) == 0x10) {
    *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
         *(undefined1 *)(param_1 + 0x16b4);
    iVar1 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b5);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined2 *)(param_1 + 0x16b4) = 0;
    *(undefined4 *)(param_1 + 0x16b8) = 0;
    return;
  }
  if (7 < *(int *)(param_1 + 0x16b8)) {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b4);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(ushort *)(param_1 + 0x16b4) = (ushort)*(byte *)(param_1 + 0x16b5);
    *(int *)(param_1 + 0x16b8) = *(int *)(param_1 + 0x16b8) + -8;
  }
  return;
}
