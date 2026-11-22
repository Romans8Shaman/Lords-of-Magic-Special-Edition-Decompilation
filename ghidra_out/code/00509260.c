
int __cdecl FUN_00509260(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = param_1[2] - param_2[2];
  if (iVar1 == 0) {
    iVar1 = *(int *)*param_1 - *(int *)*param_2;
  }
  return iVar1;
}


