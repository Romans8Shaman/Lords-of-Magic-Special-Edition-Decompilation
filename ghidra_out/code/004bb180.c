
void __fastcall FUN_004bb180(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint local_1c;
  int local_18;
  int local_14;
  float local_10;
  uint local_c;
  uint local_8;
  undefined4 local_4;
  
  puVar6 = (undefined4 *)(param_1 + 0xce8);
  iVar7 = 5;
  do {
    *puVar6 = puVar6[5];
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_18 = param_1 + 0xd28;
  iVar7 = 0;
  local_14 = param_1;
  do {
    pvVar3 = DAT_005a7b78;
    if ((iVar7 < 0) || (iVar8 = local_18, 0xf < iVar7)) {
      iVar8 = 0;
    }
    if (iVar8 != 0) {
      local_1c = 0x32;
      if (DAT_005a7d84 != 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x15a8);
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
          *(int *)(iVar5 + 4 + iVar4 * 8) = iVar7;
        }
        pvVar3 = DAT_005a7b78;
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
          *(undefined4 *)(iVar5 + 4 + iVar4 * 8) = 10;
        }
        FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
        pvVar3 = DAT_005a7b78;
        if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
          piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
          iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
          local_8 = *(uint *)(*piVar1 + -8 + iVar5 * 8);
          local_4 = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
        }
        else {
          FUN_00404ab0(DAT_005a7b78,6);
          local_8 = 0;
        }
        iVar5 = FUN_004026a0(&local_8,&local_1c,&local_c,&local_10);
        if (iVar5 == 0) {
          FUN_00404ab0(pvVar3,0xe);
        }
      }
      FUN_0049f3c0((void *)(iVar8 + 0x18),local_1c);
      param_1 = local_14;
    }
    iVar7 = iVar7 + 1;
    local_18 = local_18 + 0x88;
  } while (iVar7 < 0x10);
  if (*(int *)(param_1 + 0x15a8) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
    puVar6 = FUN_0052d240((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    if (puVar6 != (undefined4 *)0x0) {
      FUN_0052ff40(&DAT_005a7d90 + DAT_005a7d8c * 0x400,puVar6);
    }
  }
  return;
}


