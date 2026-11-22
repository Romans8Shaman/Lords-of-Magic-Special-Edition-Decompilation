/* Rebuilt from lomse.exe FUN_005291c0 @ 0x005291c0 (31 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00529140 ((uint (__fastcall *)(int *))0x00529140)

#define LOM_SELF_005291c0 1
uint __fastcall rb_005291c0(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00529140(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return param_1[5] & (*(int *)(param_1[5] + 4) != 2) - 1;
}
