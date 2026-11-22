/* Rebuilt from lomse.exe FUN_00518580 @ 0x00518580 (18 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005185a0 ((undefined4 (__fastcall *)(int))0x005185a0)

#define LOM_SELF_00518580 1
void __thiscall rb_00518580(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x218) = param_1;
  FUN_005185a0((int)this);
  return;
}
