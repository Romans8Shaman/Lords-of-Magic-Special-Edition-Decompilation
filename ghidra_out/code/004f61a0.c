
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004f61a0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  iVar4 = FUN_00455c60(&DAT_005ae958,iVar1);
  iVar5 = FUN_00455c60(&DAT_005ae958,iVar2);
  if (iVar4 < iVar5) {
    return 0xffffffff;
  }
  if (iVar5 < iVar4) {
    return 1;
  }
  FUN_004a9a60(&DAT_005ae958,&param_1,*(int *)(iVar1 + 0x1c));
  if ((((uint)param_1 & 0x800000) != 0) && (*(int *)(iVar1 + 4) != 0)) {
    return 0xffffffff;
  }
  FUN_004a9a60(&DAT_005ae958,&param_1,*(int *)(iVar2 + 0x1c));
  if ((((uint)param_1 & 0x800000) != 0) && (*(int *)(iVar2 + 4) != 0)) {
    return 1;
  }
  fVar3 = *(float *)(iVar1 + 8) - *(float *)(iVar2 + 8);
  if ((NAN(fVar3) || NAN(_DAT_0054ded0)) || fVar3 < _DAT_0054ded0) {
    return 0xffffffff;
  }
  if ((!NAN(fVar3) && !NAN(_DAT_0054ded0)) && _DAT_0054ded0 < fVar3) {
    return 1;
  }
  return 0;
}


