
/* WARNING: Function: __ftol replaced with injection: ftol_pop */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0047ced0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float local_58;
  int local_54;
  int local_50;
  float local_4c;
  int local_48;
  double local_44;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  
  iVar6 = param_2 % DAT_005ae9c4;
  iVar4 = param_2 / DAT_005ae9c4;
  iVar5 = FUN_00455660(&DAT_005ae8e8,2);
  if (*(int *)(param_1 + 0x4c) == iVar5) {
    iVar5 = 2;
  }
  else {
    iVar5 = 1;
  }
  FUN_00455750(&DAT_005ae8e8,iVar5,&local_54,&local_50);
  iVar6 = iVar6 + local_54;
  iVar5 = *(int *)(param_1 + 0x7c);
  iVar4 = iVar4 + local_50;
  local_48 = *(int *)(param_1 + 0x78);
  local_44 = (double)CONCAT44(local_44._4_4_,iVar5);
  if (local_48 < iVar5) {
    iVar7 = *(int *)(param_1 + 0x74) * 4;
    local_4c = (float)(*(int *)(&DAT_0055b050 + iVar7) + iVar6);
    fVar2 = (float)(*(int *)(&DAT_0055b070 + iVar7) + iVar4) - _DAT_0054d9b8;
    fVar1 = ((((float)iVar6 - _DAT_0054d9b8) - ((float)(int)local_4c - _DAT_0054d9b8)) *
            (float)local_48) / (float)iVar5 + ((float)(int)local_4c - _DAT_0054d9b8);
    fVar2 = ((((float)iVar4 - _DAT_0054d9b8) - fVar2) * (float)local_48) / (float)iVar5 + fVar2;
  }
  else {
    fVar1 = (float)iVar6 - _DAT_0054d9b8;
    fVar2 = (float)iVar4 - _DAT_0054d9b8;
  }
  iVar4 = (int)(longlong)fVar2;
  iVar5 = (int)(longlong)fVar1;
  fVar8 = FUN_004a5210(&DAT_005ae958,iVar5,iVar4);
  local_3c = (float)fVar8;
  fVar8 = FUN_004a5210(&DAT_005ae958,iVar5 + 1,iVar4);
  local_38 = (float)fVar8;
  fVar8 = FUN_004a5210(&DAT_005ae958,iVar5,iVar4 + 1);
  local_34 = (float)fVar8;
  fVar8 = FUN_004a5210(&DAT_005ae958,iVar5 + 1,iVar4 + 1);
  local_30 = (float)fVar8;
  local_48 = DAT_005ae9b8;
  local_58 = fVar1;
  if ((NAN(fVar1) || NAN(_DAT_0054d9bc)) || fVar1 < _DAT_0054d9bc) {
    local_58 = (float)DAT_005ae9b4 + fVar1;
  }
  local_4c = fVar2;
  if ((NAN(fVar2) || NAN(_DAT_0054d9bc)) || fVar2 < _DAT_0054d9bc) {
    local_4c = (float)DAT_005ae9b8 + fVar2;
  }
  local_58 = local_58 - (float)(int)(longlong)local_58;
  fVar3 = (float)_DAT_0054d9c0 - local_58;
  local_4c = local_4c - (float)(int)(longlong)local_4c;
  local_2c = fVar1 - (float)(DAT_005ae9b4 / 2);
  local_28 = fVar2 - (float)(DAT_005ae9b8 / 2);
  local_44 = (double)fVar3;
  local_24 = ((float)_DAT_0054d9c0 - local_4c) * (local_58 * local_38 + local_3c * fVar3) +
             (local_58 * local_30 + local_34 * fVar3) * local_4c;
  FUN_00469ae0(&DAT_005876d0,&local_2c);
  return (float10)local_18;
}


