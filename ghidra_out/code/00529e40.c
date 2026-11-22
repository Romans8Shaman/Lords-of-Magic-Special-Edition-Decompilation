
void __thiscall FUN_00529e40(void *this,uint param_1,float param_2,uint *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint local_8;
  float local_4;
  
  iVar7 = FUN_00521e00(this);
  iVar8 = FUN_005228b0(this,param_1,param_2);
  pvVar6 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar6);
    *(undefined4 *)((int)pvVar6 + 0x90) = 0;
    *(undefined4 *)((int)pvVar6 + 0xa4) = 0;
  }
  else {
    iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
    iVar3 = *(int *)((int)pvVar6 + 0x50);
    *(undefined4 *)(iVar3 + iVar10 * 8) = 1;
    *(int *)(iVar3 + 4 + iVar10 * 8) = iVar8;
  }
  pvVar6 = DAT_005a7b78;
  uVar4 = *(undefined4 *)(iVar7 + 0x14c);
  uVar5 = *(undefined4 *)(iVar7 + 0x150);
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar6);
    *(undefined4 *)((int)pvVar6 + 0x90) = 0;
    *(undefined4 *)((int)pvVar6 + 0xa4) = 0;
  }
  else {
    iVar7 = *(int *)((int)DAT_005a7b78 + 0x50);
    iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
    *(undefined4 *)(iVar7 + iVar8 * 8) = uVar4;
    *(undefined4 *)(iVar7 + 4 + iVar8 * 8) = uVar5;
  }
  FUN_004d05e0(DAT_005a7b78,DAT_005d2f48,DAT_005d2f4c);
  piVar2 = param_4;
  *param_3 = 0;
  *param_4 = 0;
  pvVar6 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
    uVar9 = *(uint *)(*piVar1 + -8 + iVar7 * 8);
    local_4 = *(float *)(*piVar1 + -4 + iVar7 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar6);
    *(undefined4 *)((int)pvVar6 + 0x90) = 0;
    *(undefined4 *)((int)pvVar6 + 0xa4) = 0;
    uVar9 = 0;
  }
  uVar9 = uVar9 & 0xff;
  if (uVar9 == 1) {
    *piVar2 = (int)local_4;
  }
  else if (uVar9 == 2) {
    *piVar2 = (int)local_4 >> 8;
  }
  else if (uVar9 == 4) {
    lVar11 = __ftol((float10)local_4);
    *piVar2 = (int)lVar11;
  }
  else {
    FUN_00404ab0(pvVar6,0xe);
  }
  pvVar6 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar2 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
    local_8 = *(uint *)(*piVar2 + -8 + iVar7 * 8);
    local_4 = *(float *)(*piVar2 + -4 + iVar7 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar6);
    *(undefined4 *)((int)pvVar6 + 0x90) = 0;
    *(undefined4 *)((int)pvVar6 + 0xa4) = 0;
    local_8 = 0;
  }
  iVar7 = FUN_004026a0(&local_8,param_3,&param_1,&param_2);
  if (iVar7 == 0) {
    *(undefined4 *)((int)pvVar6 + 0x90) = 0xe;
    FUN_004d4550(pvVar6);
    *(undefined4 *)((int)pvVar6 + 0x90) = 0;
    *(undefined4 *)((int)pvVar6 + 0xa4) = 0;
  }
  return;
}


