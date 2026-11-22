
undefined4 __thiscall FUN_004344a0(void *this,int param_1,int param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  float local_4;
  
  pvVar1 = DAT_005a7b78;
  iVar4 = *(int *)(param_1 + 8);
  if (param_2 == iVar4) {
    iVar4 = *(int *)(param_1 + 0xc);
  }
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar2;
    iVar5 = *(int *)((int)pvVar1 + 0x50);
    *(undefined4 *)(iVar5 + iVar2 * 8) = 1;
    *(int *)(iVar5 + 4 + iVar2 * 8) = param_2;
  }
  pvVar1 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
    iVar2 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar2;
    *(undefined4 *)(iVar5 + iVar2 * 8) = 1;
    *(int *)(iVar5 + 4 + iVar2 * 8) = iVar4;
  }
  uVar3 = FUN_00434100(this);
  pvVar1 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    iVar4 = *(int *)((int)pvVar1 + 0x50);
    *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
    *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = uVar3;
  }
  uVar6 = (uint)(param_2 == *(int *)(param_1 + 8));
  if (param_3 == 0) {
    uVar6 = 1 - uVar6;
  }
  if (uVar6 == 0) {
    uVar6 = DAT_00578a78;
    piVar8 = DAT_00578a7c;
  }
  else {
    uVar6 = DAT_00578a70;
    piVar8 = DAT_00578a74;
  }
  FUN_004d05e0(DAT_005a7b78,uVar6,piVar8);
  pvVar1 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar8 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
    uVar6 = *(uint *)(*piVar8 + -8 + iVar4 * 8);
    local_4 = *(float *)(*piVar8 + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uVar6 = 0;
  }
  uVar6 = uVar6 & 0xff;
  if (uVar6 != 1) {
    if (uVar6 == 2) {
      return (int)local_4 >> 8;
    }
    if (uVar6 == 4) {
      lVar7 = __ftol((float10)local_4);
      return (int)lVar7;
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    local_4 = 1.4013e-45;
  }
  return local_4;
}


