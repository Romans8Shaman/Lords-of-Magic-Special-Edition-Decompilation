
int __thiscall FUN_004a8330(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)this + 100) + param_1 * 8);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 4) == param_2) break;
    iVar1 = *(int *)(iVar1 + 0x3c);
  }
  return iVar1;
}


