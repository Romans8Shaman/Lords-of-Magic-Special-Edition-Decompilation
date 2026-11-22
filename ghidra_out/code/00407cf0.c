
undefined4 FUN_00407cf0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00482ac0(&DAT_005aa12c,param_2,0);
  if (uVar2 == 0) {
    return 0;
  }
  *(short *)(uVar1 + 0xc2) = (short)param_2;
  *(undefined1 *)(uVar1 + 0xc0) = 3;
  *(undefined1 *)(uVar1 + 0xc1) = 0;
  return 1;
}


