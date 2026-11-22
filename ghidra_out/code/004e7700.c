
undefined4 __fastcall FUN_004e7700(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x4c) < 1) {
    OutputDebugStringA(s_no_ship_found__00572a90);
    return 0xffffffff;
  }
  piVar3 = (int *)(param_1 + 0xc4);
  do {
    iVar1 = FUN_00415470(piVar3);
    if (iVar1 != 0) {
      uVar2 = FUN_004e8bc0((int *)(param_1 + 0xc4 + iVar4 * 0x4c));
      return uVar2;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 0x13;
  } while (iVar4 < *(int *)(param_1 + 0x4c));
  OutputDebugStringA(s_no_ship_found__00572a90);
  return 0xffffffff;
}


