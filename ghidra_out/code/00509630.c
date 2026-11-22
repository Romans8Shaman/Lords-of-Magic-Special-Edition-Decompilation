
undefined4 __thiscall FUN_00509630(void *this,int param_1,int param_2)

{
  if (*(int *)this == 0) {
    FUN_005091c0(this);
  }
  if ((((param_1 < 0) || (*(int *)((int)this + 0x2c) <= param_1)) ||
      (*(int *)((int)this + 0x18) == 0)) || ((param_2 < 0 || (7 < param_2)))) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)((int)this + 0x24) + (param_2 + param_1 * 8) * 4);
}


