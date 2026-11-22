
int __thiscall FUN_0040f4e0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 4) == param_1) break;
    iVar1 = *(int *)(iVar1 + 0x4c);
  }
  return iVar1;
}


