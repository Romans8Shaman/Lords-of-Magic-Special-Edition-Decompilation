/* Rebuilt from lomse.exe FUN_00483c90 @ 0x00483c90 (58 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004bd5b0 ((undefined4 (__thiscall *)(void *, int))0x004bd5b0)

#define LOM_SELF_00483c90 1
void __thiscall rb_00483c90(void *this,int param_1,int param_2)

{
  void *this_00;
  
  if ((param_1 < 0) || (0xf < param_1)) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)((int)this + param_1 * 0x1d84 + 0x5068);
  }
  if (this_00 != (void *)0x0) {
    FUN_004bd5b0(this_00,param_2);
  }
  return;
}
