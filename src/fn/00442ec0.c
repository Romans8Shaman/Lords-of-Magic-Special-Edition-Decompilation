/* Rebuilt from lomse.exe op_canupgradebuilding_q @ 0x00442ec0 (347 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0043e820 ((undefined4 (__thiscall *)(void *, undefined4 *, int, int, int))0x0043e820)
#define FUN_0044ede0 ((undefined4 (__thiscall *)(void *, undefined4 *, int, int, int))0x0044ede0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_no_building_or_city_00556710 (*(char (*)[])0x00556710)

#define LOM_SELF_00442ec0 1
void __cdecl rb_00442ec0(void *vm)

{
  void *this;
  int iVar1;
  int *this_00;
  int *this_01;
  int iVar2;
  int iVar3;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_uStack_14;
  typedef undefined4 _t_fStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x8))
#define uStack_c (*(_t_uStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x14))
  
  this = vm;
  iVar3 = 0;
  uStack_14 = 0;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,(int)vm,2);
  this_01 = (int *)FUN_00482ac0(&DAT_005aa12c,(int)vm,3);
  if (this_00 == (int *)0x0) {
    if (this_01 == (int *)0x0) {
      FUN_004d41c0(this,s_no_building_or_city_00556710);
    }
    else {
      iVar3 = ((undefined4 (__thiscall *)(__typeof__(this_01)))(**(code **)(*this_01 + 0x3c)))(this_01);
      iVar3 = FUN_0044ede0(this_01,&uStack_14,0,this_01[0x35] + 1,iVar3);
    }
  }
  else {
    iVar3 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
    iVar3 = FUN_0043e820(this_00,&uStack_14,this_00[0x16],this_00[0x17] + 1,iVar3);
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar1 = *(int *)((int)this + 0x50);
  iVar2 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar2;
  *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
  *(uint *)(iVar1 + 4 + iVar2 * 8) = -(uint)(iVar3 != 0);
  return;
#undef uStack_14
#undef fStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
