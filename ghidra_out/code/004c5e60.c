
uint __thiscall FUN_004c5e60(void *this,int param_1)

{
  if ((param_1 < 0) || (*(int *)((int)this + 0xc) <= param_1)) {
    return 0xffffffff;
  }
  return (uint)*(byte *)(*(int *)this + param_1 * 6);
}


