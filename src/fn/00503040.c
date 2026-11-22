/* Rebuilt from lomse.exe FUN_00503040 @ 0x00503040 (154 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a9e04 (*(undefined4 *)0x005a9e04)
#define FUN_00472740 ((undefined4 (__thiscall *)(void *, uint))0x00472740)
#define FUN_00472df0 ((undefined4 (__stdcall *)(undefined4, int))0x00472df0)
#define FUN_00502e40 ((undefined4 (__fastcall *)(int))0x00502e40)
#define FUN_00503220 ((undefined4 (__thiscall *)(void *, int))0x00503220)

#define LOM_SELF_00503040 1
undefined4 __thiscall rb_00503040(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *this_00;
  
  FUN_00503220(this,*(int *)((int)this + 0x1b8));
  switch(param_1) {
  case 0:
    uVar2 = 0x2b;
    this_00 = (undefined4 *)((int)this + 0x2531c);
    goto LAB_005030bc;
  case 1:
  case 6:
    goto switchD_0050305a_caseD_1;
  case 2:
  case 3:
  case 4:
  case 0xf:
  case 0x10:
  case 0x1c:
  case 0x1d:
    uVar1 = FUN_00502e40((int)this);
    this_00 = (undefined4 *)((int)this + 0x2531c);
    uVar2 = FUN_00472df0(uVar1,0);
    goto LAB_005030bc;
  case 5:
    uVar2 = 0;
    this_00 = (undefined4 *)((int)this + 0x2531c);
    goto LAB_005030bc;
  case 7:
  case 0x16:
    uVar2 = 3;
    break;
  case 8:
  case 9:
    uVar2 = 4;
    break;
  case 10:
    uVar2 = 0x32;
    break;
  case 0xb:
  case 0x17:
  case 0x18:
    uVar2 = 0;
    break;
  case 0xc:
    uVar2 = 0x2b;
    break;
  case 0xd:
    uVar2 = 0x10;
    break;
  default:
    return 0;
  case 0x11:
  case 0x15:
    uVar2 = 0xd;
    break;
  case 0x12:
    uVar2 = 10;
    break;
  case 0x1a:
    uVar2 = 7;
    break;
  case 0x1b:
    uVar2 = 0x2e;
  }
  this_00 = &DAT_005a9e04;
LAB_005030bc:
  FUN_00472740(this_00,uVar2);
switchD_0050305a_caseD_1:
  *(undefined4 *)((int)this + 0x1b8) = param_1;
  return 1;
}
