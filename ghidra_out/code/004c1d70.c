
void __fastcall FUN_004c1d70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x5b4) != -1) {
    uVar4 = FUN_00482ac0(&DAT_005aa12c,*(int *)(param_1 + 0x5b4),0);
    if ((uVar4 != 0) && (*(int *)(uVar4 + 0x5bc) == 0)) {
      *(undefined4 *)(uVar4 + 0x5bc) = 2;
      *(int *)(uVar4 + 0x5c4) = *(int *)(uVar4 + 0x5c4) + 1;
      pvVar3 = DAT_005a7b78;
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        iVar2 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = uVar1;
      }
      pvVar3 = DAT_005a7b78;
      uVar1 = *(undefined4 *)(param_1 + 0x5b4);
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        iVar2 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = uVar1;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005a7cec,DAT_005a7cf0);
    }
    if (3 < *(int *)(uVar4 + 0x5c4)) {
      FUN_004c1e80(*(undefined4 *)(param_1 + 0x5b4),0x25);
    }
  }
  return;
}


