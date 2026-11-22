/* Rebuilt from lomse.exe op_setplayerflagimp @ 0x004bb890 (508 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004bb7b0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4, undefined4))0x004bb7b0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_Invalid_player___0055d75c (*(char (*)[])0x0055d75c)

#define LOM_SELF_004bb890 1
void __cdecl rb_004bb890(void *volatile param_1)

{
  void *this;
  int iVar1;
  undefined *this_00;
  uint uVar2;
  undefined4 uVar3;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_18;
  typedef undefined4 _t_local_14;
  typedef uint _t_local_10;
  typedef uint _t_local_c;
  typedef uint _t_local_8;
  typedef uint _t_local_4;
#define local_18 (*(_t_local_18 *)(_fr + 0x0))
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
#define local_c (*(_t_local_c *)(_fr + 0xc))
#define local_8 (*(_t_local_8 *)(_fr + 0x10))
#define local_4 (*(_t_local_4 *)(_fr + 0x14))
  
  this = param_1;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_10 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_c = *(uint *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_10 = 0;
    local_c = local_4;
  }
  iVar1 = FUN_004026a0(&local_10,&local_4,(uint *)&local_14,&local_18);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    local_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    local_c = *(uint *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    local_10 = 0;
    local_c = local_4;
  }
  iVar1 = FUN_004026a0(&local_10,&local_8,(uint *)&local_18,&local_14);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uVar3 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uVar2 = *(uint *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar3 = 0;
    uVar2 = local_4;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    local_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    local_c = *(uint *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    local_10 = 0;
    local_c = local_4;
  }
  iVar1 = FUN_004026a0(&local_10,(uint *)&param_1,(uint *)&local_18,&local_14);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if (((int)param_1 < 0) || (0xf < (int)param_1)) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = &DAT_005af194 + (int)param_1 * 0x1d84;
  }
  if (this_00 == (undefined *)0x0) {
    FUN_004d41c0(this,s_Invalid_player___0055d75c);
    return;
  }
  FUN_004bb7b0(this_00,uVar3,uVar2,local_8,local_4);
  return;
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
