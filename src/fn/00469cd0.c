/* Rebuilt from lomse.exe FUN_00469cd0 @ 0x00469cd0 (36 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00469cd0 1
void __thiscall rb_00469cd0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  *(int *)((int)this + 8) = param_1;
  *(int *)((int)this + 0xc) = param_2;
  *(int *)((int)this + 0x10) = param_3;
  *(int *)((int)this + 0x14) = param_4;
  ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x30)))(this);
  return;
}
