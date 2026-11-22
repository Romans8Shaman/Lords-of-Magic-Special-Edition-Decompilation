/* Rebuilt from lomse.exe FUN_00493300 @ 0x00493300 (37 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0047ef90 ((undefined4 (__thiscall *)(void *, int, undefined4))0x0047ef90)
#define FUN_00492de0 ((int (__thiscall *)(void *, int))0x00492de0)

#define LOM_SELF_00493300 1
undefined4 __thiscall rb_00493300(void *this,int param_1,int param_2,undefined4 param_3)

{
  void *this_00;
  undefined4 uVar1;
  
  this_00 = (void *)FUN_00492de0(this,param_1);
  if (this_00 == (void *)0x0) {
    return 0;
  }
  uVar1 = FUN_0047ef90(this_00,param_2,param_3);
  return uVar1;
}
