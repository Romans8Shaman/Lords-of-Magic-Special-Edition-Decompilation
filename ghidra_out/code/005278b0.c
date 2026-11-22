
int __fastcall FUN_005278b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_0052b540(&DAT_005cd18c,param_1[8]);
  if (piVar1 == (int *)0x0) {
    return *param_1;
  }
  return piVar1[1];
}


