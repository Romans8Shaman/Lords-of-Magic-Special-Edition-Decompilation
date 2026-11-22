
undefined4 FUN_004078c0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (uVar1 == 0) {
    return 0;
  }
  *(undefined1 *)(uVar1 + 0xc0) = 0x14;
  *(undefined1 *)(uVar1 + 0xc1) = 0;
  *(undefined2 *)(uVar1 + 0xc2) = 0xffff;
  return 1;
}


