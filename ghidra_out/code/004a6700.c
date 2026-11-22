
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004a6700(void *this,float *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  uint local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar2 = FUN_004a5210(this,param_2,param_3);
  local_10 = (float)fVar2;
  fVar2 = FUN_004a5210(this,param_2 + 1,param_3);
  local_c = (float)fVar2;
  fVar2 = FUN_004a5210(this,param_2,param_3 + 1);
  local_8 = (float)fVar2;
  fVar3 = FUN_004a5210(this,param_2 + 1,param_3 + 1);
  local_4 = (float)fVar3;
  *param_1 = ((float)param_2 - _DAT_0054dab0) - (float)(*(int *)((int)this + 0x5c) / 2);
  fVar2 = (float10)_DAT_0054dae0;
  param_1[1] = ((float)param_3 - _DAT_0054dab0) - (float)(*(int *)((int)this + 0x60) / 2);
  param_1[2] = (float)((fVar3 * fVar2 - (float10)local_8 * (float10)_DAT_0054dae8) *
                       (float10)_DAT_0054dae0 -
                      ((float10)local_c * (float10)_DAT_0054dae0 -
                      (float10)local_10 * (float10)_DAT_0054dae8) * (float10)_DAT_0054dae8);
  FUN_004a9a20(this,&local_14,param_2,param_3);
  if ((local_14 & 0x400000) == 0) {
    if ((local_14 & 0x38000) == 0) {
      if ((local_14 & 0x200000) == 0) goto LAB_004a6834;
      fVar1 = _DAT_005ae93c;
    }
    else {
      fVar1 = _DAT_005ae940;
    }
  }
  else {
    if ((*(uint *)(param_4 + 0x54) & 0x100000) == 0) goto LAB_004a6834;
    fVar1 = _DAT_005ae938;
  }
  param_1[2] = fVar1 + param_1[2];
LAB_004a6834:
  FUN_00469ae0(&DAT_005876d0,param_1);
  return;
}


