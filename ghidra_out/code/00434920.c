
int __thiscall FUN_00434920(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *this_00;
  int local_4;
  
  local_4 = 0;
  if (param_1 != *(int *)((int)this + 8)) {
    param_2 = 1 - param_2;
  }
  iVar2 = 7;
  this_00 = (void *)((int)this + param_2 * 0x2a + 0x28);
  do {
    iVar1 = FUN_004344a0(this_00,(int)this,param_1,param_2);
    this_00 = (void *)((int)this_00 + 6);
    local_4 = local_4 + iVar1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return local_4;
}


