/* Rebuilt from lomse.exe FUN_00415e90 @ 0x00415e90 (219 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_00415430 ((int (__fastcall *)(int))0x00415430)
#define FUN_004154a0 ((int (__fastcall *)(int))0x004154a0)
#define FUN_004a4c50 ((uint (__thiscall *)(void *, int))0x004a4c50)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)

#define LOM_SELF_00415e90 1
undefined4 __thiscall rb_00415e90(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined *this_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (((param_1 < 0) || (DAT_005cd2f0 <= param_1)) || (DAT_005cd2f4 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_005cd2f4 + param_1 * 1000;
  }
  if (iVar2 == 0) {
switchD_00415edf_default:
    return 0;
  }
  switch(*(int *)(iVar2 + 0x164)) {
  case 0:
  case 1:
  case 2:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x16:
  case 0x17:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x20:
  case 0x21:
    bVar1 = false;
    break;
  case 3:
  case 4:
  case 5:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x14:
  case 0x15:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1f:
  case 0x22:
  case 0x23:
  case 0x24:
    bVar1 = true;
    break;
  default:
    goto switchD_00415edf_default;
  }
  if (bVar1) {
    iVar2 = FUN_00415430((int)this);
    if (2 < iVar2) {
      return 0;
    }
  }
  else {
    if (*(int *)(iVar2 + 0x164) == 0xf) {
      iVar2 = *(int *)((int)this + 0x1c);
      FUN_004c6fc0();
      this_00 = FUN_004c6fc0();
      uVar3 = FUN_004a4c50(this_00,iVar2);
      if ((uVar3 & 0x80000) == 0) {
        return 0;
      }
      iVar2 = FUN_004154a0((int)this);
      if (2 < iVar2) {
        return 0;
      }
    }
    iVar4 = FUN_00415430((int)this);
    iVar2 = *(int *)((int)this + 0x4c);
    iVar5 = FUN_004154a0((int)this);
    if (8 < (iVar2 - iVar4) - iVar5) {
      return 0;
    }
  }
  return 1;
}
