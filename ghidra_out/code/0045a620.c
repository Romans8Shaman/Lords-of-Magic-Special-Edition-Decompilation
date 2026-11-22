
/* WARNING: Function: __ftol replaced with injection: ftol_pop */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0045a620(void *this,int param_1,int *param_2,int *param_3)

{
  float fVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  if ((((-1 < *param_2) && (*param_2 < 100)) && (-1 < *param_3)) && (*param_3 < 100)) {
    iVar3 = FUN_0045ac60(param_1);
    if (-1 < iVar3) {
      fVar6 = (float10)*param_3 - (float10)_DAT_0054d6d8;
      fVar1 = (float)((float10)*param_2 - (float10)_DAT_0054d6d8);
      fVar10 = (float10)fpatan(fVar6,(float10)*param_2 - (float10)_DAT_0054d6d8);
      fVar7 = (float10)fcos((float10)(float)fVar10);
      fVar10 = (float10)fsin((float10)(float)fVar10);
      fVar8 = (float10)fcos(-((float10)iVar3 * (float10)_DAT_0054d6d0));
      fVar9 = (float10)fsin((float10)(float)-((float10)iVar3 * (float10)_DAT_0054d6d0));
      fVar1 = (float)SQRT(fVar6 * fVar6 + (float10)fVar1 * (float10)fVar1);
      fVar7 = (float10)*(int *)((int)this + 0x40) * (float10)_DAT_0054d6e0 * (float10)fVar1 * fVar7;
      fVar10 = (float10)*(int *)((int)this + 0x44) * (float10)_DAT_0054d6e0 * (float10)fVar1 *
               fVar10;
      iVar3 = (int)(longlong)(fVar7 * fVar8 - fVar10 * fVar9);
      iVar4 = (int)(longlong)(fVar10 * fVar8 + fVar7 * fVar9);
      iVar5 = iVar3 * iVar3 + iVar4 * iVar4;
      if (DAT_005af144 * DAT_005af144 < iVar5) {
        fVar1 = (float)DAT_005af144 / SQRT((float)iVar5);
        dVar2 = (double)((float)iVar3 * fVar1);
        fVar6 = FUN_0053a7a0(SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
        iVar3 = (int)(longlong)fVar6;
        dVar2 = (double)((float)iVar4 * fVar1);
        fVar6 = FUN_0053a7a0(SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
        iVar4 = (int)(longlong)fVar6;
      }
      *param_2 = *(int *)((int)this + 0x40) / 2 + iVar3;
      *param_3 = *(int *)((int)this + 0x44) / 2 + iVar4;
      if (*param_2 < 0) {
        *param_2 = 0;
      }
      else if (*(int *)((int)this + 0x40) <= *param_2) {
        *param_2 = *(int *)((int)this + 0x40) + -1;
      }
      if (*param_3 < 0) {
        *param_3 = 0;
      }
      else if (*(int *)((int)this + 0x44) <= *param_3) {
        *param_3 = *(int *)((int)this + 0x44) + -1;
      }
      iVar3 = *(int *)((int)this + 0x44) - *param_3;
      *param_3 = iVar3;
      if (*(int *)((int)this + 0x44) <= iVar3) {
        *param_3 = *(int *)((int)this + 0x44) + -1;
      }
      return 1;
    }
  }
  *param_2 = -1;
  *param_3 = -1;
  return 0;
}


