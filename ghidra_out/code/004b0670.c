
undefined4 __thiscall FUN_004b0670(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (*(void **)this != (void *)0x0) {
    iVar1 = FUN_0049d7c0(*(void **)this,param_1,param_2,param_3,param_4);
    if (iVar1 != 0) {
      return 1;
    }
  }
  if (*(void **)((int)this + 4) != (void *)0x0) {
    iVar1 = FUN_0049d7c0(*(void **)((int)this + 4),param_1,param_2,param_3,param_4);
    if (iVar1 != 0) {
      return 1;
    }
  }
  if (*(void **)((int)this + 8) != (void *)0x0) {
    iVar1 = FUN_0049d7c0(*(void **)((int)this + 8),param_1,param_2,param_3,param_4);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


