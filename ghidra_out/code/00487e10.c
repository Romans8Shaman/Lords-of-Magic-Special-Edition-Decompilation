
undefined4 FUN_00487e10(uint *param_1)

{
  void *this;
  int *piVar1;
  
  this = (void *)FUN_00482ac0(&DAT_005aa12c,*param_1,0);
  piVar1 = FUN_00485080(&DAT_005aa12c,param_1[1],0x2f);
  if ((this == (void *)0x0) || (piVar1 == (int *)0x0)) {
    FUN_0053a090(&DAT_00583ff8,s_Error__Army___d_failed_to_merge_w_0055b520,*param_1,param_1[1]);
    return 0;
  }
  FUN_00415fd0(this,piVar1);
  return 1;
}


