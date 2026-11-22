
uint __cdecl FUN_0053b530(uint param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_0053cc50((uint)param_2);
  iVar1 = param_2[1];
  param_2[1] = iVar1 + -1;
  if (iVar1 + -1 < 0) {
    uVar2 = FUN_0053dd60(param_1,param_2);
    FUN_0053ccc0((uint)param_2);
    return uVar2;
  }
  *(char *)*param_2 = (char)param_1;
  *param_2 = *param_2 + 1;
  FUN_0053ccc0((uint)param_2);
  return param_1 & 0xff;
}


