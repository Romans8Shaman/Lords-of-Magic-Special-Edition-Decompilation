
void __fastcall FUN_0048a0e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x228a8);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1 + 0x5068 + iVar1 * 0x1d84;
  }
  if (DAT_005851a0 != 0) {
    if (iVar2 == 0) {
      DAT_005835e0 = 0;
      return;
    }
    if ((*(byte *)(iVar2 + 0x15d8) & 2) == 0) {
      if (DAT_005d1e84 == (void *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_004b7890(DAT_005d1e84,iVar1 + 1);
      }
      if (iVar1 == 0) {
        *(uint *)(iVar2 + 0x15d8) = *(uint *)(iVar2 + 0x15d8) | 2;
      }
    }
  }
  if (((iVar2 == 0) || ((*(uint *)(iVar2 + 0x15d8) & 0x10000) == 0)) ||
     (iVar1 = FUN_0051ba70(param_1), iVar1 == 0)) {
    DAT_005835e0 = 0;
    return;
  }
  DAT_005835e0 = DAT_005835e0 + 1;
  if (DAT_005835e0 < 4) {
    return;
  }
  *(uint *)(iVar2 + 0x15d8) = *(uint *)(iVar2 + 0x15d8) & 0xfffeffff;
  FUN_00480060(*(undefined4 *)(param_1 + 0x228a8));
  return;
}


