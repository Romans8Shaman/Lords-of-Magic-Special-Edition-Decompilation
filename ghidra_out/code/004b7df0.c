
int __thiscall FUN_004b7df0(void *this,int param_1)

{
  if ((param_1 < 0) || (*(int *)((int)this + 0x2c8) <= param_1)) {
    return 0;
  }
  return (int)this + param_1 * 0x32 + 0x134;
}


