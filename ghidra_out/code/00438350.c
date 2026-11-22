
int __cdecl FUN_00438350(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8) - *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_2 + 0xc);
  }
  return iVar1;
}


