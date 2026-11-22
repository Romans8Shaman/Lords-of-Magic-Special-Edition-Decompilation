
undefined4 __thiscall FUN_00526f70(void *this,int *param_1)

{
  if (param_1 == (int *)0x0) {
    return 0;
  }
  while ((((*param_1 != *(int *)this || (param_1[3] != *(int *)((int)this + 0xc))) ||
          (param_1[4] != *(int *)((int)this + 0x10))) ||
         ((param_1[5] != *(int *)((int)this + 0x14) || (param_1[2] != *(int *)((int)this + 8)))))) {
    param_1 = (int *)param_1[7];
    if (param_1 == (int *)0x0) {
      return 0;
    }
  }
  param_1[1] = param_1[1] + *(int *)((int)this + 4);
  param_1[6] = *(int *)((int)this + 0x18);
  return 1;
}


