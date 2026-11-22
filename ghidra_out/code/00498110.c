
int __fastcall FUN_00498110(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 8);
  if (iVar1 == 0) {
    return 0;
  }
  return *(int *)(param_1 + 4) / iVar1;
}


