
undefined4 __thiscall FUN_00508f10(void *this,int param_1)

{
  if (((param_1 < 0) || (*(int *)((int)this + 0x2c) <= param_1)) ||
     (*(int *)((int)this + 0x18) == 0)) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)((int)this + 0x18) + param_1 * 4);
}


