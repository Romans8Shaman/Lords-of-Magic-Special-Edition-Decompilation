
undefined4 FUN_00409bc0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0047c9e0(&DAT_005aa12c,*(int *)(param_1 + 0x48));
  if (uVar1 != 0) {
    iVar2 = FUN_00409b90(param_1);
    if ((iVar2 != 0) && (param_2 < 4)) {
      return 1;
    }
  }
  return 0;
}


