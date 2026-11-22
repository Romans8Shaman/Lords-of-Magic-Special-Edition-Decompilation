
undefined4 __fastcall FUN_00481b40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar1 = FUN_0048a400(0x584ae8);
  if (iVar1 == 1) {
    uVar4 = 1;
    iVar2 = 0;
    iVar1 = param_1 + 0x5068;
    do {
      if ((iVar2 < 0) || (0xf < iVar2)) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar1;
      }
      if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x15d8) & 2) == 0)) {
        uVar4 = 0;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x1d84;
    } while (iVar2 < 0x10);
  }
  else if (iVar1 == 2) {
    iVar1 = *(int *)(param_1 + 0x6a8);
    if ((iVar1 < 0) || (0xf < iVar1)) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1 + 0x5068 + iVar1 * 0x1d84;
    }
    iVar2 = *(int *)(param_1 + 0xc84);
    if ((iVar2 < 0) || (0xf < iVar2)) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + 0x5068 + iVar2 * 0x1d84;
    }
    if ((((iVar1 != 0) && (iVar2 != 0)) && ((*(byte *)(iVar1 + 0x15d8) & 2) != 0)) &&
       ((*(byte *)(iVar2 + 0x15d8) & 2) != 0)) {
      return 1;
    }
  }
  return uVar4;
}


