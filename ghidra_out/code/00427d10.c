
int __thiscall FUN_00427d10(void *this,int param_1)

{
  if (((param_1 < 0) || (*(int *)this <= param_1)) || (*(int *)((int)this + 8) == 0)) {
    return 0;
  }
  return param_1 * 0x80 + *(int *)((int)this + 8);
}


