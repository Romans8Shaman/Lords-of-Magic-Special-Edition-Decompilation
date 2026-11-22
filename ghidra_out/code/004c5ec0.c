
int __thiscall FUN_004c5ec0(void *this,int param_1)

{
  if ((param_1 < 0) || (*(int *)((int)this + 0x1b0) <= param_1)) {
    return (int)this + 0x10;
  }
  return *(int *)((int)this + 0x1ac) + param_1 * 0x19c;
}


