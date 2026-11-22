
undefined4 FUN_00449160(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int local_8;
  int local_4;
  
  iVar1 = param_1;
  iVar4 = 0;
  if (param_1 != 0) {
    iVar2 = FUN_004c1c50(param_1);
    if (iVar2 == 0) {
      return 1;
    }
    piVar5 = (int *)(param_1 + 0x4c);
    local_8 = 0;
    param_1 = 0;
    iVar2 = 0;
    if (0 < *piVar5) {
      piVar5 = (int *)(iVar1 + 0xc4);
      do {
        iVar2 = *piVar5;
        if (((iVar2 < 0) || (DAT_005cd2f0 <= iVar2)) || (DAT_005cd2f4 == 0)) {
          iVar2 = 0;
        }
        else {
          iVar2 = DAT_005cd2f4 + iVar2 * 1000;
        }
        if (iVar2 != 0) {
          FUN_00527e90(piVar5,0x2e,&local_4);
          if (local_4 <= piVar5[3]) {
            local_8 = local_8 + 1;
          }
          if (*(int *)(iVar2 + 0x1c) == 1) {
            uVar3 = FUN_00529180(piVar5);
            if (uVar3 != 0) {
              param_1 = param_1 + 1;
            }
          }
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 0x13;
      } while (iVar4 < *(int *)(iVar1 + 0x4c));
      iVar2 = param_1;
    }
    if (iVar2 != 0) {
      if (local_8 < *(int *)(iVar1 + 0x4c)) {
        return 3;
      }
      if (0 < iVar2) {
        return 0;
      }
    }
  }
  return 2;
}


