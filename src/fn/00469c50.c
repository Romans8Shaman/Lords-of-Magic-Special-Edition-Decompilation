/* Rebuilt from lomse.exe FUN_00469c50 @ 0x00469c50 (119 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00469c50 1
void __thiscall rb_00469c50(void *this,float param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1);
  *(undefined4 *)((int)this + 0xa4) = 0x3f800000;
  *(undefined4 *)((int)this + 0xe0) = 0x3f800000;
  *(undefined4 *)((int)this + 0xf8) = 0x3f800000;
  *(undefined4 *)((int)this + 0x120) = 0x3f800000;
  fVar2 = (float10)fsin((float10)param_1);
  *(float *)((int)this + 0xb8) = (float)fVar1;
  *(float *)((int)this + 0xbc) = (float)-fVar2;
  *(float *)((int)this + 200) = (float)fVar2;
  *(float *)((int)this + 0xcc) = (float)fVar1;
  fVar1 = (float10)fcos((float10)param_2);
  fVar2 = (float10)fsin((float10)param_2);
  *(float *)((int)this + 0xe4) = (float)fVar1;
  *(float *)((int)this + 0xec) = (float)fVar2;
  *(float *)((int)this + 0x104) = (float)-fVar2;
  *(float *)((int)this + 0x10c) = (float)fVar1;
  ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x2c)))(this);
  return;
}
