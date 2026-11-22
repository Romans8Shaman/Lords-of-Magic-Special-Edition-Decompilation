/* Rebuilt from lomse.exe FUN_00449a20 @ 0x00449a20 (105 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00449060 ((undefined4 (__stdcall *)(int))0x00449060)
#define FUN_00449160 ((undefined4 (__stdcall *)(int))0x00449160)
#define FUN_00449250 ((undefined4 (__stdcall *)(int))0x00449250)
#define FUN_00449490 ((undefined4 (__stdcall *)(int))0x00449490)
#define FUN_004495d0 ((undefined4 (__stdcall *)(int))0x004495d0)
#define FUN_004496d0 ((undefined4 (__stdcall *)(int))0x004496d0)
#define FUN_00449790 ((undefined4 (__stdcall *)(int))0x00449790)
#define FUN_00449840 ((undefined4 (__stdcall *)(int))0x00449840)

#define LOM_SELF_00449a20 1
uint __thiscall rb_00449a20(void *this,int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    param_1 = *(int *)((int)this + 0x48);
  }
  switch(*(undefined2 *)((int)this + 0x56)) {
  case 0:
    uVar1 = FUN_00449060(param_1);
    return uVar1;
  case 1:
    uVar1 = FUN_00449160(param_1);
    return uVar1;
  case 2:
    uVar1 = FUN_00449250(param_1);
    return uVar1;
  case 3:
    uVar1 = FUN_00449490(param_1);
    return uVar1;
  case 4:
    uVar1 = FUN_004495d0(param_1);
    return uVar1;
  case 5:
    uVar1 = FUN_004496d0(param_1);
    return uVar1;
  case 6:
    uVar1 = FUN_00449790(param_1);
    return uVar1;
  case 7:
    uVar1 = FUN_00449840(param_1);
    return uVar1;
  default:
    return 0xffffffff;
  }
}
