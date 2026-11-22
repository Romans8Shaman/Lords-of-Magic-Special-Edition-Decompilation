
void __cdecl op_train_hire_multiple_getresourcesinfo(void *vm)

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
  undefined *puStack_58;
  uint uStack_54;
  uint uStack_50;
  int iStack_4c;
  uint uStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
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
  
  this = vm;
  iStack_40 = 1;
  iStack_3c = 1;
  iStack_44 = 1;
  iStack_38 = 1;
  iStack_4c = 1;
  FUN_0040adb0(vm,auStack_30);
  iVar2 = FUN_004026a0(auStack_30,&uStack_50,(uint *)&fStack_34,(float *)&puStack_58);
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
    iVar2 = (/*IC:004429b1*/**(code **)(*(int *)vm + 0x3c))(vm);
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
}


