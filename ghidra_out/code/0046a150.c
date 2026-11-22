
/* WARNING: Function: __ftol replaced with injection: ftol_pop */

void FUN_0046a150(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  
  fVar1 = (float)*(int *)(param_1 + 0x14);
  fVar4 = (float)*(int *)(param_1 + 0x10);
  fVar2 = (float)*(int *)(param_1 + 8);
  fVar8 = (float)*(int *)(param_1 + 4);
  fVar10 = (float)*(int *)(param_1 + 0xc);
  fVar11 = (float)*(int *)param_1;
  fVar5 = fVar4 - fVar10;
  fVar9 = fVar8 - fVar11;
  fVar3 = fVar2 - fVar11;
  fVar6 = fVar5 / fVar9;
  fVar14 = fVar1 - fVar10;
  fVar13 = fVar14 / fVar3;
  fVar7 = (((float)*(int *)(param_1 + 0x18) * fVar13 + (fVar4 - (float)*(int *)(param_1 + 0x1c))) -
          fVar6 * fVar8) / (fVar13 - fVar6);
  fVar12 = (((float)*(int *)(param_1 + 0x18) * fVar6 + (fVar1 - (float)*(int *)(param_1 + 0x1c))) -
           fVar13 * fVar2) / (fVar6 - fVar13);
  fVar15 = fVar7 - fVar11;
  fVar4 = (fVar4 - fVar6 * (fVar8 - fVar7)) - fVar10;
  fVar11 = fVar12 - fVar11;
  fVar10 = (fVar1 - (fVar2 - fVar12) * fVar13) - fVar10;
  iVar16 = (int)(longlong)SQRT(fVar5 * fVar5 + fVar9 * fVar9);
  iVar17 = (int)(longlong)SQRT(fVar14 * fVar14 + fVar3 * fVar3);
  if (iVar16 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    *(int *)(param_1 + 0x20) =
         ((int)(longlong)SQRT(fVar4 * fVar4 + fVar15 * fVar15) * 0xff) / iVar16;
  }
  if (iVar17 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    return;
  }
  *(int *)(param_1 + 0x24) =
       ((int)(longlong)SQRT(fVar10 * fVar10 + fVar11 * fVar11) * 0xff) / iVar17;
  return;
}


