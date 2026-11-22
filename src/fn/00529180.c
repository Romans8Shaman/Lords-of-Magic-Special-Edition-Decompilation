/* Rebuilt from lomse.exe FUN_00529180 @ 0x00529180 (30 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00529140 ((uint (__fastcall *)(int *))0x00529140)

#define LOM_SELF_00529180 1
uint __fastcall rb_00529180(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00529140(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return ~-(uint)(*(int *)(param_1[5] + 4) != 0) & param_1[5];
}
