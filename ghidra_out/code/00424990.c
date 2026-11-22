
undefined4 __thiscall FUN_00424990(void *this,uint param_1,int param_2)

{
  int iVar1;
  int *this_00;
  
  iVar1 = FUN_00414e50(this,~param_1,(int *)&param_1);
  if (iVar1 == 0) {
    return 0;
  }
  this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (this_00 == (int *)0x0) {
    return 0;
  }
  FUN_0041d2f0(&DAT_005aa12c,(int)this_00,param_2);
  this_00[0x16e] = -1;
  this_00[0x16c] = -1;
  this_00[0x16d] = -1;
  iVar1 = FUN_00413180(this,*(int *)(DAT_005ae970 +
                                    ((*(int *)((int)this + 0x44) - 4U & 7) + this_00[7] * 8) * 4));
  FUN_004a6dd0(&DAT_005ae958,this_00,this_00[7],iVar1);
  (/*IC:00424a25*/**(code **)(*this_00 + 0x1c))(this_00);
  return 1;
}


