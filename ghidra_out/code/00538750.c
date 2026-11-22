
undefined * __cdecl FUN_00538750(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 - param_2;
  return &DAT_005d4158 + (iVar1 - param_2) * 8;
}


