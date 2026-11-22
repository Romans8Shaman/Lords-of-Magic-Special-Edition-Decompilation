
int __thiscall FUN_00429560(void *this,int param_1,int *param_2)

{
  int iVar1;
  void *this_00;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)((int)this + 0x4c) < 1) {
    *param_2 = -1;
    return 0;
  }
  this_00 = (void *)((int)this + 0xc4);
  do {
    iVar1 = FUN_00428840(this_00,param_1);
    if (iVar1 != 0) {
      *param_2 = iVar2;
      return iVar1;
    }
    iVar2 = iVar2 + 1;
    this_00 = (void *)((int)this_00 + 0x4c);
  } while (iVar2 < *(int *)((int)this + 0x4c));
  *param_2 = -1;
  return 0;
}


