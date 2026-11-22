
int __fastcall FUN_004c4d00(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1] - *param_1;
  if (iVar1 < 0) {
    return param_1[2] + iVar1;
  }
  return iVar1;
}


