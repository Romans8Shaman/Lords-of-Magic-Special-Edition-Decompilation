
undefined4 __fastcall FUN_00507150(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x4c) < 1) {
    return 0;
  }
  piVar2 = (int *)(param_1 + 0xc4);
  while( true ) {
    iVar1 = *piVar2;
    if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = DAT_005cd2f4 + iVar1 * 1000;
    }
    if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x14) & 0x4000) != 0)) break;
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 0x13;
    if (*(int *)(param_1 + 0x4c) <= iVar3) {
      return 0;
    }
  }
  return 1;
}


