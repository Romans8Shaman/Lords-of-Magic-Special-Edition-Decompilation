
undefined4 __thiscall FUN_0052d400(void *this,int param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (uVar2 != 0) {
    iVar3 = FUN_0052d140((int)this);
    if ((iVar3 != -1) && (iVar3 != param_1)) {
      uVar2 = FUN_00482ac0(&DAT_005aa12c,iVar3,0);
      if (uVar2 != 0) {
        iVar4 = FUN_00420620(uVar2);
        pvVar1 = DAT_005a7b78;
        if (iVar4 == 0) {
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar1);
            *(undefined4 *)((int)pvVar1 + 0x90) = 0;
            *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
          }
          else {
            iVar4 = *(int *)((int)DAT_005a7b78 + 0x50);
            iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
            *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
            *(int *)(iVar4 + 4 + iVar5 * 8) = iVar3;
          }
          pvVar1 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar1);
            *(undefined4 *)((int)pvVar1 + 0x90) = 0;
            *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
          }
          else {
            iVar3 = *(int *)((int)DAT_005a7b78 + 0x50);
            iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
            *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
            *(int *)(iVar3 + 4 + iVar4 * 8) = param_1;
          }
          FUN_004d05e0(DAT_005a7b78,DAT_005a7c6c,DAT_005a7c70);
          return 1;
        }
      }
    }
  }
  return 0;
}


