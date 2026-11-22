/* Rebuilt from lomse.exe FUN_0047aea0 @ 0x0047aea0 (41 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0047a7b0 ((undefined4 (__fastcall *)(int))0x0047a7b0)
#define FUN_0047a830 ((undefined4 (__thiscall *)(void *, undefined4))0x0047a830)

#define LOM_SELF_0047aea0 1
void __thiscall rb_0047aea0(void *this,int in_stack_4)

{
  *(int *)((int)this + 0x788) = in_stack_4;
  FUN_0047a7b0((int)this);
  if ((-1 < in_stack_4) && (in_stack_4 < 10)) {
    FUN_0047a830(this,in_stack_4);
  }
  return;
}
