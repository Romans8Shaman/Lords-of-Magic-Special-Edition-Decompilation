
void __fastcall FUN_004fe030(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  tagPOINT local_8;
  
  GetCursorPos(&local_8);
  iVar2 = FUN_004a6e60((void *)(param_1 + 0x29e70),local_8.x,local_8.y);
  if (iVar2 == -1) {
    iVar2 = *(int *)(param_1 + 0x22ed4);
    if (iVar2 != -1) {
      uVar5 = *(undefined4 *)(param_1 + 0x22ed8);
      uVar6 = 2;
      goto LAB_004fe087;
    }
    uVar6 = 0;
    iVar2 = -1;
  }
  else {
    uVar6 = 1;
  }
  uVar5 = 0xffffffff;
LAB_004fe087:
  *(undefined4 *)(param_1 + 0x22ed0) = 1;
  pvVar1 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
    iVar4 = *(int *)((int)pvVar1 + 0x50);
    *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
    *(undefined4 *)(iVar4 + 4 + iVar3 * 8) = uVar5;
  }
  pvVar1 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x50);
    iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
    *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
    *(int *)(iVar4 + 4 + iVar3 * 8) = iVar2;
  }
  pvVar1 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)DAT_005a7b78 + 0x50);
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
    *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar6;
  }
  FUN_004d05e0(DAT_005a7b78,*(uint *)(param_1 + 0x22eb4),*(int **)(param_1 + 0x22eb8));
  return;
}


