
/* WARNING: Function: __ftol replaced with injection: ftol_pop */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0045aa30(void *this,int param_1,int *param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  unkbyte10 Var7;
  float10 fVar8;
  float10 fVar9;
  
  if ((((-1 < *param_2) && (*param_2 < *(int *)((int)this + 0x40))) && (-1 < *param_3)) &&
     (*param_3 < *(int *)((int)this + 0x44))) {
    iVar2 = FUN_0045ac60(param_1);
    if (-1 < iVar2) {
      iVar3 = *(int *)((int)this + 0x44) - *param_3;
      fVar5 = (float10)_DAT_0054d6d0;
      *param_3 = iVar3;
      if (*(int *)((int)this + 0x44) <= iVar3) {
        *param_3 = *(int *)((int)this + 0x44) + -1;
      }
      fVar4 = (float10)fcos((float10)iVar2 * fVar5);
      iVar3 = *(int *)((int)this + 0x40);
      fVar5 = (float10)fsin((float10)iVar2 * fVar5);
      fVar8 = (float10)*param_2 - (float10)iVar3 * (float10)_DAT_0054d6e8;
      fVar6 = (float10)*param_3 - (float10)*(int *)((int)this + 0x44) * (float10)_DAT_0054d6e8;
      fVar9 = fVar8 * (float10)(double)fVar4 - fVar6 * (float10)(double)fVar5;
      fVar5 = fVar6 * (float10)(double)fVar4 + (float10)(float)fVar8 * (float10)(double)fVar5;
      if ((!NAN(fVar9) && !NAN((float10)_DAT_0054d6f0)) && (float10)_DAT_0054d6f0 <= fVar9) {
        if ((!NAN(fVar9) && !NAN((float10)iVar3)) && (float10)iVar3 <= fVar9) {
          *param_2 = iVar3 + -1;
        }
      }
      else {
        *param_2 = 0;
      }
      if ((!NAN(fVar5) && !NAN((float10)_DAT_0054d6f0)) && (float10)_DAT_0054d6f0 <= fVar5) {
        fVar4 = (float10)*(int *)((int)this + 0x44);
        if ((!NAN(fVar5) && !NAN(fVar4)) && fVar4 <= fVar5) {
          *param_3 = *(int *)((int)this + 0x44) + -1;
        }
      }
      else {
        *param_3 = 0;
      }
      Var7 = fpatan(fVar5,fVar9);
      fVar6 = (float10)fcos(Var7);
      fVar8 = (float10)fsin(Var7);
      iVar2 = *(int *)((int)this + 0x44);
      fVar1 = (float)SQRT(fVar5 * fVar5 + fVar9 * fVar9);
      fVar5 = (float10)_DAT_0054d6f4;
      fVar4 = (float10)_DAT_0054d6f8;
      *param_2 = (int)(longlong)
                      (((float10)_DAT_0054d6f4 / (float10)*(int *)((int)this + 0x40)) *
                       (float10)fVar1 * fVar6 - (float10)_DAT_0054d6f8);
      *param_3 = (int)(longlong)((fVar5 / (float10)iVar2) * (float10)fVar1 * fVar8 - fVar4);
      if (*param_2 < 0) {
        *param_2 = 0;
      }
      else if (99 < *param_2) {
        *param_2 = 99;
      }
      if (*param_3 < 0) {
        *param_3 = 0;
        return 1;
      }
      if (99 < *param_3) {
        *param_3 = 99;
      }
      return 1;
    }
  }
  *param_2 = -1;
  *param_3 = -1;
  return 0;
}


