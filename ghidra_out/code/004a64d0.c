
/* WARNING: Function: __ftol replaced with injection: ftol_pop */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004a64d0(void *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar1 = (float)(*(int *)((int)param_1 + 0x5c) >> 1) + param_2;
  fVar2 = (float)(*(int *)((int)param_1 + 0x60) >> 1) + param_3;
  iVar3 = (int)(longlong)fVar1;
  iVar4 = (int)(longlong)fVar2;
  param_2 = fVar1 - (float)iVar3;
  if ((NAN(param_2) || NAN((float)_DAT_0054daa0)) || param_2 < (float)_DAT_0054daa0) {
    param_2 = param_2 - _DAT_0054dac0;
  }
  param_3 = fVar2 - (float)iVar4;
  if ((NAN(param_3) || NAN((float)_DAT_0054daa0)) || param_3 < (float)_DAT_0054daa0) {
    param_3 = param_3 - _DAT_0054dac0;
  }
  fVar5 = FUN_004a5210(param_1,iVar3,iVar4);
  fVar6 = FUN_004a5210(param_1,iVar3 + 1,iVar4);
  fVar7 = FUN_004a5210(param_1,iVar3,iVar4 + 1);
  fVar8 = FUN_004a5210(param_1,iVar3 + 1,iVar4 + 1);
  return ((float10)_DAT_0054da90 - (float10)param_3) *
         ((float10)(float)fVar6 * (float10)param_2 +
         (float10)(float)fVar5 * (float10)(_DAT_0054da90 - param_2)) +
         (fVar8 * (float10)param_2 + (float10)(float)fVar7 * (float10)(_DAT_0054da90 - param_2)) *
         (float10)param_3;
}


