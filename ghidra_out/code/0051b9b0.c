
undefined4 __fastcall FUN_0051b9b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004c4d00((int *)(param_1 + 0x487dc));
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_0047bf30((int *)(param_1 + 0x47f00));
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_0047bf70((int *)(param_1 + 0x47f00));
  if (iVar1 != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x47f68) != 0) {
    return 1;
  }
  iVar1 = FUN_004378f0((int *)(param_1 + 0x483f4));
  if (iVar1 != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x48510) == 0) {
    if (*(int *)(param_1 + 0x4850c) != 0) {
      return 1;
    }
    iVar1 = FUN_004321b0(0x584cd4);
    if (iVar1 == 0) {
      iVar1 = FUN_00484e10(param_1 + 0x25644);
      return (uint)(iVar1 != 0);
    }
  }
  return 1;
}


