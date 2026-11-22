
uint __thiscall FUN_00523350(void *this,undefined4 param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)this + 0x2c) == 0) {
    return 0;
  }
  uVar5 = *(uint *)((int)this + 0x30);
  if (((char)*(uint *)((int)this + 0x2c) == '\x06') && ((*(uint *)((int)this + 0x2c) & 0x100) == 0))
  {
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
  }
  FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x2c),*(int **)((int)this + 0x30));
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
    uVar6 = *(uint *)(*piVar1 + -8 + iVar4 * 8);
    uVar5 = *(uint *)(*piVar1 + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    uVar6 = 0;
  }
  if ((uVar6 & 0xff) == 0) {
    return 0;
  }
  return uVar5 & ((uVar6 & 0xff) != 8) - 1;
}


