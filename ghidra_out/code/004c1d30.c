
undefined4 __fastcall FUN_004c1d30(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x4c) < 1) {
    return 0;
  }
  piVar3 = (int *)(param_1 + 0xc4);
  do {
    iVar1 = FUN_00415470(piVar3);
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0x13;
  } while (iVar2 < *(int *)(param_1 + 0x4c));
  return 0;
}


