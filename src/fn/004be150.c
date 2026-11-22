/* Rebuilt from lomse.exe op_getincomeexpense @ 0x004be150 (535 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004be0c0 ((int (__thiscall *)(void *, int))0x004be0c0)
#define FUN_004be140 ((undefined4 (__thiscall *)(void *, int))0x004be140)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004be150 1
void __cdecl rb_004be150(void *vm)

{
  void *this;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *this_00;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_14;
  typedef undefined4 _t_uStack_10;
  typedef uint _t_uStack_c;
  typedef undefined4 _t_fStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x8))
#define uStack_c (*(_t_uStack_c *)(_fr + 0xc))
#define fStack_8 (*(_t_fStack_8 *)(_fr + 0x10))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x14))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_14 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_10 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_14 = 0;
    uStack_10 = uStack_4;
  }
  iVar1 = FUN_004026a0(&uStack_14,(uint *)&vm,&uStack_c,&fStack_8);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (((int)vm < 0) || (0xf < (int)vm)) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = &DAT_005af194 + (int)vm * 0x1d84;
  }
  if (this_00 != (undefined *)0x0) {
    iVar1 = FUN_004be0c0(this_00,3);
    uVar2 = FUN_004be140(this_00,3);
    iVar3 = FUN_004be0c0(this_00,0);
    uStack_14 = FUN_004be140(this_00,0);
    uStack_c = FUN_004be0c0(this_00,2);
    fStack_8 = __BC(undefined4, FUN_004be140(this_00,2));
    if (*(int *)((int)this + 0x54) == 0) {
      *(undefined4 *)((int)this + 0x90) = 3;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 0x50);
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      *(undefined4 *)(iVar5 + iVar4 * 8) = 1;
      *(int *)(iVar5 + 4 + iVar4 * 8) = iVar1;
    }
    if (*(int *)((int)this + 0x54) == 0) {
      FUN_00404ab0(this,3);
    }
    else {
      iVar1 = *(int *)((int)this + 0x50);
      iVar5 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar5;
      *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar5 * 8) = uVar2;
    }
    if (*(int *)((int)this + 0x54) == 0) {
      *(undefined4 *)((int)this + 0x90) = 3;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
    }
    else {
      iVar1 = *(int *)((int)this + 0x50);
      iVar5 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar5;
      *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar5 * 8) = iVar3;
    }
    if (*(int *)((int)this + 0x54) == 0) {
      FUN_00404ab0(this,3);
    }
    else {
      iVar1 = *(int *)((int)this + 0x50);
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar3 * 8) = uStack_14;
    }
    if (*(int *)((int)this + 0x54) == 0) {
      FUN_00404ab0(this,3);
    }
    else {
      iVar1 = *(int *)((int)this + 0x50);
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar3 * 8) = uStack_c;
    }
    if (*(int *)((int)this + 0x54) != 0) {
      iVar1 = *(int *)((int)this + 0x50);
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = fStack_8;
      return;
    }
    FUN_00404ab0(this,3);
  }
  return;
#undef uStack_14
#undef uStack_10
#undef uStack_c
#undef fStack_8
#undef uStack_4
}
