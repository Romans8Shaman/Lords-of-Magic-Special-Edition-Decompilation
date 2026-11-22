
void __fastcall FUN_00481a30(int param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  int iVar1;
  int iVar2;
  int extraout_EDX;
  undefined4 unused_reg_1_00;
  int iVar3;
  
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
    iVar2 = *(int *)(param_1 + 0x6a8);
    if ((iVar2 < 0) || (0xf < iVar2)) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + 0x5068 + iVar2 * 0x1d84;
    }
    iVar1 = *(int *)(param_1 + 0xc84);
    if ((iVar1 < 0) || (0xf < iVar1)) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1 + 0x5068 + iVar1 * 0x1d84;
    }
    if ((iVar2 != 0) && (iVar3 != 0)) {
      if ((*(byte *)(iVar2 + 0x15d8) & 2) != 0) {
        FUN_004bb0c0(iVar2,iVar1,unused_stack_0);
        iVar1 = extraout_EDX;
      }
      if ((*(byte *)(iVar3 + 0x15d8) & 2) != 0) {
        FUN_004bb0c0(iVar3,iVar1,unused_stack_0);
        return;
      }
    }
  }
  else {
    iVar2 = FUN_004ef340((undefined4 *)(param_1 + 0x22ec8));
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x228a8);
      if ((iVar2 < 0) || (0xf < iVar2)) {
        iVar2 = 0;
      }
      else {
        iVar2 = param_1 + 0x5068 + iVar2 * 0x1d84;
      }
      if ((*(byte *)(iVar2 + 0x15d8) & 2) != 0) {
        iVar1 = FUN_004bb560(iVar2);
        if (iVar1 != 0) {
          FUN_004bb0e0(iVar2,unused_reg_1_00,unused_stack_0);
        }
      }
    }
  }
  return;
}


