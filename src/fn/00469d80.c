/* Rebuilt from lomse.exe FUN_00469d80 @ 0x00469d80 (116 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define _DAT_0054d7e8 (*(double *)0x0054d7e8)
#define _DAT_0054d7f0 (*(double *)0x0054d7f0)

#define LOM_SELF_00469d80 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_00469d80(void *this,float param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_1 * (float10)_DAT_0054d7e8 * (float10)_DAT_0054d7f0;
  *(float *)((int)this + 0x48) = param_1;
  fVar2 = (float10)fsin(fVar1);
  *(undefined4 *)((int)this + 0xa4) = 0x3f800000;
  *(undefined4 *)((int)this + 0xe0) = 0x3f800000;
  fVar1 = (float10)fcos(fVar1);
  *(float *)((int)this + 0xb8) = (float)fVar1;
  *(float *)((int)this + 200) = (float)-fVar2;
  *(float *)((int)this + 0xbc) = (float)fVar2;
  *(float *)((int)this + 0xcc) = (float)fVar1;
  ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x2c)))(this);
  return;
}
