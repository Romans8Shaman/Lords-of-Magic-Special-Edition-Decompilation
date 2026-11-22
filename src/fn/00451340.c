/* Rebuilt from lomse.exe FUN_00451340 @ 0x00451340 (41 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f5b50 ((undefined4 (__thiscall *)(void *, int))0x004f5b50)

#define LOM_SELF_00451340 1
void __thiscall rb_00451340(void *this,int param_1)

{
  int *this_00;
  
  *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) | 8;
  FUN_004f5b50(this,param_1);
  this_00 = *(int **)((int)this + 0x44);
  if (this_00 != (int *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(this_00), __typeof__(param_1)))(**(code **)(*this_00 + 0x34)))(this_00,param_1);
  }
  return;
}
