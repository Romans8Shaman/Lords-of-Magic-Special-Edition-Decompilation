
undefined4 __thiscall FUN_00441000(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  float local_24;
  float local_20;
  uint local_1c;
  undefined4 local_18;
  int local_14 [5];
  
  piVar6 = param_1;
  FUN_004fd4b0(param_1);
  pvVar3 = DAT_005a7b78;
  if ((char)DAT_00578f58 == '\x06') {
    if ((DAT_00578f58 & 0x100) != 0) {
      return 0;
    }
    uVar2 = *(undefined4 *)((int)this + 0x28);
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
    FUN_004d05e0(DAT_005a7b78,DAT_00578f58,DAT_00578f5c);
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      local_1c = *(uint *)(*piVar1 + -8 + iVar5 * 8);
      local_18 = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
    }
    else {
      FUN_00404ab0(DAT_005a7b78,6);
      local_1c = 0;
    }
    iVar5 = FUN_004026a0(&local_1c,(uint *)&local_20,&local_28,&local_24);
    pvVar7 = DAT_005a7b78;
    if (iVar5 == 0) {
      FUN_00404ab0(pvVar3,0xe);
      return 0;
    }
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      local_1c = *(uint *)(*piVar1 + -8 + iVar5 * 8);
      local_18 = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
    }
    else {
      FUN_00404ab0(DAT_005a7b78,6);
      local_1c = 0;
    }
    iVar5 = FUN_004026a0(&local_1c,(uint *)&local_24,&local_2c,&local_20);
    pvVar3 = DAT_005a7b78;
    if (iVar5 == 0) {
      FUN_00404ab0(pvVar7,0xe);
      return 0;
    }
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      local_1c = *(uint *)(*piVar1 + -8 + iVar5 * 8);
      local_18 = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
    }
    else {
      FUN_00404ab0(DAT_005a7b78,6);
      local_1c = 0;
    }
    iVar5 = FUN_004026a0(&local_1c,(uint *)&local_24,&local_30,&local_20);
    pvVar7 = DAT_005a7b78;
    if (iVar5 == 0) {
      FUN_00404ab0(pvVar3,0xe);
      return 0;
    }
    FUN_0040adb0(DAT_005a7b78,&local_1c);
    iVar5 = FUN_004026a0(&local_1c,(uint *)&local_24,&local_34,&local_20);
    pvVar3 = DAT_005a7b78;
    if (iVar5 != 0) {
      FUN_0040adb0(DAT_005a7b78,&local_1c);
      iVar5 = FUN_004026a0(&local_1c,(uint *)&local_24,(uint *)&param_1,&local_20);
      pvVar7 = pvVar3;
      if (iVar5 != 0) {
        *piVar6 = (int)param_1;
        piVar6[1] = local_34;
        piVar6[2] = local_30;
        piVar6[3] = local_2c;
        piVar6[4] = local_28;
        piVar1 = *(int **)((int)this + 0x48);
        if (piVar1 != (int *)0x0) {
          iVar5 = (/*IC:004412a9*/**(code **)(*piVar1 + 0x40))(piVar1,local_14);
          if (iVar5 != 0) {
            iVar5 = (int)local_14 - (int)piVar6;
            iVar4 = 5;
            do {
              *piVar6 = *piVar6 + *(int *)(iVar5 + (int)piVar6);
              piVar6 = piVar6 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        return 1;
      }
    }
    *(undefined4 *)((int)pvVar7 + 0x90) = 0xe;
    FUN_004d4550(pvVar7);
    *(undefined4 *)((int)pvVar7 + 0x90) = 0;
    *(undefined4 *)((int)pvVar7 + 0xa4) = 0;
  }
  return 0;
}


