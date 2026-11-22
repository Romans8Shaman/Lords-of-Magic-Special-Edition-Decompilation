
int __fastcall FUN_00521e00(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
    return 0;
  }
  return DAT_005cd2f4 + iVar1 * 1000;
}


