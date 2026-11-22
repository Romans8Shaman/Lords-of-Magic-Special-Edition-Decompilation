
uint __cdecl FUN_0053b4e0(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  FUN_0053cc50((uint)param_1);
  iVar2 = param_1[1];
  param_1[1] = iVar2 + -1;
  if (iVar2 + -1 < 0) {
    uVar3 = FUN_0053e120(param_1);
    FUN_0053ccc0((uint)param_1);
    return uVar3;
  }
  bVar1 = *(byte *)*param_1;
  *param_1 = (int)((byte *)*param_1 + 1);
  FUN_0053ccc0((uint)param_1);
  return (uint)bVar1;
}


