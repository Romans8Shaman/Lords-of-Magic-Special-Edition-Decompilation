
undefined4 FUN_00487d50(uint *param_1)

{
  void *this;
  void *pvVar1;
  
  this = (void *)FUN_00482ac0(&DAT_005aa12c,*param_1,0);
  pvVar1 = (void *)FUN_004f6000(&DAT_005ae974,param_1[1]);
  if ((this == (void *)0x0) || (pvVar1 == (void *)0x0)) {
    FUN_0053a090(&DAT_00583ff8,s_Error__Army___d_failed_to_re_ent_0055b4f0,*param_1,param_1[1]);
    return 0;
  }
  FUN_004225a0(this,pvVar1,1);
  return 1;
}


