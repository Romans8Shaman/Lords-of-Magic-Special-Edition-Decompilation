
void __fastcall FUN_004473e0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar4 = *(int *)(param_1 + 0x48);
  if ((iVar4 != 0) && (local_10 = 0, 0 < *(int *)(iVar4 + 0x4c))) {
    iVar6 = 0;
    do {
      iVar5 = *(int *)(iVar6 + 0xc4 + iVar4);
      if (((iVar5 < 0) || (DAT_005cd2f0 <= iVar5)) || (DAT_005cd2f4 == 0)) {
        iVar5 = 0;
      }
      else {
        iVar5 = DAT_005cd2f4 + iVar5 * 1000;
      }
      if (((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) == 0)) && (*(int *)(iVar5 + 0x164) != 8)) {
        local_c = 0;
        FUN_00527e90((void *)(iVar6 + 0xc4 + iVar4),0x2e,&local_c);
        iVar4 = *(int *)(param_1 + 0x48) + iVar6;
        if (local_c <= *(int *)(iVar4 + 0xd0)) {
          FUN_00522000((void *)(iVar4 + 0xc4),&local_4,&local_8);
          iVar4 = local_8 - local_4;
          FUN_0052b090((void *)(iVar6 + 0xc4 + *(int *)(param_1 + 0x48)),0,1);
          if ((0 < iVar4) &&
             (iVar4 = FUN_00528320((void *)(iVar6 + 0xc4 + *(int *)(param_1 + 0x48)),iVar4),
             pvVar3 = DAT_005a7b78, iVar4 != 0)) {
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
              *(int *)(iVar4 + 4 + iVar5 * 8) = local_10;
            }
            FUN_004d09a0(DAT_005a7b78,DAT_005a7cf4,DAT_005a7cf8,-2);
          }
          pvVar3 = DAT_005a7b78;
          if ((char)DAT_005aa188 != '\0') {
            sVar1 = *(short *)(param_1 + 0x56);
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
              *(int *)(iVar4 + 4 + iVar5 * 8) = (int)sVar1;
            }
            pvVar3 = DAT_005a7b78;
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
              *(int *)(iVar4 + 4 + iVar5 * 8) = local_10;
            }
            pvVar3 = DAT_005a7b78;
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
              iVar4 = *(int *)((int)pvVar3 + 0x50);
              *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
              *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = 0;
            }
            FUN_004d05e0(DAT_005a7b78,DAT_005aa188,DAT_005aa18c);
          }
        }
      }
      *(undefined4 *)(iVar6 + 0xd0 + *(int *)(param_1 + 0x48)) = 0;
      iVar4 = *(int *)(param_1 + 0x48);
      local_10 = local_10 + 1;
      iVar6 = iVar6 + 0x4c;
    } while (local_10 < *(int *)(iVar4 + 0x4c));
  }
  return;
}


