
int __fastcall FUN_00521f30(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *local_4;
  
  local_4 = param_1;
  iVar2 = FUN_00521e00(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_00527e90(param_1,0x2f,(int *)&local_4);
  uVar3 = FUN_005291e0((int)param_1);
  if (uVar3 == 0) {
    iVar6 = param_1[1];
    if (0 < *(int *)(iVar2 + 0xec)) {
      return (iVar6 * 100) / (int)local_4;
    }
  }
  else {
    iVar6 = *(int *)(uVar3 + 0x44);
    iVar5 = 0;
    if (0 < iVar6) {
      piVar4 = (int *)(uVar3 + 0x14);
      do {
        iVar1 = *piVar4;
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 + iVar1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    param_1[1] = iVar5;
    iVar6 = (iVar5 * 100) / (*(int *)(iVar2 + 0x120) * (int)local_4);
  }
  return iVar6;
}


