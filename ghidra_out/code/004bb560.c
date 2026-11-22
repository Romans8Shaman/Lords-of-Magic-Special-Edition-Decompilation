
undefined4 __fastcall FUN_004bb560(int param_1)

{
  int iVar1;
  
  if (DAT_005d1e84 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_004b7dd0(DAT_005d1e84);
  }
  if (*(int *)(param_1 + 0x15dc) != iVar1) {
    iVar1 = FUN_0048a400(0x584ae8);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


