/* Rebuilt from lomse.exe FUN_0044f440 @ 0x0044f440 (91 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0043f4e0 ((undefined4 (__thiscall *)(void *, undefined4, int))0x0043f4e0)
#define FUN_0044f180 ((undefined4 (__stdcall *)(undefined4, undefined4))0x0044f180)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_0044f440 1
undefined4 __thiscall rb_0044f440(void *this,int *param_1)

{
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  
  uVar1 = FUN_00482ac0(this,*param_1,3);
  this_00 = (void *)FUN_00482ac0(this,*param_1,2);
  if (uVar1 != 0) {
    uVar2 = FUN_0044f180(param_1[1],param_1[2]);
    return uVar2;
  }
  if (this_00 == (void *)0x0) {
    return 0;
  }
  uVar2 = FUN_0043f4e0(this_00,param_1[1],param_1[2]);
  return uVar2;
}
