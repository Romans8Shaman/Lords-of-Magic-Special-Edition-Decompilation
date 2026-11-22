/* Rebuilt from lomse.exe op_can_train_hire_multiple @ 0x004425b0 (711 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_004409e0 ((undefined4 (__cdecl *)(void *, undefined4 *))0x004409e0)
#define FUN_00441350 ((undefined4 (__thiscall *)(void *, uint, undefined4, uint *, int))0x00441350)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004bfdf0 ((int (__fastcall *)(int))0x004bfdf0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004425b0 1
void __cdecl rb_004425b0(void *vm)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  uchar _fr[0x50] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_piStack_48;
  typedef uint _t_uStack_44;
  typedef uint _t_uStack_40;
  typedef uint _t_uStack_3c;
  typedef undefined4 _t_fStack_38;
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
#define piStack_48 (*(_t_piStack_48 *)(_fr + 0x0))
#define uStack_44 (*(_t_uStack_44 *)(_fr + 0x4))
#define uStack_40 (*(_t_uStack_40 *)(_fr + 0x8))
#define uStack_3c (*(_t_uStack_3c *)(_fr + 0xc))
#define fStack_38 (*(_t_fStack_38 *)(_fr + 0x10))
#define fStack_34 (*(_t_fStack_34 *)(_fr + 0x14))
#define auStack_30 (*(_t_auStack_30 *)(_fr + 0x18))
#define uStack_28 (*(_t_uStack_28 *)(_fr + 0x20))
#define iStack_24 (*(_t_iStack_24 *)(_fr + 0x24))
#define iStack_20 (*(_t_iStack_20 *)(_fr + 0x28))
#define iStack_1c (*(_t_iStack_1c *)(_fr + 0x2c))
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x30))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x34))
#define iStack_10 (*(_t_iStack_10 *)(_fr + 0x38))
#define iStack_c (*(_t_iStack_c *)(_fr + 0x3c))
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x40))
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x44))
  
  FUN_0040adb0(vm,auStack_30);
  iVar2 = FUN_004026a0(auStack_30,&uStack_40,(uint *)&fStack_34,&fStack_38);
  if (iVar2 == 0) {
    FUN_00404ab0(vm,0xe);
    return;
  }
  FUN_0040adb0(vm,auStack_30);
  iVar2 = FUN_004026a0(auStack_30,&uStack_44,(uint *)&fStack_38,&fStack_34);
  if (iVar2 == 0) {
    FUN_00404ab0(vm,0xe);
    return;
  }
  FUN_0040adb0(vm,auStack_30);
  iVar2 = FUN_004026a0(auStack_30,&uStack_3c,(uint *)&fStack_38,&fStack_34);
  if (iVar2 == 0) {
    FUN_00404ab0(vm,0xe);
    return;
  }
  iVar2 = FUN_004409e0(vm,&piStack_48);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_00441350(piStack_48,uStack_3c,0,&uStack_14,uStack_40);
  iVar3 = FUN_00441350(piStack_48,uStack_3c,1,&uStack_28,uStack_44);
  iVar4 = ((undefined4 (__thiscall *)(__typeof__(piStack_48)))(**(code **)(*piStack_48 + 0x3c)))(piStack_48);
  if ((iVar4 < 0) || (0xf < iVar4)) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = &DAT_005af194 + iVar4 * 0x1d84;
  }
  if (*(int *)(puVar8 + 0xd04) < 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(puVar8 + 0xd04) >> 8;
  }
  if (*(int *)(puVar8 + 0xcfc) < 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(puVar8 + 0xcfc) >> 8;
  }
  if (*(int *)(puVar8 + 0xd08) < 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(puVar8 + 0xd08) >> 8;
  }
  bVar1 = (int)(uStack_44 * iStack_1c + uStack_40 * iStack_8) <= iVar6 * 0x100 &&
          ((int)(uStack_44 * uStack_28 + uStack_40 * uStack_14) <= iVar5 * 0x100 &&
          ((int)(uStack_44 * iStack_20 + uStack_40 * iStack_c) <= iVar4 * 0x100 &&
          (iVar3 != 0 && iVar2 != 0)));
  uVar7 = FUN_00482ac0(&DAT_005aa12c,piStack_48[0x20],3);
  if (uVar7 == 0) {
    iVar2 = FUN_004bfdf0((int)puVar8);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004bfdf0((int)puVar8);
    }
    if ((int)(uStack_44 * iStack_18 + uStack_40 * iStack_4) <= iVar2 * 0x100) goto LAB_00442800;
  }
  else if ((int)(uStack_44 * iStack_18 + uStack_40 * iStack_4) <=
           (int)((*(uint *)(uVar7 + 0xe0) & ((int)*(uint *)(uVar7 + 0xe0) < 0) - 1) * 0x100))
  goto LAB_00442800;
  bVar1 = false;
LAB_00442800:
  if (*(int *)(puVar8 + 0xd00) < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(puVar8 + 0xd00) >> 8;
  }
  if (iVar2 * 0x100 < (int)(uStack_44 * iStack_24 + uStack_40 * iStack_10)) {
    bVar1 = false;
  }
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)((int)vm + 0x50);
  iVar3 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar3;
  *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
  *(uint *)(iVar2 + 4 + iVar3 * 8) = -(uint)bVar1;
  return;
#undef piStack_48
#undef uStack_44
#undef uStack_40
#undef uStack_3c
#undef fStack_38
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
