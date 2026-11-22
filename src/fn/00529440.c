/* Rebuilt from lomse.exe FUN_00529440 @ 0x00529440 (19 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00529180 ((uint (__fastcall *)(int *))0x00529180)

#define LOM_SELF_00529440 1
void __thiscall rb_00529440(void *this,undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00529180(this);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x18) = param_1;
  }
  return;
}
