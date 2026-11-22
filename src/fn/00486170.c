/* Rebuilt from lomse.exe op_addunit @ 0x00486170 (706 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00480130 ((undefined4 (__thiscall *)(void *, int, void *, int, int, undefined4, int, undefined4, int *, int *, uint, int))0x00480130)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_bad_unit_type_0055b4a8 (*(char (*)[])0x0055b4a8)
#define s_no_such_player_0055b488 (*(char (*)[])0x0055b488)

#define LOM_SELF_00486170 1
void __cdecl rb_00486170(void *vm)

{
  void *this;
  int iVar1;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_28;
  typedef void * _t_pvStack_24;
  typedef uint _t_uStack_20;
  typedef undefined4 _t_fStack_1c;
  typedef undefined4 _t_fStack_18;
  typedef uint _t_uStack_14;
  typedef int _t_iStack_10;
  typedef int _t_iStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_28 (*(_t_uStack_28 *)(_fr + 0x0))
#define pvStack_24 (*(_t_pvStack_24 *)(_fr + 0x4))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x8))
#define fStack_1c (*(_t_fStack_1c *)(_fr + 0xc))
#define fStack_18 (*(_t_fStack_18 *)(_fr + 0x10))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x14))
#define iStack_10 (*(_t_iStack_10 *)(_fr + 0x18))
#define iStack_c (*(_t_iStack_c *)(_fr + 0x1c))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x20))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x24))
  
  this = vm;
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_18,&fStack_1c);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_28,(uint *)&fStack_1c,&fStack_18);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_1c,&fStack_18);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&pvStack_24,(uint *)&fStack_1c,&fStack_18);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_20,(uint *)&fStack_1c,&fStack_18);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if ((((int)vm < 0) || (DAT_005cd2f0 <= (int)vm)) || (DAT_005cd2f4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_005cd2f4 + (int)vm * 1000;
  }
  if (iVar1 == 0) {
    FUN_004d41c0(this,s_bad_unit_type_0055b4a8);
    return;
  }
  if (((int)uStack_28 < 0) || (0xf < (int)uStack_28)) {
    FUN_004d41c0(this,s_no_such_player_0055b488);
    return;
  }
  FUN_00480130(&DAT_005aa12c,uStack_20,pvStack_24,uStack_28,(int)vm,*(undefined4 *)(iVar1 + 0xec),-1
               ,*(undefined4 *)(iVar1 + 0xe8),&iStack_c,&iStack_10,0,-1);
  return;
#undef uStack_28
#undef pvStack_24
#undef uStack_20
#undef fStack_1c
#undef fStack_18
#undef uStack_14
#undef iStack_10
#undef iStack_c
#undef uStack_8
#undef uStack_4
}
