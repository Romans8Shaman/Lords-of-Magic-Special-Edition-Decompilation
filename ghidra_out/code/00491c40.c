
undefined4 __thiscall FUN_00491c40(void *this,int param_1)

{
  if (((param_1 < 0) || (*(int *)this <= param_1)) || (*(int *)((int)this + 4) == 0)) {
    return 0;
  }
  FUN_00491680((undefined4 *)(*(int *)((int)this + 4) + param_1 * 8));
  return 1;
}


