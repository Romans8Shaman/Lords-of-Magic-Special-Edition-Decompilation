
undefined4 __thiscall FUN_0050f290(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  float fStack_24;
  float fStack_20;
  uint uStack_1c;
  int iStack_18;
  undefined1 auStack_14 [20];
  
  piVar6 = param_1;
  FUN_004fd4b0(param_1);
  pvVar3 = DAT_005a7b78;
  if ((char)DAT_005d2d00 == '\x06') {
    if ((DAT_005d2d00 & 0x100) != 0) {
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
    FUN_004d05e0(DAT_005a7b78,DAT_005d2d00,DAT_005d2d04);
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      uStack_1c = *(uint *)(*piVar1 + -8 + iVar5 * 8);
      iStack_18 = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
    }
    else {
      FUN_00404ab0(DAT_005a7b78,6);
      uStack_1c = 0;
    }
    iVar5 = FUN_004026a0(&uStack_1c,(uint *)&fStack_20,&uStack_28,&fStack_24);
    pvVar7 = DAT_005a7b78;
    if (iVar5 == 0) {
      FUN_00404ab0(pvVar3,0xe);
      return 0;
    }
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      uStack_1c = *(uint *)(*piVar1 + -8 + iVar5 * 8);
      iStack_18 = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
    }
    else {
      FUN_00404ab0(DAT_005a7b78,6);
      uStack_1c = 0;
    }
    iVar5 = FUN_004026a0(&uStack_1c,(uint *)&fStack_24,&uStack_2c,&fStack_20);
    pvVar3 = DAT_005a7b78;
    if (iVar5 == 0) {
      FUN_00404ab0(pvVar7,0xe);
      return 0;
    }
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      uStack_1c = *(uint *)(*piVar1 + -8 + iVar5 * 8);
      iStack_18 = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
    }
    else {
      FUN_00404ab0(DAT_005a7b78,6);
      uStack_1c = 0;
    }
    iVar5 = FUN_004026a0(&uStack_1c,(uint *)&fStack_24,&uStack_30,&fStack_20);
    pvVar7 = DAT_005a7b78;
    if (iVar5 == 0) {
      FUN_00404ab0(pvVar3,0xe);
      return 0;
    }
    FUN_0040adb0(DAT_005a7b78,&uStack_1c);
    iVar5 = FUN_004026a0(&uStack_1c,(uint *)&fStack_24,&uStack_34,&fStack_20);
    pvVar3 = DAT_005a7b78;
    if (iVar5 != 0) {
      FUN_0040adb0(DAT_005a7b78,&uStack_1c);
      iVar5 = FUN_004026a0(&uStack_1c,(uint *)&fStack_24,(uint *)&param_1,&fStack_20);
      pvVar7 = pvVar3;
      if (iVar5 != 0) {
        *piVar6 = (int)param_1;
        piVar6[1] = uStack_34;
        piVar6[2] = uStack_30;
        piVar6[3] = uStack_2c;
        piVar6[4] = uStack_28;
        if (*(int **)((int)this + 0x58) != (int *)0x0) {
          iVar5 = (/*IC:0050f539*/**(code **)(**(int **)((int)this + 0x58) + 0x40))(auStack_14);
          if (iVar5 != 0) {
            iVar5 = -4 - (int)piVar6;
            iVar4 = 5;
            do {
              *piVar6 = *piVar6 + *(int *)(auStack_14 + iVar5 + (int)piVar6);
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


