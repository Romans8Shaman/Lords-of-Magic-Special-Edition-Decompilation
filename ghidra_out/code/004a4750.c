
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004a4750(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  
  pfVar11 = param_1;
  iVar7 = param_3 - (int)param_1;
  param_1 = (float *)0x4;
  do {
    pfVar8 = (float *)(iVar7 + (int)pfVar11);
    iVar9 = 4;
    pfVar10 = param_2;
    do {
      iVar6 = 4;
      pfVar4 = pfVar10;
      pfVar5 = pfVar11;
      fVar3 = _DAT_0054da78;
      do {
        fVar1 = *pfVar5;
        fVar2 = *pfVar4;
        pfVar4 = pfVar4 + 4;
        pfVar5 = pfVar5 + 1;
        iVar6 = iVar6 + -1;
        fVar3 = fVar1 * fVar2 + fVar3;
      } while (iVar6 != 0);
      *pfVar8 = fVar3;
      pfVar10 = pfVar10 + 1;
      pfVar8 = pfVar8 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    pfVar11 = pfVar11 + 4;
    param_1 = (float *)((int)param_1 + -1);
  } while (param_1 != (float *)0x0);
  return;
}


