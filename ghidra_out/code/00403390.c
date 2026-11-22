
uint FUN_00403390(void *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int local_60;
  int local_5c [2];
  float local_54;
  int local_50 [20];
  
  pvVar3 = DAT_005a7b78;
  if (DAT_005a7d5c == 0) {
    local_50[0] = 0;
    local_50[1] = 0;
    local_50[2] = 0;
    local_50[3] = 0;
    local_50[4] = 0;
    local_50[5] = 0;
    local_50[6] = 1;
    local_50[7] = 1;
    local_50[8] = 1;
    local_50[9] = 1;
    local_50[10] = 1;
    local_50[0xb] = 1;
    local_50[0xc] = 1;
    local_50[0xd] = 1;
    local_50[0xe] = 1;
    local_50[0xf] = 1;
    local_50[0x10] = 2;
    local_50[0x11] = 2;
    local_50[0x12] = 2;
    local_50[0x13] = 3;
    iVar5 = FUN_00504f00(0,0x14);
    iVar4 = local_50[iVar5];
    if (iVar4 == 0) {
      return 0;
    }
    if (iVar4 == 3) {
      return 1;
    }
    if (iVar4 == 1) {
      iVar4 = FUN_00506010(param_1,1);
      iVar6 = FUN_00522870(param_2);
      if (iVar4 < iVar6) {
        iVar5 = iVar5 + (iVar4 - iVar6) * 2;
      }
      else {
        iVar5 = iVar5 + (iVar4 - iVar6);
      }
    }
    FUN_00527e90((void *)((int)param_1 + 0xc4),3,&local_60);
    FUN_00527e90((void *)(param_2 + 0xc4),3,local_5c);
    iVar5 = iVar5 + -4 + (local_60 - local_5c[0]);
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    else if (3 < iVar5) {
      iVar5 = 3;
    }
    return (uint)(local_50[iVar5] != 0);
  }
  uVar2 = *(undefined4 *)((int)param_1 + 0x28);
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  else {
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
    iVar5 = *(int *)((int)pvVar3 + 0x50);
    *(undefined4 *)(iVar5 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar5 + 4 + iVar4 * 8) = uVar2;
  }
  pvVar3 = DAT_005a7b78;
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  else {
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
    *(undefined4 *)(iVar5 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar5 + 4 + iVar4 * 8) = uVar2;
  }
  FUN_004d09a0(DAT_005a7b78,DAT_005a7d5c,DAT_005a7d60,-1);
  pvVar3 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    uVar7 = *(uint *)(*piVar1 + -8 + iVar5 * 8);
    local_54 = *(float *)(*piVar1 + -4 + iVar5 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    uVar7 = 0;
  }
  uVar7 = uVar7 & 0xff;
  if (uVar7 == 1) {
    return (uint)(local_54 != 0.0);
  }
  if (uVar7 == 2) {
    return (uint)((int)local_54 >> 8 != 0);
  }
  if (uVar7 == 4) {
    lVar8 = __ftol((float10)local_54);
    return (uint)((int)lVar8 != 0);
  }
  *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
  FUN_004d4550(pvVar3);
  *(undefined4 *)((int)pvVar3 + 0x90) = 0;
  *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  return 0;
}


