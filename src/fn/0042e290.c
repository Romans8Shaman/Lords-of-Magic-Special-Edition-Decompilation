/* Rebuilt from lomse.exe op_addauratype @ 0x0042e290 (552 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd334 (*(undefined *)0x005cd334)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0042dcc0 ((undefined4 (__fastcall *)(undefined4 *))0x0042dcc0)
#define FUN_0042e160 ((int (__thiscall *)(void *, undefined4 *))0x0042e160)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_addauratype_failed_00555eb4 (*(char (*)[])0x00555eb4)

#define LOM_SELF_0042e290 1
void __cdecl rb_0042e290(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  uchar _fr[0x60] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_54;
  typedef uint _t_uStack_50;
  typedef undefined4 _t_uStack_4c;
  typedef undefined4 _t_uStack_48;
  typedef undefined4 _t_uStack_44;
  typedef undefined4 _t_uStack_40;
  typedef undefined4 _t_uStack_3c;
  typedef undefined4 _t_uStack_38;
  typedef undefined4 _t_uStack_34;
  typedef undefined4 _t_uStack_30;
  typedef undefined4 _t_uStack_2c;
  typedef uint _t_uStack_28;
  typedef uint _t_auStack_24[9];
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
#define auStack_24 (*(_t_auStack_24 *)(_fr + 0x34))
  
  FUN_0042dcc0(&uStack_48);
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_38 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_34 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_38 = 0;
    uStack_34 = uStack_4c;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_2c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_30 = 0;
    uStack_2c = uStack_4c;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_48 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_44 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_48 = 0;
    uStack_44 = uStack_4c;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_40 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_3c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_40 = 0;
    uStack_3c = uStack_4c;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_50 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_4c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_50 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_50,auStack_24,&uStack_54,(undefined4 *)&vm);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  FUN_0040adb0(this,&uStack_50);
  iVar2 = FUN_004026a0(&uStack_50,&uStack_28,&uStack_54,(undefined4 *)&vm);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar2 = FUN_0042e160(&DAT_005cd334,&uStack_48);
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
  }
  else {
    iVar1 = *(int *)((int)this + 0x50);
    iVar3 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar3;
    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
    *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
  }
  if (iVar2 < 0) {
    FUN_004d41c0(this,s_addauratype_failed_00555eb4);
  }
  return;
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
#undef auStack_24
}
