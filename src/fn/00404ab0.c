/* Rebuilt from lomse.exe FUN_00404ab0 @ 0x00404ab0 (36 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00404ab0 1
undefined4 __thiscall rb_00404ab0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x90) = param_1;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return 0;
}
