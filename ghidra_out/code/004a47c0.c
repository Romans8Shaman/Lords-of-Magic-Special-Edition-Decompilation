
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004a47c0(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 4;
  iVar8 = param_2 - (int)param_3;
  do {
    pfVar4 = (float *)(iVar8 + (int)param_3);
    iVar6 = 4;
    pfVar5 = param_1;
    fVar3 = _DAT_0054da78;
    do {
      fVar1 = *pfVar4;
      fVar2 = *pfVar5;
      pfVar4 = pfVar4 + 4;
      pfVar5 = pfVar5 + 1;
      iVar6 = iVar6 + -1;
      fVar3 = fVar1 * fVar2 + fVar3;
    } while (iVar6 != 0);
    *param_3 = fVar3;
    param_3 = param_3 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return;
}


