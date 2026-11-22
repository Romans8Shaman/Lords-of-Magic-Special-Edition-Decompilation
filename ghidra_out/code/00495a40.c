
undefined4 __fastcall FUN_00495a40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (((((piVar1 == (int *)0x0) || (*piVar1 == 0)) || (param_1[1] < 0)) ||
      ((param_1[2] < 0 || (piVar1[1] < param_1[1] + param_1[3])))) ||
     ((piVar1[2] < param_1[4] + param_1[2] || ((param_1[3] < 0 || (param_1[4] < 0)))))) {
    return 0;
  }
  return 1;
}


