
int __cdecl FUN_0053cd70(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0053cdb0(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1[3] & 0x4000U) == 0) {
    return 0;
  }
  iVar1 = func_0x00544740(param_1[4]);
  return -(uint)(iVar1 != 0);
}


