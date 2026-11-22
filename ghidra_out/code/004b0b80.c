
uint FUN_004b0b80(uint param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  pvVar2 = DAT_005a7b78;
  if (param_1 == 0) {
    return 0;
  }
  if (((char)param_1 == '\x06') && ((param_1 & 0x100) == 0)) {
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
      iVar4 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar3 * 8) = param_3;
    }
  }
  FUN_004d05e0(DAT_005a7b78,param_1,param_2);
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
    uVar5 = *(uint *)(*piVar1 + -8 + iVar4 * 8);
    param_2 = *(int **)(*piVar1 + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    uVar5 = 0;
  }
  if ((uVar5 & 0xff) == 0) {
    return 0;
  }
  return (uint)param_2 & ((uVar5 & 0xff) != 8) - 1;
}


