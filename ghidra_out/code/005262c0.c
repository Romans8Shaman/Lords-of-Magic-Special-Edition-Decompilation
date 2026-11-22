
undefined4 __thiscall FUN_005262c0(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    return 0;
  }
  *param_2 = *(undefined4 *)(*(int *)((int)this + 8) + param_1 * 8);
  *param_3 = *(undefined4 *)(*(int *)((int)this + 8) + 4 + param_1 * 8);
  return 1;
}


