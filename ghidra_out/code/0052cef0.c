
undefined4 __thiscall FUN_0052cef0(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  
  if ((param_1 < 0) || (0xf < param_1)) {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)this + param_1 * 0x1d84 + 0x2a6ac;
  }
  iVar4 = *(int *)(iVar7 + 0x15dc);
  iVar6 = 0;
  piVar1 = (int *)((int)this + 0x232a8);
  do {
    if (*piVar1 == param_1) break;
    iVar6 = iVar6 + 1;
    piVar1 = piVar1 + 0x100;
  } while (iVar6 < 8);
  if (7 < iVar6) {
    return 0;
  }
  if (*(int *)((int)this + 0x4d39c) == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = FUN_004b7dd0(*(int *)((int)this + 0x4d39c));
  }
  if ((iVar4 == iVar2) && ((*(byte *)(iVar7 + 0x15d8) & 2) == 0)) {
    if ((param_2 == 0) && (iVar6 == *(int *)((int)this + 0x232a4))) {
      return 1;
    }
    uVar3 = FUN_0052cdb0(this,iVar6);
    return uVar3;
  }
  iVar7 = -1;
  do {
    if (*(int *)((int)this + 0x4d39c) == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_004b7dd0(*(int *)((int)this + 0x4d39c));
    }
    iVar7 = iVar7 + 1;
    if ((-1 < iVar7) && (iVar7 < 0x10)) {
      pbVar5 = (byte *)((int)this + iVar7 * 0x1d84 + 0x2bc84);
      do {
        if ((*(int *)(pbVar5 + 4) == iVar4) && ((*pbVar5 & 2) == 0)) goto LAB_0052cfe9;
        iVar7 = iVar7 + 1;
        pbVar5 = pbVar5 + 0x1d84;
      } while (iVar7 < 0x10);
    }
    iVar7 = -1;
LAB_0052cfe9:
    if (iVar7 < 0) {
      return 0;
    }
    iVar4 = 0;
    piVar1 = (int *)((int)this + 0x232a8);
    do {
      if (*piVar1 == iVar7) {
        if ((param_2 == 0) && (iVar4 == *(int *)((int)this + 0x232a4))) {
          return 1;
        }
        uVar3 = FUN_0052cdb0(this,iVar4);
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      piVar1 = piVar1 + 0x100;
    } while (iVar4 < 8);
  } while( true );
}


