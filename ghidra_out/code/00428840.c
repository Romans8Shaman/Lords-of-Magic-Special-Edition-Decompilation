
int __thiscall FUN_00428840(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x1c);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0xc) == param_1) break;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  return iVar1;
}


