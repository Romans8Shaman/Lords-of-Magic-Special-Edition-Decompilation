/* Rebuilt from lomse.exe FUN_00456370 @ 0x00456370 (60 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004562f0 ((undefined4 (__thiscall *)(void *, int, int))0x004562f0)

#define LOM_SELF_00456370 1
void __thiscall rb_00456370(void *this,int param_1,int param_2,int param_3)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (*(int *)((int)this + 0x6c) <= param_3) {
    param_3 = *(int *)((int)this + 0x70) + -1;
  }
  for (; param_2 <= param_3; param_2 = param_2 + 1) {
    FUN_004562f0(this,param_1,param_2);
  }
  return;
}
