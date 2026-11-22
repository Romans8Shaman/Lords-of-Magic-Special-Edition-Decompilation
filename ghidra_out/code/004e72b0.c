
undefined4 FUN_004e72b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_00584690;
  while (*piVar1 != param_1) {
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
    if (0x58470f < (int)piVar1) {
      return 0xffffffff;
    }
  }
  if (iVar2 < 5) {
    return DAT_005846a0;
  }
  if (iVar2 < 10) {
    return DAT_005846b4;
  }
  return DAT_005846c8;
}


