
int __thiscall FUN_0043c2b0(void *this,int param_1)

{
  if ((param_1 < 0) || (*(int *)((int)this + 4) <= param_1)) {
    return 0;
  }
  return *(int *)((int)this + 8) + param_1 * 0x58;
}


