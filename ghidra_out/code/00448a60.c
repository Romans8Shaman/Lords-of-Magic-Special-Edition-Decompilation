
void __fastcall FUN_00448a60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar2 = *(int *)(param_1 + 0x48);
  if ((iVar2 != 0) && (local_10 = 0, 0 < *(int *)(iVar2 + 0x4c))) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)(iVar5 + 0xc4 + iVar2);
      if (((iVar3 < 0) || (DAT_005cd2f0 <= iVar3)) || (DAT_005cd2f4 == 0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = DAT_005cd2f4 + iVar3 * 1000;
      }
      if (((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == 5)) &&
         (iVar2 = FUN_0052b0e0((void *)(iVar5 + 0xc4 + iVar2),5), iVar2 == 0)) {
        local_c = 0;
        FUN_00527e90((void *)(iVar5 + 0xc4 + *(int *)(param_1 + 0x48)),0x2e,&local_c);
        *(int *)(iVar5 + 0xd0 + *(int *)(param_1 + 0x48)) = local_c;
        FUN_00522000((void *)(iVar5 + 0xc4 + *(int *)(param_1 + 0x48)),&local_4,&local_8);
        if ((0 < local_8 - local_4) &&
           (iVar2 = FUN_00528320((void *)(iVar5 + 0xc4 + *(int *)(param_1 + 0x48)),local_8 - local_4
                                ), pvVar4 = DAT_005a7b78, iVar2 != 0)) {
          uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x28);
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar4);
            *(undefined4 *)((int)pvVar4 + 0x90) = 0;
            *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
          }
          else {
            iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
            iVar2 = *(int *)((int)pvVar4 + 0x50);
            *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
            *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar1;
          }
          pvVar4 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar4);
            *(undefined4 *)((int)pvVar4 + 0x90) = 0;
            *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
          }
          else {
            iVar2 = *(int *)((int)DAT_005a7b78 + 0x50);
            iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
            *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
            *(int *)(iVar2 + 4 + iVar3 * 8) = local_10;
          }
          FUN_004d09a0(DAT_005a7b78,DAT_005a7cf4,DAT_005a7cf8,-2);
        }
        pvVar4 = (void *)FUN_00529180((int *)(iVar5 + 0xc4 + *(int *)(param_1 + 0x48)));
        if (pvVar4 != (void *)0x0) {
          local_14 = 0;
          FUN_00527e90((void *)(iVar5 + 0xc4 + *(int *)(param_1 + 0x48)),0x48,&local_14);
          if (local_14 < 0) {
            local_14 = 0;
          }
          FUN_0044bdd0(pvVar4,local_14);
        }
        FUN_0052b090((void *)(iVar5 + 0xc4 + *(int *)(param_1 + 0x48)),5,1);
      }
      iVar2 = *(int *)(param_1 + 0x48);
      local_10 = local_10 + 1;
      iVar5 = iVar5 + 0x4c;
    } while (local_10 < *(int *)(iVar2 + 0x4c));
  }
  return;
}


