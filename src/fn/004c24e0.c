/* Rebuilt from lomse.exe FUN_004c24e0 @ 0x004c24e0 (51 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c1cf0 ((undefined4 (__fastcall *)(int))0x004c1cf0)

#define LOM_SELF_004c24e0 1
void __fastcall rb_004c24e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004c1cf0(param_1);
  if (iVar1 != 0) {
    if (0 < *(int *)(param_1 + 0x5bc)) {
      *(int *)(param_1 + 0x5bc) = *(int *)(param_1 + 0x5bc) + -1;
    }
    *(undefined1 *)(param_1 + 0x5c8) = 0;
    *(int *)(param_1 + 0x5c0) = *(int *)(param_1 + 0x5c0) + 1;
  }
  return;
}
