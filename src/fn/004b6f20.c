/* Rebuilt from lomse.exe FUN_004b6f20 @ 0x004b6f20 (43 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b6f50 ((undefined4 (__stdcall *)(int))0x004b6f50)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)

#define LOM_SELF_004b6f20 1
void __fastcall rb_004b6f20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4b2c) == 0) {
    FUN_004b6f50(1);
    return;
  }
  iVar1 = FUN_004b7dd0(*(int *)(param_1 + 0x4b2c));
  FUN_004b6f50(iVar1);
  return;
}
