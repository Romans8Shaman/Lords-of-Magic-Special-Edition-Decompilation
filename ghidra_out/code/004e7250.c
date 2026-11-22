
int FUN_004e7250(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = 0;
  iVar3 = 0;
  piVar2 = &DAT_00584690;
  do {
    if (*piVar2 == param_1) {
      iVar4 = iVar3;
      break;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
  } while ((int)piVar2 < 0x584710);
  iVar3 = iVar4 + -4;
  if ((iVar3 < 0) || (0xe < iVar4)) {
    iVar1 = -1;
  }
  else if (iVar3 < iVar4) {
    piVar2 = &DAT_00584690 + iVar3;
    iVar4 = iVar4 - iVar3;
    do {
      if (*piVar2 != -1) {
        iVar1 = iVar1 + 1;
      }
      piVar2 = piVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return iVar1;
  }
  return iVar1;
}


