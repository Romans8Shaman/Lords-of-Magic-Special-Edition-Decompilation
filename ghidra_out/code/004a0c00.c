
undefined4 FUN_004a0c00(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar1 = DAT_005ae98c;
  iVar4 = DAT_005ae998;
  if (DAT_005ae98c < DAT_005ae998) {
    return 0;
  }
  do {
    iVar2 = FUN_004f6000(&DAT_005ae974,iVar4);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) && (*(int *)(iVar2 + 0x48) == param_1)) {
      iVar5 = 0;
      if (0 < *(int *)(iVar2 + 0x4c)) {
        piVar6 = (int *)(iVar2 + 0xe0);
        do {
          iVar3 = *piVar6;
          if (iVar3 != 0) {
            do {
              if ((*(uint *)(iVar3 + 0x10) & 1 << (param_2 + 8U & 0x1f)) == 0) {
                return 1;
              }
              iVar3 = *(int *)(iVar3 + 0x14);
            } while (iVar3 != 0);
          }
          iVar5 = iVar5 + 1;
          piVar6 = piVar6 + 0x13;
        } while (iVar5 < *(int *)(iVar2 + 0x4c));
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 <= iVar1);
  return 0;
}


