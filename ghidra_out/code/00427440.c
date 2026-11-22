
undefined4 __thiscall FUN_00427440(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  if ((((int)param_1 < 0) || (DAT_005cd2f0 <= (int)param_1)) || (DAT_005cd2f4 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_005cd2f4 + (int)param_1 * 1000;
  }
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x164) == 0x24)) && (*(int *)(iVar2 + 0x1c) == 1)) {
    iVar2 = *(int *)((int)this + 0x4c);
    iVar5 = -1;
    iVar4 = 0;
    iVar6 = 0;
    if (0 < iVar2) {
      piVar7 = (int *)((int)this + 0xd4);
      do {
        iVar1 = piVar7[-4];
        if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
          iVar1 = 0;
        }
        else {
          iVar1 = DAT_005cd2f4 + iVar1 * 1000;
        }
        if (((iVar1 != 0) && (*(int *)(iVar1 + 0x164) == 3)) && (*(int *)(iVar1 + 0x1c) == 1)) {
          if (iVar5 == -1) {
            iVar4 = *piVar7 >> 8;
            iVar5 = iVar6;
          }
          else if (iVar4 < *piVar7 >> 8) {
            iVar4 = *piVar7 >> 8;
            iVar5 = iVar6;
          }
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 0x13;
      } while (iVar6 < iVar2);
    }
    if ((-1 < iVar5) && (iVar5 < iVar2)) {
      piVar7 = (int *)((int)this + iVar5 * 0x4c + 0xc4);
      iVar2 = FUN_00527820(piVar7,param_1);
      if (iVar2 != 0) {
        if ((((int)param_1 < 0) || (DAT_005cd2f0 <= (int)param_1)) || (DAT_005cd2f4 == 0)) {
          iVar2 = 0;
        }
        else {
          iVar2 = DAT_005cd2f4 + (int)param_1 * 1000;
        }
        if ((((iVar2 != 0) && (*(int *)(iVar2 + 0x164) == 0x24)) && (*(int *)(iVar2 + 0x1c) == 1))
           && (uVar3 = FUN_00529140(piVar7), uVar3 != 0)) {
          *(undefined4 *)(uVar3 + 0x10) = 0;
        }
        FUN_004d09a0(DAT_005a7b78,DAT_005a7be4,DAT_005a7be8,0);
        return 1;
      }
    }
  }
  return 0;
}


