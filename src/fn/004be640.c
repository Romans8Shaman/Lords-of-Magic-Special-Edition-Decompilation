/* Rebuilt from lomse.exe op_currentunitsexpense @ 0x004be640 (535 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004be000 ((int (__stdcall *)(int, uint))0x004be000)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004be640 1
void __cdecl rb_004be640(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_14;
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x8))
#define fStack_c (*(_t_fStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x14))
  
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
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_c,&fStack_10);
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (((int)uStack_14 < 0) || (0xf < (int)uStack_14)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = &DAT_005af194 + uStack_14 * 0x1d84;
  }
  if (puVar5 != (undefined *)0x0) {
    iVar1 = FUN_004be000(3,(uint)vm);
    iVar2 = FUN_004be000(0,(uint)vm);
    fStack_10 = __BC(undefined4, FUN_004be000(2,(uint)vm));
    if (*(int *)((int)this + 0x54) == 0) {
      *(undefined4 *)((int)this + 0x90) = 3;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
    }
    else {
      iVar4 = *(int *)((int)this + 0x50);
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
      *(int *)(iVar4 + 4 + iVar3 * 8) = iVar1;
    }
    if (*(int *)((int)this + 0x54) == 0) {
      *(undefined4 *)((int)this + 0x90) = 3;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
    }
    else {
      iVar1 = *(int *)((int)this + 0x50);
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar4 * 8) = iVar2;
    }
    if (*(int *)((int)this + 0x54) != 0) {
      iVar1 = *(int *)((int)this + 0x50);
      iVar2 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar2;
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = fStack_10;
      return;
    }
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  return;
#undef uStack_14
#undef fStack_10
#undef fStack_c
#undef uStack_8
#undef uStack_4
}
