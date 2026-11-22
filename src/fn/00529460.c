/* Rebuilt from lomse.exe FUN_00529460 @ 0x00529460 (19 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00529180 ((uint (__fastcall *)(int *))0x00529180)

#define LOM_SELF_00529460 1
void __thiscall rb_00529460(void *this,undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00529180(this);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x1c) = param_1;
  }
  return;
}
