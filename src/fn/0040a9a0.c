/* Rebuilt from lomse.exe FUN_0040a9a0 @ 0x0040a9a0 (35 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)

#define LOM_SELF_0040a9a0 1
undefined4 __fastcall rb_0040a9a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00521e00((int *)(param_1 + 0xc4));
  if ((*(int *)(iVar1 + 0x164) == 0x16) && (*(int *)(iVar1 + 0x1c) == 3)) {
    return 1;
  }
  return 0;
}
