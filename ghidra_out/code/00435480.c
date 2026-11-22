
int __fastcall FUN_00435480(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00435440(param_1);
  if (iVar1 < 0) {
    return -1;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar1 == iVar2) {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  return iVar2;
}


