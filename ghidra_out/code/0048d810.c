
int __thiscall FUN_0048d810(void *this,int param_1)

{
  if ((param_1 < 0) || (*(int *)((int)this + 0x50) <= param_1)) {
    return 0;
  }
  return *(int *)((int)this + 0x4c) + param_1 * 0x2c;
}


