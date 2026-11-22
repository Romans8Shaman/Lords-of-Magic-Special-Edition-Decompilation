
undefined4 FUN_005221f0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  float local_4;
  
  pvVar2 = DAT_005a7b78;
  if (((char)DAT_005d2f38 == '\x06') && ((DAT_005d2f38 & 0x100) == 0)) {
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
      *(undefined4 *)(iVar4 + 4 + iVar3 * 8) = param_1;
    }
    pvVar2 = DAT_005a7b78;
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
      *(undefined4 *)(iVar4 + 4 + iVar3 * 8) = param_2;
    }
    FUN_004d05e0(DAT_005a7b78,DAT_005d2f38,DAT_005d2f3c);
    pvVar2 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
      uVar5 = *(uint *)(*piVar1 + -8 + iVar4 * 8);
      local_4 = *(float *)(*piVar1 + -4 + iVar4 * 8);
    }
    else {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
      uVar5 = 0;
    }
    uVar5 = uVar5 & 0xff;
    if (uVar5 == 1) {
      return local_4;
    }
    if (uVar5 == 2) {
      return (int)local_4 >> 8;
    }
    if (uVar5 == 4) {
      lVar6 = __ftol((float10)local_4);
      return (int)lVar6;
    }
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  return 1;
}


