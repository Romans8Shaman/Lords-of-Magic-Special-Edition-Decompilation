
undefined4 FUN_0045ac60(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (uVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = DAT_005aa7d0;
  if (DAT_005aa7d4 != *(int *)(uVar1 + 0x48)) {
    uVar2 = DAT_005aadac;
  }
  return uVar2;
}


