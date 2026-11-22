
undefined4 __thiscall FUN_0049b150(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (((iVar1 == 0) || (param_1 < 0)) || (*(int *)((int)this + 8) <= param_1)) {
    return 0;
  }
  *(undefined4 *)(iVar1 + param_1 * 4) = *(undefined4 *)(iVar1 + param_2 * 4);
  return 1;
}


