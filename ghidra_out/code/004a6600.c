
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004a6600(void *this,float *param_1,int param_2,int param_3)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar2 = FUN_004a5210(this,param_2,param_3);
  fVar3 = FUN_004a5210(this,param_2 + 1,param_3);
  fVar4 = FUN_004a5210(this,param_2,param_3 + 1);
  fVar5 = FUN_004a5210(this,param_2 + 1,param_3 + 1);
  *param_1 = ((float)param_2 - _DAT_0054dab0) - (float)(*(int *)((int)this + 0x5c) / 2);
  fVar1 = (float10)_DAT_0054dae0;
  param_1[1] = ((float)param_3 - _DAT_0054dab0) - (float)(*(int *)((int)this + 0x60) / 2);
  param_1[2] = (float)((fVar5 * fVar1 - (float10)(float)fVar4 * (float10)_DAT_0054dae8) *
                       (float10)_DAT_0054dae0 -
                      ((float10)(float)fVar3 * (float10)_DAT_0054dae0 -
                      (float10)(float)fVar2 * (float10)_DAT_0054dae8) * (float10)_DAT_0054dae8);
  FUN_00469ae0(&DAT_005876d0,param_1);
  return;
}


