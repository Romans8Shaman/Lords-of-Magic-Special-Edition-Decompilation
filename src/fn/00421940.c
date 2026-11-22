/* Rebuilt from lomse.exe FUN_00421940 @ 0x00421940 (31 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)

#define LOM_SELF_00421940 1
undefined4 __fastcall rb_00421940(int param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  if (*(int *)(param_1 + 0x4c) < 1) {
    return 0;
  }
  FUN_00525fc0((int *)(param_1 + 0xc4));
  return 1;
}
