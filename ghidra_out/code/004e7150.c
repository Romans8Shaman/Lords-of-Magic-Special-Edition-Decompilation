
int __fastcall FUN_004e7150(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00521e00(param_1);
  if ((iVar1 == 0) ||
     (((iVar1 = *(int *)(iVar1 + 0x20), iVar1 != 0 && (iVar1 != 1)) && (iVar1 != 2)))) {
    iVar1 = -1;
  }
  return iVar1;
}


