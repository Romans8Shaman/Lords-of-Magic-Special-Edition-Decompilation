/* Rebuilt from lomse.exe op_upkeepbuildingcost @ 0x00444b40 (561 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_no_building_or_city_00556710 (*(char (*)[])0x00556710)

#define LOM_SELF_00444b40 1
void __cdecl rb_00444b40(void *vm)

{
  void *this;
  int iVar1;
  int *this_00;
  int *this_01;
  int iVar2;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_fStack_24;
  typedef uint _t_uStack_20;
  typedef uint _t_uStack_1c;
  typedef undefined4 _t_uStack_18;
  typedef undefined4 _t_uStack_14;
  typedef undefined4 _t_uStack_10;
  typedef undefined4 _t_uStack_c;
  typedef undefined4 _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define fStack_24 (*(_t_fStack_24 *)(_fr + 0x4))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x8))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0xc))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x10))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x14))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x18))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x1c))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x20))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x24))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_1c = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_18 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_1c = 0;
  }
  iVar1 = FUN_004026a0(&uStack_1c,(uint *)&vm,&uStack_20,&fStack_24);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,(int)vm,2);
  this_01 = (int *)FUN_00482ac0(&DAT_005aa12c,(int)vm,3);
  if (this_00 == (int *)0x0) {
    if (this_01 == (int *)0x0) {
      FUN_004d41c0(this,s_no_building_or_city_00556710);
    }
    else {
      iVar1 = this_01[0x35];
      iVar2 = this_01[0x11];
      this_01[0x35] = iVar1 + 1;
      this_01[0x11] = 0;
      ((undefined4 (__thiscall *)(__typeof__(this_01), __typeof__(&uStack_14)))(**(code **)(*this_01 + 0x40)))(this_01,&uStack_14);
      this_01[0x11] = iVar2;
      this_01[0x35] = iVar1;
    }
  }
  else {
    iVar1 = this_00[0x12];
    this_00[0x12] = 0;
    ((undefined4 (__thiscall *)(__typeof__(this_00), __typeof__(&uStack_14)))(**(code **)(*this_00 + 0x40)))(this_00,&uStack_14);
    this_00[0x12] = iVar1;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x50);
    iVar2 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar2;
    *(undefined4 *)(iVar1 + iVar2 * 8) = 2;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uStack_14;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x50);
    iVar2 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar2;
    *(undefined4 *)(iVar1 + iVar2 * 8) = 2;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uStack_10;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x50);
    iVar2 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar2;
    *(undefined4 *)(iVar1 + iVar2 * 8) = 2;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uStack_c;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x50);
    iVar2 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar2;
    *(undefined4 *)(iVar1 + iVar2 * 8) = 2;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uStack_8;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar2;
  iVar1 = *(int *)((int)this + 0x50);
  *(undefined4 *)(iVar1 + iVar2 * 8) = 2;
  *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uStack_4;
  return;
#undef fStack_24
#undef uStack_20
#undef uStack_1c
#undef uStack_18
#undef uStack_14
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
