
undefined4 __fastcall FUN_00527860(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_0052b540(&DAT_005cd18c,param_1[8]);
  if (piVar1 != (int *)0x0) {
    return (uint)(*param_1 != piVar1[1]);
  }
  if (((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) && ((param_1[9] & 0x100U) != 0)) {
    return 1;
  }
  return 0;
}


