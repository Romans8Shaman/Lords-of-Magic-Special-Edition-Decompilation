
undefined4 __thiscall FUN_004b9e00(void *this,int param_1)

{
  if ((param_1 < 0) || (*(int *)((int)this + 4) <= param_1)) {
    return 0;
  }
  return *(undefined4 *)(*(int *)this + param_1 * 4);
}


