
uint __thiscall FUN_00521c70(void *this,int param_1,int param_2)

{
  if (*(int *)((int)this + 0x1b8) == 0) {
    FUN_004c6660(this);
  }
  if ((((param_1 < 0) || (param_2 < 0)) || (*(int *)((int)this + 0xc) <= param_1)) ||
     (*(int *)((int)this + 0xc) <= param_2)) {
    return 0;
  }
  return (uint)(*(short *)(*(int *)this + 2 + param_1 * 6) ==
               *(short *)(*(int *)this + 2 + param_2 * 6));
}


