
int FUN_00544a50(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    FUN_0053f0d0();
    return 1;
  }
  if (DAT_005d5674 != (FARPROC)0x0) {
    iVar2 = FUN_00544b20(DAT_005d5674);
    if (iVar2 != 0) {
      iVar2 = (/*IC:00544a93*/*DAT_005d5674)(param_1);
      return iVar2;
    }
  }
  return 0;
}


