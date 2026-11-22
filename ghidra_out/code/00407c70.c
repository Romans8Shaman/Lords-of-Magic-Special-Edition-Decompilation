
undefined4 FUN_00407c70(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (uVar1 != 0) {
    iVar2 = FUN_00506340(uVar1);
    if (iVar2 != 0) {
      *(undefined1 *)(uVar1 + 0xc0) = 0x1a;
      *(undefined1 *)(uVar1 + 0xc1) = 0;
      *(undefined2 *)(uVar1 + 0xc2) = 0xffff;
      return 1;
    }
  }
  return 0;
}


