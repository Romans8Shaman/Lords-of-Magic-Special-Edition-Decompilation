/* Rebuilt from lomse.exe FUN_00469f40 @ 0x00469f40 (36 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00469f40 1
void __thiscall rb_00469f40(void *this,int param_1,int param_2,int param_3,int param_4)

{
  *(int *)((int)this + 0x18) = param_1;
  *(int *)((int)this + 0x1c) = param_2;
  *(int *)((int)this + 0x20) = param_3;
  *(int *)((int)this + 0x24) = param_4;
  ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x30)))(this);
  return;
}
