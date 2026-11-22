
void __cdecl op_can_train_hire_multiple(void *vm)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  int *piStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  float fStack_38;
  float fStack_34;
  uint auStack_30 [2];
  uint uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
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
  iVar4 = (/*IC:004426d3*/**(code **)(*piStack_48 + 0x3c))(piStack_48);
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
}


