/* Rebuilt from lomse.exe FUN_0050cbc0 @ 0x0050cbc0 (85 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ccab8 (*(int *)0x005ccab8)

#define LOM_SELF_0050cbc0 1
void __fastcall rb_0050cbc0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (((DAT_005ccab8 < 0) || (*(short *)(param_1 + 0x4e) <= DAT_005ccab8)) ||
     (*(int *)(param_1 + 0x50) == 0)) {
    puVar1 = *(undefined4 **)(param_1 + 0x58);
    if (puVar1 != (undefined4 *)0x0) {
      ((undefined4 (__thiscall *)(__typeof__(puVar1), __typeof__(1)))(**(code **)*puVar1))(puVar1,1);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  else {
    iVar2 = DAT_005ccab8 * 0xc;
    puVar1 = *(undefined4 **)(iVar2 + 8 + *(int *)(param_1 + 0x50));
    if (puVar1 != (undefined4 *)0x0) {
      ((undefined4 (__thiscall *)(__typeof__(puVar1), __typeof__(1)))(**(code **)*puVar1))(puVar1,1);
      *(undefined4 *)(*(int *)(param_1 + 0x50) + 8 + iVar2) = 0;
      return;
    }
  }
  return;
}
