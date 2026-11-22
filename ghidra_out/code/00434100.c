
undefined4 __thiscall FUN_00434100(void *this)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  void *pvVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  uint local_1c;
  float local_18;
  float local_14;
  int local_10;
  int local_c;
  uint local_8 [2];
  
  pvVar6 = DAT_005a7b78;
  local_1c = 0;
  switch(*(undefined1 *)((int)this + 4)) {
  case 1:
    sVar1 = *(short *)this;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      FUN_00404ab0(DAT_005a7b78,3);
    }
    else {
      iVar2 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar2;
      iVar7 = *(int *)((int)pvVar6 + 0x50);
      *(undefined4 *)(iVar7 + iVar2 * 8) = 1;
      *(int *)(iVar7 + 4 + iVar2 * 8) = (int)sVar1;
    }
    FUN_004d05e0(DAT_005a7b78,DAT_00578a68,DAT_00578a6c);
    pvVar6 = DAT_005a7b78;
    FUN_0040adb0(DAT_005a7b78,local_8);
    pfVar9 = &local_18;
    pfVar8 = &local_14;
    break;
  case 2:
    sVar1 = *(short *)this;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      FUN_00404ab0(DAT_005a7b78,3);
    }
    else {
      iVar2 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar2;
      iVar7 = *(int *)((int)pvVar6 + 0x50);
      *(undefined4 *)(iVar7 + iVar2 * 8) = 1;
      *(int *)(iVar7 + 4 + iVar2 * 8) = (int)sVar1;
    }
    FUN_004d05e0(DAT_005a7b78,DAT_005789c8,DAT_005789cc);
    pvVar6 = DAT_005a7b78;
    FUN_0040adb0(DAT_005a7b78,local_8);
    pfVar9 = &local_14;
    pfVar8 = &local_18;
    break;
  case 3:
    sVar1 = *(short *)this;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      FUN_00404ab0(DAT_005a7b78,3);
    }
    else {
      iVar2 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar2;
      iVar7 = *(int *)((int)pvVar6 + 0x50);
      *(undefined4 *)(iVar7 + iVar2 * 8) = 1;
      *(int *)(iVar7 + 4 + iVar2 * 8) = (int)sVar1;
    }
    FUN_004d05e0(DAT_005a7b78,DAT_005789c0,DAT_005789c4);
    pvVar6 = DAT_005a7b78;
    FUN_0040adb0(DAT_005a7b78,local_8);
    pfVar9 = &local_14;
    pfVar8 = &local_18;
    break;
  case 4:
    FUN_0041d1d0(DAT_005a7b78,1,(int)*(short *)this);
    FUN_004d05e0(DAT_005a7b78,DAT_005789d8,DAT_005789dc);
    pvVar6 = DAT_005a7b78;
    FUN_0040adb0(DAT_005a7b78,local_8);
    pfVar9 = &local_14;
    pfVar8 = &local_18;
    break;
  case 5:
    FUN_00432be0(this);
    uVar4 = FUN_00482ac0(&DAT_005aa12c,(int)*(short *)this,0);
    if (uVar4 == 0) {
      return 0;
    }
    uVar5 = FUN_005221f0((int)*(short *)this,(int)*(char *)((int)this + 5));
    return uVar5;
  case 6:
    iVar7 = FUN_004efe80(&DAT_005aee6c,(int)*(short *)this);
    FUN_004d05e0(DAT_005a7b78,*(uint *)(iVar7 + 0x8c),*(int **)(iVar7 + 0x90));
    pvVar6 = DAT_005a7b78;
    FUN_0040adb0(DAT_005a7b78,local_8);
    pfVar9 = &local_14;
    pfVar8 = &local_18;
    break;
  case 7:
    iVar7 = 0;
    piVar3 = (int *)FUN_004298a0(&DAT_005aa12c,(int)*(short *)this,&local_c,&local_10);
    if (piVar3 != (int *)0x0) {
      iVar7 = FUN_00427b80(*piVar3);
    }
    if (iVar7 == 0) {
      return 0;
    }
    uVar5 = FUN_00427e40(iVar7);
    return uVar5;
  case 8:
    uVar4 = FUN_00482ac0(&DAT_005aa12c,(int)*(short *)this,3);
    uVar5 = FUN_00451970(uVar4);
    return uVar5;
  case 9:
    uVar4 = FUN_00482ac0(&DAT_005aa12c,(int)*(short *)this,2);
    uVar5 = FUN_00440e90(uVar4);
    return uVar5;
  case 10:
    FUN_00432be0(this);
    pvVar6 = (void *)FUN_00482ac0(&DAT_005aa12c,(int)*(short *)this,0);
    iVar7 = FUN_00421960(pvVar6);
    return iVar7;
  case 0xb:
    uVar4 = FUN_00482ac0(&DAT_005aa12c,(int)*(short *)this,1);
    uVar5 = FUN_0050fe80(uVar4);
    return uVar5;
  default:
    return 0;
  }
  iVar7 = FUN_004026a0(local_8,&local_1c,(uint *)pfVar8,pfVar9);
  if (iVar7 == 0) {
    *(undefined4 *)((int)pvVar6 + 0x90) = 0xe;
    FUN_004d4550(pvVar6);
    *(undefined4 *)((int)pvVar6 + 0x90) = 0;
    *(undefined4 *)((int)pvVar6 + 0xa4) = 0;
    return 0;
  }
  return local_1c;
}


