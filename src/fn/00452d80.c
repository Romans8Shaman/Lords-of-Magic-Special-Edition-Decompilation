/* Rebuilt from lomse.exe FUN_00452d80 @ 0x00452d80 (149 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_00452d80 1
undefined4 __thiscall rb_00452d80(void *this,int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00539660(this,4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_00539660((char *)((int)this + 4),0x14,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_00539660((char *)((int)this + 0x18),4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_00539660((char *)((int)this + 0x1c),4,1,param_1);
  if (uVar1 == 1) {
    uVar1 = FUN_00539660((char *)((int)this + 0x20),4,1,param_1);
    return (uint)(uVar1 == 1);
  }
  return 0;
}
