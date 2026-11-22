
int __thiscall FUN_004a5240(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004a5170(this,param_1,param_2);
  if (*(int *)((int)this + 0x54) == 0) {
    return 0;
  }
  return (int)*(short *)(*(int *)((int)this + 0x54) + iVar1 * 8);
}


