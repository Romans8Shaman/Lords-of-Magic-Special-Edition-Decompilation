/* Rebuilt from lomse.exe FUN_0046c1f0 @ 0x0046c1f0 (501 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004918f0 ((int (__fastcall *)(void *))0x004918f0)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_00492de0 ((int (__thiscall *)(void *, int))0x00492de0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0046c1f0 1
int __fastcall rb_0046c1f0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  
  if (*(int *)(param_1 + 0x34) < 1) {
    return 0;
  }
  pvVar5 = (void *)FUN_00491c20(&DAT_005a7b50,*(int *)(param_1 + 0x28));
  if (pvVar5 == (void *)0x0) {
    return 0;
  }
  iVar6 = FUN_00492de0(&DAT_005a7b50,*(int *)(param_1 + 8));
  pvVar4 = DAT_005a7b78;
  if (iVar6 == 0) goto LAB_0046c3d7;
  iVar8 = *(int *)(param_1 + 0x24);
  if (((char)*(uint *)(param_1 + 0x20) != '\x06') || ((*(uint *)(param_1 + 0x20) & 0x100) != 0))
  goto LAB_0046c3d7;
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
    iVar3 = *(int *)((int)pvVar4 + 0x50);
    *(undefined4 *)(iVar3 + iVar7 * 8) = 1;
    *(undefined4 *)(iVar3 + 4 + iVar7 * 8) = uVar2;
  }
  pvVar4 = DAT_005a7b78;
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
    iVar3 = *(int *)((int)pvVar4 + 0x50);
    *(undefined4 *)(iVar3 + iVar7 * 8) = 1;
    *(undefined4 *)(iVar3 + 4 + iVar7 * 8) = uVar2;
  }
  pvVar4 = DAT_005a7b78;
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
    iVar3 = *(int *)((int)pvVar4 + 0x50);
    *(undefined4 *)(iVar3 + iVar7 * 8) = 1;
    *(undefined4 *)(iVar3 + 4 + iVar7 * 8) = uVar2;
  }
  FUN_004d05e0(DAT_005a7b78,*(uint *)(param_1 + 0x20),*(int **)(param_1 + 0x24));
  pvVar4 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
    cVar9 = (char)*(undefined4 *)(*piVar1 + -8 + iVar8 * 8);
    iVar8 = *(int *)(*piVar1 + -4 + iVar8 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    cVar9 = '\0';
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  iVar3 = *(int *)((int)pvVar4 + 0x90);
  *(undefined4 *)((int)pvVar4 + 0x90) = 0;
  *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  if (iVar3 == 0) {
    if (cVar9 != '\b') {
      *(undefined4 *)((int)pvVar4 + 0x90) = 0xe;
      FUN_004d4550(pvVar4);
      *(undefined4 *)((int)pvVar4 + 0x90) = 0;
      *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
      goto LAB_0046c3b6;
    }
  }
  else {
LAB_0046c3b6:
    iVar8 = 0;
  }
  if (iVar8 != 0) {
    iVar8 = FUN_004918f0(pvVar5);
    return iVar8 + *(int *)(iVar6 + 8);
  }
LAB_0046c3d7:
  iVar6 = FUN_004918f0(pvVar5);
  return iVar6;
}
