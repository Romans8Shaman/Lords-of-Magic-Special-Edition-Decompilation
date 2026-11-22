/* Rebuilt from lomse.exe FUN_004209c0 @ 0x004209c0 (21 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00522820 ((undefined4 (__fastcall *)(int *))0x00522820)

#define LOM_SELF_004209c0 1
undefined4 __fastcall rb_004209c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00522820((int *)(param_1 + 0xc4 + *(int *)(param_1 + 0x50) * 0x4c));
  return uVar1;
}
