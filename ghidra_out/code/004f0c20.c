
undefined4 __fastcall FUN_004f0c20(int *param_1)

{
  int iVar1;
  
  DAT_00584c94 = param_1[10];
  iVar1 = FUN_004efe80(&DAT_005aee6c,param_1[0x11]);
  if (iVar1 != 0) {
    FUN_004d09a0(DAT_005a7b78,*(uint *)(iVar1 + 0x5c),*(int **)(iVar1 + 0x60),0);
  }
  iVar1 = param_1[0x1a];
  param_1[0x1a] = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    FUN_00483be0(&DAT_005aa12c,param_1);
  }
  return 1;
}


