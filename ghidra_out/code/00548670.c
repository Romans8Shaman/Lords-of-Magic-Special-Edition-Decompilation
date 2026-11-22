
int __cdecl FUN_00548670(byte *param_1,byte *param_2,LPWSTR param_3)

{
  int iVar1;
  
  if (param_3 == (LPWSTR)0x0) {
    return 0;
  }
  iVar1 = FUN_00548730(DAT_005d5534,1,param_1,param_3,param_2,(int)param_3,DAT_005d5530);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}


