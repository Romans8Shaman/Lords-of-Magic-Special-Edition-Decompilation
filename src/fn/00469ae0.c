/* Rebuilt from lomse.exe FUN_00469ae0 @ 0x00469ae0 (43 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00469b10 ((undefined4 (__thiscall *)(void *, float *))0x00469b10)

#define LOM_SELF_00469ae0 1
void __thiscall rb_00469ae0(void *this,float *param_1)

{
  FUN_00469b10(this,param_1);
  param_1[3] = (float)*(int *)((int)this + 0x1a4) + param_1[3];
  param_1[4] = (float)*(int *)((int)this + 0x1a8) + param_1[4];
  return;
}
