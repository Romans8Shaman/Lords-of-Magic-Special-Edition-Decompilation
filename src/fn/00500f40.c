/* Rebuilt from lomse.exe FUN_00500f40 @ 0x00500f40 (615 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00573408 (*(int *)0x00573408)
#define DAT_0057340c (*(int *)0x0057340c)
#define FUN_00472740 ((undefined4 (__thiscall *)(void *, uint))0x00472740)
#define FUN_00472df0 ((undefined4 (__stdcall *)(undefined4, int))0x00472df0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a6180 ((int (__thiscall *)(void *, int, int))0x004a6180)
#define FUN_004a6e60 ((undefined4 (__thiscall *)(void *, int, int))0x004a6e60)
#define FUN_00500e00 ((int (__stdcall *)(undefined4, int))0x00500e00)
#define FUN_00502e40 ((undefined4 (__fastcall *)(int))0x00502e40)
#define FUN_00502eb0 ((undefined4 (__thiscall *)(void *, int, int, int, undefined4))0x00502eb0)

#define LOM_SELF_00500f40 1
void __thiscall rb_00500f40(void *this,undefined4 param_1,int param_2,int param_3)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (*(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x23590 + (int)this) != 3) {
    return;
  }
  local_4 = -1;
  if (0x17f < param_3) {
    FUN_00472740((void *)((int)this + 0x2531c),0x2b);
    DAT_0057340c = param_3;
    DAT_00573408 = param_2;
    return;
  }
  iVar1 = FUN_004a6e60((void *)((int)this + 0x29e70),param_2,param_3);
  this_00 = (void *)((int)this + 0x25644);
  uVar2 = FUN_00482ac0(this_00,iVar1,7);
  if (uVar2 != 0) {
    iVar1 = *(int *)(uVar2 + 0x44);
  }
  if ((DAT_00573408 == param_2) && (DAT_0057340c == param_3)) {
    return;
  }
  switch(*(undefined4 *)((int)this + 0x1b8)) {
  case 2:
  case 4:
    local_4 = FUN_004a6180((void *)((int)this + 0x29e70),param_2,param_3);
    break;
  case 3:
    break;
  case 5:
    if (iVar1 == -1) {
      FUN_00472740((void *)((int)this + 0x2531c),2);
      return;
    }
    FUN_00472740((void *)((int)this + 0x2531c),1);
    return;
  default:
    return;
  case 7:
  case 0x16:
    if (iVar1 < 0) {
      FUN_00472740((void *)((int)this + 0x2531c),4);
      return;
    }
    uVar2 = FUN_00482ac0(this_00,iVar1,0);
    if (uVar2 == 0) {
      FUN_00472740((void *)((int)this + 0x2531c),6);
      return;
    }
    if (*(int *)(uVar2 + 0x48) ==
        *(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this)) {
      FUN_00472740((void *)((int)this + 0x2531c),5);
      return;
    }
    FUN_00472740((void *)((int)this + 0x2531c),6);
    return;
  case 0xb:
  case 0xd:
  case 0x11:
  case 0x12:
  case 0x15:
  case 0x17:
  case 0x18:
  case 0x1a:
    if (iVar1 < 0) {
      uVar2 = FUN_00500e00(*(undefined4 *)((int)this + 0x1b8),2);
      FUN_00472740((void *)((int)this + 0x2531c),uVar2);
      return;
    }
    uVar2 = FUN_00482ac0(this_00,iVar1,0);
    if ((uVar2 == 0) ||
       (*(int *)(uVar2 + 0x48) ==
        *(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this))) {
      uVar2 = FUN_00500e00(*(undefined4 *)((int)this + 0x1b8),2);
      FUN_00472740((void *)((int)this + 0x2531c),uVar2);
      return;
    }
    uVar2 = FUN_00500e00(*(undefined4 *)((int)this + 0x1b8),1);
    FUN_00472740((void *)((int)this + 0x2531c),uVar2);
    return;
  case 0xf:
  case 0x10:
    uVar3 = FUN_00502e40((int)this);
    if (iVar1 == -1) {
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
    uVar2 = FUN_00472df0(uVar3,iVar1);
    FUN_00472740((void *)((int)this + 0x2531c),uVar2);
    return;
  }
  FUN_00502eb0(this,0x200,local_4,iVar1,0);
  return;
#undef local_4
}
