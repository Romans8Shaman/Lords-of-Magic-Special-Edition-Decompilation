
uint __fastcall FUN_0050c430(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_4;
  
  pvVar3 = DAT_005a7b78;
  uVar2 = *(undefined4 *)(param_1 + 0x28);
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
  FUN_004d05e0(DAT_005a7b78,DAT_005d2d58,DAT_005d2d5c);
  pvVar3 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    uVar6 = *(uint *)(*piVar1 + -8 + iVar5 * 8);
    local_4 = *(uint *)(*piVar1 + -4 + iVar5 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    uVar6 = 0;
  }
  if ((uVar6 & 0xff) == 0) {
    return 0;
  }
  return local_4 & ((uVar6 & 0xff) != 8) - 1;
}


