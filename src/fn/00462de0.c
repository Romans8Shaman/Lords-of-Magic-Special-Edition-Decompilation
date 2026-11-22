/* Rebuilt from lomse.exe FUN_00462de0 @ 0x00462de0 (42 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00462e10 ((undefined4 (__fastcall *)(int))0x00462e10)

#define LOM_SELF_00462de0 1
void __thiscall rb_00462de0(void *this,undefined4 param_1)

{
  FUN_00462e10((int)this);
  *(undefined4 *)((int)this + 0x5d8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)this = 1;
  return;
}
