/* Rebuilt from lomse.exe op_train_hire_multiple_getresourcesinfo @ 0x00442880 (931 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_004409e0 ((undefined4 (__cdecl *)(void *, undefined4 *))0x004409e0)
#define FUN_004414a0 ((undefined4 (__thiscall *)(void *, uint, undefined4, uint *))0x004414a0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004bfdf0 ((int (__fastcall *)(int))0x004bfdf0)

#define LOM_SELF_00442880 1
void __cdecl rb_00442880(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uchar _fr[0x60] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined * _t_puStack_58;
  typedef uint _t_uStack_54;
  typedef uint _t_uStack_50;
  typedef int _t_iStack_4c;
  typedef uint _t_uStack_48;
  typedef int _t_iStack_44;
  typedef int _t_iStack_40;
  typedef int _t_iStack_3c;
  typedef int _t_iStack_38;
  typedef undefined4 _t_fStack_34;
  typedef uint _t_auStack_30[2];
  typedef uint _t_uStack_28;
  typedef int _t_iStack_24;
  typedef int _t_iStack_20;
  typedef int _t_iStack_1c;
  typedef int _t_iStack_18;
  typedef uint _t_uStack_14;
  typedef int _t_iStack_10;
  typedef int _t_iStack_c;
  typedef int _t_iStack_8;
  typedef int _t_iStack_4;
#define puStack_58 (*(_t_puStack_58 *)(_fr + 0x0))
#define uStack_54 (*(_t_uStack_54 *)(_fr + 0x4))
#define uStack_50 (*(_t_uStack_50 *)(_fr + 0x8))
#define iStack_4c (*(_t_iStack_4c *)(_fr + 0xc))
#define uStack_48 (*(_t_uStack_48 *)(_fr + 0x10))
#define iStack_44 (*(_t_iStack_44 *)(_fr + 0x14))
#define iStack_40 (*(_t_iStack_40 *)(_fr + 0x18))
#define iStack_3c (*(_t_iStack_3c *)(_fr + 0x1c))
#define iStack_38 (*(_t_iStack_38 *)(_fr + 0x20))
#define fStack_34 (*(_t_fStack_34 *)(_fr + 0x24))
#define auStack_30 (*(_t_auStack_30 *)(_fr + 0x28))
#define uStack_28 (*(_t_uStack_28 *)(_fr + 0x30))
#define iStack_24 (*(_t_iStack_24 *)(_fr + 0x34))
#define iStack_20 (*(_t_iStack_20 *)(_fr + 0x38))
#define iStack_1c (*(_t_iStack_1c *)(_fr + 0x3c))
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x40))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x44))
#define iStack_10 (*(_t_iStack_10 *)(_fr + 0x48))
#define iStack_c (*(_t_iStack_c *)(_fr + 0x4c))
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x50))
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x54))
  
  this = vm;
  iStack_40 = 1;
  iStack_3c = 1;
  iStack_44 = 1;
  iStack_38 = 1;
  iStack_4c = 1;
  FUN_0040adb0(vm,auStack_30);
  iVar2 = FUN_004026a0(auStack_30,&uStack_50,(uint *)&fStack_34,(undefined4 *)&puStack_58);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  FUN_0040adb0(this,auStack_30);
  iVar2 = FUN_004026a0(auStack_30,&uStack_54,(uint *)&puStack_58,&fStack_34);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  FUN_0040adb0(this,auStack_30);
  iVar2 = FUN_004026a0(auStack_30,&uStack_48,(uint *)&puStack_58,&fStack_34);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  iVar2 = FUN_004409e0(this,&vm);
  if (iVar2 != 0) {
    iVar2 = FUN_004414a0(vm,uStack_48,0,&uStack_14);
    if (iVar2 == 0) {
      iStack_4c = 0;
    }
    iVar2 = FUN_004414a0(vm,uStack_48,1,&uStack_28);
    if (iVar2 == 0) {
      iStack_4c = 0;
    }
    iVar2 = ((undefined4 (__thiscall *)(__typeof__(vm)))(**(code **)(*(int *)vm + 0x3c)))(vm);
    if ((iVar2 < 0) || (0xf < iVar2)) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = &DAT_005af194 + iVar2 * 0x1d84;
    }
    if (*(int *)(puVar3 + 0xd04) < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(puVar3 + 0xd04) >> 8;
    }
    iVar8 = uStack_54 * iStack_20;
    iVar9 = uStack_50 * iStack_c;
    if (*(int *)(puVar3 + 0xcfc) < 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(puVar3 + 0xcfc) >> 8;
    }
    if (iVar4 * 0x100 < (int)(uStack_54 * uStack_28 + uStack_50 * uStack_14)) {
      iStack_44 = 0;
    }
    if (*(int *)(puVar3 + 0xd08) < 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(puVar3 + 0xd08) >> 8;
    }
    if (iVar4 * 0x100 < (int)(uStack_54 * iStack_1c + uStack_50 * iStack_8)) {
      iStack_40 = 0;
    }
    puStack_58 = puVar3;
    uVar5 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)vm + 0x80),3);
    if (uVar5 == 0) {
      iVar4 = FUN_004bfdf0((int)puVar3);
      if (iVar4 < 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004bfdf0((int)puVar3);
      }
    }
    else {
      uVar5 = *(uint *)(uVar5 + 0xe0) & ((int)*(uint *)(uVar5 + 0xe0) < 0) - 1;
    }
    if ((int)(uVar5 * 0x100) < (int)(uStack_54 * iStack_18 + uStack_50 * iStack_4)) {
      iVar4 = 0;
    }
    else {
      iVar4 = iStack_3c;
    }
    if (*(int *)(puStack_58 + 0xd00) < 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(puStack_58 + 0xd00) >> 8;
    }
    if (iVar6 * 0x100 < (int)(uStack_54 * iStack_24 + uStack_50 * iStack_10)) {
      iVar6 = 0;
    }
    else {
      iVar6 = iStack_38;
    }
    if (*(int *)((int)this + 0x54) == 0) {
      FUN_00404ab0(this,3);
    }
    else {
      iVar1 = *(int *)((int)this + 0x50);
      iVar7 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar7;
      *(undefined4 *)(iVar1 + iVar7 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar7 * 8) = -(uint)(iVar8 + iVar9 <= iVar2 * 0x100);
    }
    if (*(int *)((int)this + 0x54) == 0) {
      FUN_00404ab0(this,3);
    }
    else {
      iVar2 = *(int *)((int)this + 0x50);
      iVar8 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar8;
      *(undefined4 *)(iVar2 + iVar8 * 8) = 1;
      *(uint *)(iVar2 + 4 + iVar8 * 8) = -(uint)(iStack_44 != 0);
    }
    if (*(int *)((int)this + 0x54) == 0) {
      FUN_00404ab0(this,3);
    }
    else {
      iVar2 = *(int *)((int)this + 0x50);
      iVar8 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar8;
      *(undefined4 *)(iVar2 + iVar8 * 8) = 1;
      *(uint *)(iVar2 + 4 + iVar8 * 8) = -(uint)(iStack_40 != 0);
    }
    if (*(int *)((int)this + 0x54) == 0) {
      FUN_00404ab0(this,3);
    }
    else {
      iVar2 = *(int *)((int)this + 0x50);
      iVar8 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar8;
      *(undefined4 *)(iVar2 + iVar8 * 8) = 1;
      *(uint *)(iVar2 + 4 + iVar8 * 8) = -(uint)(iVar4 != 0);
    }
    if (*(int *)((int)this + 0x54) == 0) {
      FUN_00404ab0(this,3);
    }
    else {
      iVar2 = *(int *)((int)this + 0x50);
      iVar8 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar8;
      *(undefined4 *)(iVar2 + iVar8 * 8) = 1;
      *(uint *)(iVar2 + 4 + iVar8 * 8) = -(uint)(iVar6 != 0);
    }
    if (*(int *)((int)this + 0x54) != 0) {
      iVar8 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar8;
      iVar2 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar2 + iVar8 * 8) = 1;
      *(uint *)(iVar2 + 4 + iVar8 * 8) = -(uint)(iStack_4c != 0);
      return;
    }
    FUN_00404ab0(this,3);
  }
  return;
#undef puStack_58
#undef uStack_54
#undef uStack_50
#undef iStack_4c
#undef uStack_48
#undef iStack_44
#undef iStack_40
#undef iStack_3c
#undef iStack_38
#undef fStack_34
#undef auStack_30
#undef uStack_28
#undef iStack_24
#undef iStack_20
#undef iStack_1c
#undef iStack_18
#undef uStack_14
#undef iStack_10
#undef iStack_c
#undef iStack_8
#undef iStack_4
}
