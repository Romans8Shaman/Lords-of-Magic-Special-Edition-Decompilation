/* Rebuilt from lomse.exe FUN_00525fc0 @ 0x00525fc0 (17 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00529140 ((uint (__fastcall *)(int *))0x00529140)

#define LOM_SELF_00525fc0 1
undefined4 __fastcall rb_00525fc0(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00529140(param_1);
  if (uVar1 == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(uVar1 + 4);
}
