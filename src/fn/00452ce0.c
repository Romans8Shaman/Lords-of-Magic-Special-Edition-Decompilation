/* Rebuilt from lomse.exe FUN_00452ce0 @ 0x00452ce0 (149 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_00452ce0 1
undefined4 __thiscall rb_00452ce0(void *this,int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_005397f0(this,4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_005397f0((char *)((int)this + 4),0x14,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_005397f0((char *)((int)this + 0x18),4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_005397f0((char *)((int)this + 0x1c),4,1,param_1);
  if (uVar1 == 1) {
    uVar1 = FUN_005397f0((char *)((int)this + 0x20),4,1,param_1);
    return (uint)(uVar1 == 1);
  }
  return 0;
}
