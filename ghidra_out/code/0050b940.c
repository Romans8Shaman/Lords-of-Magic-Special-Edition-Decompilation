
undefined4 __thiscall FUN_0050b940(void *this,int *param_1)

{
  if (((*(int *)this == *param_1) && (*(int *)((int)this + 4) == param_1[1])) &&
     (*(int *)((int)this + 8) == param_1[2])) {
    *(int *)((int)this + 0x10) = param_1[4];
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + param_1[5];
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + param_1[6];
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
    return 1;
  }
  return 0;
}


