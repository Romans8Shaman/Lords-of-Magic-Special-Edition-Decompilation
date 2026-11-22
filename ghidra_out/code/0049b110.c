
undefined4 __thiscall FUN_0049b110(void *this,int param_1)

{
  if ((param_1 < 0) || (*(int *)((int)this + 8) <= param_1)) {
    return 0;
  }
  if (*(int *)((int)this + 4) == 0) {
    return 1;
  }
  return (uint)(-1 < *(int *)(*(int *)((int)this + 4) + param_1 * 4));
}


