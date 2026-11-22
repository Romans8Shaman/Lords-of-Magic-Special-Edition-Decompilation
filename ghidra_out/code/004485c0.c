
void __fastcall FUN_004485c0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_14;
  int local_10;
  int local_c [2];
  undefined4 local_4;
  
  iVar4 = *(int *)(param_1 + 0x48);
  if ((iVar4 != 0) && (local_14 = 0, 0 < *(int *)(iVar4 + 0x4c))) {
    iVar7 = 0;
    do {
      iVar5 = *(int *)(iVar7 + 0xc4 + iVar4);
      if (((iVar5 < 0) || (DAT_005cd2f0 <= iVar5)) || (DAT_005cd2f4 == 0)) {
        iVar5 = 0;
      }
      else {
        iVar5 = DAT_005cd2f4 + iVar5 * 1000;
      }
      if (((((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) == 3)) &&
           ((iVar5 = *(int *)(iVar5 + 0x164), iVar5 == 1 || ((iVar5 == 0 || (iVar5 == 2)))))) &&
          (iVar4 = FUN_00521fc0((int *)(iVar7 + 0xc4 + iVar4)), 0x14 < iVar4)) &&
         (iVar4 = FUN_0052b0e0((void *)(iVar7 + 0xc4 + *(int *)(param_1 + 0x48)),3), iVar4 == 0)) {
        FUN_0052b090((void *)(iVar7 + 0xc4 + *(int *)(param_1 + 0x48)),3,1);
        *(int *)(iVar7 + 0xd4 + *(int *)(param_1 + 0x48)) =
             *(int *)(iVar7 + 0xd4 + *(int *)(param_1 + 0x48)) + 0x28a00;
        FUN_00522000((void *)(iVar7 + 0xc4 + *(int *)(param_1 + 0x48)),&local_10,local_c);
        iVar4 = FUN_00504f00(0xc,0x14);
        FUN_00527d00((void *)(iVar7 + 0xc4 + *(int *)(param_1 + 0x48)),0x98,
                     (undefined4 *)(local_10 - iVar4));
        pvVar3 = DAT_005a7b78;
        if (DAT_005a7d84 != 0) {
          uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x28);
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar3);
            *(undefined4 *)((int)pvVar3 + 0x90) = 0;
            *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
          }
          else {
            iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
            iVar4 = *(int *)((int)pvVar3 + 0x50);
            *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
            *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = uVar2;
          }
          pvVar3 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar3);
            *(undefined4 *)((int)pvVar3 + 0x90) = 0;
            *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
          }
          else {
            iVar4 = *(int *)((int)DAT_005a7b78 + 0x50);
            iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
            *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
            *(int *)(iVar4 + 4 + iVar5 * 8) = local_14;
          }
          pvVar3 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar3);
            *(undefined4 *)((int)pvVar3 + 0x90) = 0;
            *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
          }
          else {
            iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
            iVar4 = *(int *)((int)pvVar3 + 0x50);
            *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
            *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = 3;
          }
          FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
          pvVar3 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
            piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
            iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
            uVar6 = *(uint *)(*piVar1 + -8 + iVar4 * 8);
            local_4 = *(undefined4 *)(*piVar1 + -4 + iVar4 * 8);
          }
          else {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
            FUN_004d4550(pvVar3);
            *(undefined4 *)((int)pvVar3 + 0x90) = 0;
            *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
            uVar6 = 0;
          }
          uVar6 = uVar6 & 0xff;
          if (((uVar6 != 1) && (uVar6 != 2)) && (uVar6 != 4)) {
            *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
            FUN_004d4550(pvVar3);
            *(undefined4 *)((int)pvVar3 + 0x90) = 0;
            *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
          }
        }
      }
      local_14 = local_14 + 1;
      *(undefined4 *)(iVar7 + 0xd0 + *(int *)(param_1 + 0x48)) = 0;
      iVar4 = *(int *)(param_1 + 0x48);
      iVar7 = iVar7 + 0x4c;
    } while (local_14 < *(int *)(iVar4 + 0x4c));
  }
  return;
}


