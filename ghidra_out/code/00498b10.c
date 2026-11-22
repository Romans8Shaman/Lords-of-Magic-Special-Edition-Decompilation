
undefined4 __thiscall FUN_00498b10(void *this,undefined4 *param_1,int param_2)

{
  if ((param_2 < 0) || (*(int *)((int)this + 0xa0) <= param_2)) {
    return 0;
  }
  *param_1 = *(undefined4 *)((int)this + param_2 * 8);
  param_1[1] = *(undefined4 *)((int)this + param_2 * 8 + 4);
  return 1;
}


