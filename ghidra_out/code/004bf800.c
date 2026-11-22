
undefined4 __thiscall FUN_004bf800(void *this,uint *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint local_4;
  
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
    iVar2 = *(int *)((int)pvVar3 + 0x50);
    *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = param_2;
  }
  FUN_004d05e0(DAT_005a7b78,*(uint *)this,*(int **)((int)this + 4));
  pvVar3 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar2 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar2;
    uVar5 = *(uint *)(*piVar1 + -8 + iVar2 * 8);
    local_4 = *(uint *)(*piVar1 + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    uVar5 = 0;
  }
  *param_1 = uVar5;
  param_1[1] = local_4;
  if (((char)uVar5 == '\x06') && ((uVar5 & 0x100) == 0)) {
    return 1;
  }
  return 0;
}


