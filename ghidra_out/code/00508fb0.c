
undefined4 __thiscall FUN_00508fb0(void *this,int param_1,int param_2)

{
  if ((((param_1 < 0) || (*(int *)((int)this + 0x14) <= param_1)) || (param_2 < 0)) || (7 < param_2)
     ) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)((int)this + 0x10) + param_1 * 0x58 + 0x38 + param_2 * 4);
}


