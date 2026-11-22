
undefined4 __fastcall FUN_004eb130(int *param_1)

{
  int iVar1;
  
  if ((param_1[9] == 0) || (param_1[1] == 0)) {
    return 0;
  }
  if ((code *)param_1[0x10] != (code *)0x0) {
    iVar1 = (/*IC:004eb14b*/*(code *)param_1[0x10])();
    if (iVar1 == 1) {
      *param_1 = 1;
      return 1;
    }
    if (*param_1 != 0) {
      *param_1 = 0;
    }
  }
  return 0;
}


