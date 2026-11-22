/* Rebuilt from lomse.exe FUN_00476010 @ 0x00476010 (101 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00476270 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x00476270)

#define LOM_SELF_00476010 1
bool __thiscall rb_00476010(void *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_1 < *(int *)((int)this + 0x14)) {
    param_1 = *(int *)((int)this + 0x14);
  }
  if (param_2 < *(int *)((int)this + 0x18)) {
    param_2 = *(int *)((int)this + 0x18);
  }
  if (*(int *)((int)this + 0x1c) <= param_3) {
    param_3 = *(int *)((int)this + 0x1c);
  }
  if (*(int *)((int)this + 0x20) <= param_4) {
    param_4 = *(int *)((int)this + 0x20);
  }
  if ((param_3 < param_1) || (param_4 < param_2)) {
    return true;
  }
  uVar1 = FUN_00476270(this,param_1,param_2,param_3,param_4);
  return SUB41(uVar1,0);
}
