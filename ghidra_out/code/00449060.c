
undefined4 FUN_00449060(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    piVar4 = (int *)(param_1 + 0x4c);
    iVar5 = 0;
    local_8 = 0;
    param_1 = 0;
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *piVar4) {
      piVar4 = (int *)(iVar1 + 0xc4);
      iVar3 = DAT_005cd2f4;
      do {
        iVar2 = *piVar4;
        if (((iVar2 < 0) || (DAT_005cd2f0 <= iVar2)) || (iVar3 == 0)) {
          iVar2 = 0;
        }
        else {
          iVar2 = iVar3 + iVar2 * 1000;
        }
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == 0)) {
          local_4 = 0;
          FUN_00527e90(piVar4,0x2e,&local_4);
          if (local_4 <= piVar4[3]) {
            param_1 = param_1 + 1;
          }
          local_8 = local_8 + 1;
          iVar3 = DAT_005cd2f4;
        }
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 0x13;
      } while (iVar5 < *(int *)(iVar1 + 0x4c));
      iVar3 = param_1;
      iVar2 = local_8;
    }
    if (iVar2 == 0) {
      return 2;
    }
    if (*(int *)(iVar1 + 0x4c) == iVar3) {
      return 0;
    }
    if (0 < iVar3) {
      return 3;
    }
    if ((iVar3 == 0) && (0 < iVar2)) {
      return 1;
    }
  }
  return 4;
}


