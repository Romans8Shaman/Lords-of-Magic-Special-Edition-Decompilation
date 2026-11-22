
int __thiscall FUN_00428bf0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x1c);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (param_1 == *(int *)(iVar1 + 0xc)) break;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  return iVar1;
}


