
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall FUN_004a5f40(void *this,float *param_1,int param_2,int param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  float10 fVar11;
  float10 fVar12;
  float local_48;
  char acStack_35 [9];
  float local_2c [6];
  float local_14;
  float local_10;
  float local_c;
  
  acStack_35[1] = 0;
  acStack_35[2] = 0;
  acStack_35[3] = 0;
  acStack_35[4] = 0;
  acStack_35[5] = 0;
  acStack_35[6] = 0;
  acStack_35[7] = 0;
  acStack_35[8] = 0;
  iVar8 = param_2;
  iVar5 = param_3;
  if (*(int *)((int)this + 0x14) == 0) {
    if ((param_2 == *(int *)((int)this + 0x5c)) && (param_3 == *(int *)((int)this + 0x60))) {
      iVar8 = param_2 + -1;
      iVar5 = param_3 + -1;
    }
    else if (param_2 == *(int *)((int)this + 0x5c)) {
      iVar8 = param_2 + -1;
    }
    else if (param_3 == *(int *)((int)this + 0x60)) {
      iVar5 = param_3 + -1;
    }
  }
  fVar11 = FUN_004a5210(this,iVar8,iVar5);
  iVar8 = 0;
  pfVar7 = local_2c;
  do {
    iVar5 = (&DAT_0055ca20)[iVar8] + param_2;
    if (((iVar5 < 0) || (*(int *)((int)this + 0x5c) <= iVar5)) && (*(int *)((int)this + 0x14) == 0))
    {
      acStack_35[iVar8 + 1] = '\x01';
    }
    else {
      fVar12 = FUN_004a5210(this,iVar5,(&DAT_0055ca40)[iVar8] + param_3);
      *pfVar7 = (float)(fVar12 - (float10)(float)fVar11);
    }
    iVar8 = iVar8 + 1;
    pfVar7 = pfVar7 + 1;
  } while (iVar8 < 8);
  iVar8 = 0;
  local_48 = 0.0;
  uVar9 = 1;
  fVar2 = _DAT_0054da80;
  fVar4 = _DAT_0054da80;
  do {
    if (acStack_35[uVar9] == '\0') {
      uVar6 = (int)uVar9 >> 0x1f;
      iVar5 = ((uVar9 ^ uVar6) - uVar6 & 7 ^ uVar6) - uVar6;
      fVar4 = (local_2c[iVar5] * (float)*(int *)((int)&DAT_0055ca40 + iVar8) -
              (float)(int)(&DAT_0055ca40)[iVar5] * *(float *)((int)local_2c + iVar8)) + fVar4;
      fVar2 = ((float)(int)(&DAT_0055ca20)[iVar5] * *(float *)((int)local_2c + iVar8) -
              local_2c[iVar5] * (float)*(int *)((int)&DAT_0055ca20 + iVar8)) + fVar2;
      local_48 = ((float)(int)(&DAT_0055ca40)[iVar5] * (float)*(int *)((int)&DAT_0055ca20 + iVar8) -
                 (float)(int)(&DAT_0055ca20)[iVar5] * (float)*(int *)((int)&DAT_0055ca40 + iVar8)) +
                 local_48;
    }
    iVar8 = iVar8 + 4;
    bVar1 = (int)uVar9 < 8;
    uVar9 = uVar9 + 1;
  } while (bVar1);
  fVar3 = SQRT(local_48 * local_48 + fVar2 * fVar2 + fVar4 * fVar4);
  local_2c[2] = (float)fVar11;
  local_2c[0] = (float)(param_2 - (*(int *)((int)this + 0x5c) >> 1));
  local_2c[1] = (float)(param_3 - (*(int *)((int)this + 0x60) >> 1));
  local_14 = fVar4 / fVar3;
  local_10 = fVar2 / fVar3;
  local_c = local_48 / fVar3;
  pfVar7 = local_2c;
  pfVar10 = param_1;
  for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar10 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar10 = pfVar10 + 1;
  }
  return param_1;
}


