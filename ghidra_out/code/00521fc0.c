
int __fastcall FUN_00521fc0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = FUN_00521e00(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = FUN_005291e0((int)param_1);
  if (uVar3 == 0) {
    return param_1[1];
  }
  iVar2 = *(int *)(uVar3 + 0x44);
  iVar4 = 0;
  if (0 < iVar2) {
    piVar5 = (int *)(uVar3 + 0x14);
    do {
      iVar1 = *piVar5;
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + iVar1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = iVar4;
  return iVar4;
}


