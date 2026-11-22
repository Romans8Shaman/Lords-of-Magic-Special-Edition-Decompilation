
undefined4 FUN_00449490(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = param_1;
  iVar4 = 0;
  if (param_1 != 0) {
    piVar5 = (int *)(param_1 + 0x4c);
    param_1 = 0;
    local_c = 0;
    local_8 = 0;
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *piVar5) {
      piVar5 = (int *)(iVar1 + 0xc4);
      do {
        iVar3 = *piVar5;
        if (((iVar3 < 0) || (DAT_005cd2f0 <= iVar3)) || (DAT_005cd2f4 == 0)) {
          iVar3 = 0;
        }
        else {
          iVar3 = DAT_005cd2f4 + iVar3 * 1000;
        }
        if (((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == 3)) &&
           (iVar2 = FUN_0052b0e0(piVar5,3), iVar2 == 0)) {
          iVar3 = *(int *)(iVar3 + 0x164);
          if (((iVar3 == 1) || (iVar3 == 0)) || (iVar3 == 2)) {
            param_1 = param_1 + 1;
          }
          iVar3 = FUN_00521fc0(piVar5);
          if (0x14 < iVar3) {
            local_c = local_c + 1;
          }
        }
        FUN_00521fc0(piVar5);
        FUN_00527e90(piVar5,0x2e,&local_4);
        if (local_4 <= piVar5[3]) {
          local_8 = local_8 + 1;
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 0x13;
      } while (iVar4 < *(int *)(iVar1 + 0x4c));
      iVar3 = local_c;
      iVar2 = param_1;
    }
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar1 + 0x4c);
      if (local_8 != iVar1) {
        return 2;
      }
      if ((iVar2 == iVar1) && (iVar3 == iVar1)) {
        return 0;
      }
      if (iVar3 == 0) {
        return 4;
      }
      if (0 < iVar3) {
        return 3;
      }
    }
  }
  return 1;
}


