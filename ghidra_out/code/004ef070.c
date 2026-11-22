
void __fastcall FUN_004ef070(int param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  char local_8 [4];
  undefined4 local_4;
  
  iVar4 = FUN_0043be20(param_1);
  pvVar3 = DAT_005a7b78;
  if (iVar4 == 0) {
    FUN_004ecc90((undefined4 *)&DAT_005cca70);
    return;
  }
  uVar7 = *(undefined4 *)(param_1 + 0x28);
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = uVar7;
  }
  FUN_004d05e0(DAT_005a7b78,*(uint *)(iVar4 + 0x10),*(int **)(iVar4 + 0x14));
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
    local_20 = *(undefined4 *)(*piVar1 + -8 + iVar4 * 8);
    local_1c = *(undefined4 *)(*piVar1 + -4 + iVar4 * 8);
  }
  else {
    FUN_00404ab0(DAT_005a7b78,6);
    local_20 = 0;
    local_1c = local_4;
  }
  pvVar3 = DAT_005a7b78;
  if ((char)local_20 != '\0') {
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
      local_18 = *(undefined4 *)(*(int *)((int)pvVar3 + 0x50) + -8 + iVar4 * 8);
      local_14 = *(undefined4 *)(*(int *)((int)pvVar3 + 0x50) + -4 + iVar4 * 8);
    }
    else {
      FUN_00404ab0(DAT_005a7b78,6);
      local_18 = 0;
      local_14 = local_4;
    }
    if ((char)local_18 != '\0') {
      if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
        piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
        iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
        local_10 = *(undefined4 *)(*piVar1 + -8 + iVar4 * 8);
        uVar7 = *(undefined4 *)(*piVar1 + -4 + iVar4 * 8);
      }
      else {
        FUN_00404ab0(DAT_005a7b78,6);
        local_10 = 0;
        uVar7 = local_4;
      }
      pvVar3 = DAT_005a7b78;
      if ((char)local_10 != '\0') {
        if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
          piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
          iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
          cVar6 = (char)*(undefined4 *)(*piVar1 + -8 + iVar4 * 8);
          uVar8 = *(undefined4 *)(*piVar1 + -4 + iVar4 * 8);
        }
        else {
          FUN_00404ab0(DAT_005a7b78,6);
          cVar6 = '\0';
          uVar8 = local_4;
        }
        iVar4 = FUN_0041da00((int)pvVar3);
        if (iVar4 == 0) {
          if (cVar6 != '\b') {
            *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
            FUN_004d4550(pvVar3);
            uVar8 = 0;
            *(undefined4 *)((int)pvVar3 + 0x90) = 0;
            *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
          }
        }
        else {
          uVar8 = 0;
        }
        pvVar3 = DAT_005a7b78;
        FUN_0040adb0(DAT_005a7b78,(undefined4 *)local_8);
        iVar4 = *(int *)((int)pvVar3 + 0x90);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
        if (iVar4 == 0) {
          if (local_8[0] != '\b') {
            *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
            FUN_004d4550(pvVar3);
            *(undefined4 *)((int)pvVar3 + 0x90) = 0;
            *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
            local_4 = 0;
          }
        }
        else {
          local_4 = 0;
        }
        FUN_004eccc0(&DAT_005cca70,local_4,uVar8,local_10,uVar7,local_18,local_14,local_20,local_1c)
        ;
      }
    }
  }
  return;
}


