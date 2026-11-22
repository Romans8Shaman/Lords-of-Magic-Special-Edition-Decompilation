/* Rebuilt from lomse.exe op_addfaithselection @ 0x00454800 (692 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa1dc (*(undefined *)0x005aa1dc)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_004546e0 ((undefined4 (__fastcall *)(undefined4 *))0x004546e0)
#define FUN_00454780 ((int (__thiscall *)(void *, undefined4 *))0x00454780)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00454800 1
void __cdecl rb_00454800(void *vm)

{
  void *this;
  int iVar1;
  uchar _fr[0x60] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_58;
  typedef uint _t_uStack_54;
  typedef uint _t_uStack_50;
  typedef uint _t_uStack_4c;
  typedef uint _t_uStack_48;
  typedef uint _t_uStack_44;
  typedef uint _t_uStack_40;
  typedef undefined4 _t_uStack_3c;
  typedef undefined4 _t_uStack_38;
  typedef uint _t_uStack_34;
  typedef uint _t_uStack_30;
  typedef uint _t_uStack_2c;
  typedef uint _t_uStack_28;
  typedef uint _t_uStack_24;
  typedef uint _t_uStack_20;
  typedef uint _t_uStack_1c;
  typedef undefined4 _t_uStack_18;
  typedef undefined4 _t_uStack_14;
  typedef undefined4 _t_uStack_10;
  typedef uint _t_uStack_8;
#define uStack_58 (*(_t_uStack_58 *)(_fr + 0x0))
#define uStack_54 (*(_t_uStack_54 *)(_fr + 0x4))
#define uStack_50 (*(_t_uStack_50 *)(_fr + 0x8))
#define uStack_4c (*(_t_uStack_4c *)(_fr + 0xc))
#define uStack_48 (*(_t_uStack_48 *)(_fr + 0x10))
#define uStack_44 (*(_t_uStack_44 *)(_fr + 0x14))
#define uStack_40 (*(_t_uStack_40 *)(_fr + 0x18))
#define uStack_3c (*(_t_uStack_3c *)(_fr + 0x1c))
#define uStack_38 (*(_t_uStack_38 *)(_fr + 0x20))
#define uStack_34 (*(_t_uStack_34 *)(_fr + 0x24))
#define uStack_30 (*(_t_uStack_30 *)(_fr + 0x28))
#define uStack_2c (*(_t_uStack_2c *)(_fr + 0x2c))
#define uStack_28 (*(_t_uStack_28 *)(_fr + 0x30))
#define uStack_24 (*(_t_uStack_24 *)(_fr + 0x34))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x38))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x3c))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x40))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x44))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x48))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x50))
  
  FUN_004546e0(&uStack_38);
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_40 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_3c = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_40 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_40,&uStack_48,&uStack_44,(undefined4 *)&vm);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_40 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_3c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_40 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_40,&uStack_54,&uStack_44,(undefined4 *)&vm);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_40 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_3c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_40 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_40,&uStack_58,&uStack_44,(undefined4 *)&vm);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_40 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_3c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_40 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_40,&uStack_4c,&uStack_44,(undefined4 *)&vm);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  FUN_0040adb0(this,&uStack_40);
  iVar1 = FUN_004026a0(&uStack_40,&uStack_50,&uStack_44,(undefined4 *)&vm);
  if (iVar1 != 0) {
    FUN_0040adb0(this,&uStack_40);
    iVar1 = FUN_004026a0(&uStack_40,&uStack_34,&uStack_44,(undefined4 *)&vm);
    if (iVar1 != 0) {
      uStack_30 = uStack_50;
      uStack_28 = uStack_50;
      uStack_20 = uStack_58;
      uStack_1c = uStack_54;
      uStack_2c = uStack_4c;
      uStack_8 = uStack_48;
      uStack_24 = uStack_4c;
      uStack_18 = 0;
      uStack_14 = 0;
      if ((((int)uStack_34 < 0) || (DAT_005cd2f0 <= (int)uStack_34)) || (DAT_005cd2f4 == 0)) {
        iVar1 = 0;
      }
      else {
        iVar1 = DAT_005cd2f4 + uStack_34 * 1000;
      }
      if (iVar1 != 0) {
        uStack_10 = *(undefined4 *)(iVar1 + 0x1c);
      }
      FUN_00454780(&DAT_005aa1dc,&uStack_38);
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_58
#undef uStack_54
#undef uStack_50
#undef uStack_4c
#undef uStack_48
#undef uStack_44
#undef uStack_40
#undef uStack_3c
#undef uStack_38
#undef uStack_34
#undef uStack_30
#undef uStack_2c
#undef uStack_28
#undef uStack_24
#undef uStack_20
#undef uStack_1c
#undef uStack_18
#undef uStack_14
#undef uStack_10
#undef uStack_8
}
