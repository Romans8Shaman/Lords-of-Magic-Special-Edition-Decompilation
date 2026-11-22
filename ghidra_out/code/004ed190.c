
undefined4 FUN_004ed190(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1,1);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x54) = param_2;
  }
  return 1;
}


