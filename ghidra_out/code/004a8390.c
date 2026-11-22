
undefined4 __thiscall FUN_004a8390(void *this,int param_1)

{
  if (*(int *)((int)this + 100) == 0) {
    return 0;
  }
  return (uint)(*(int *)(*(int *)((int)this + 100) + param_1 * 8) != 0);
}


