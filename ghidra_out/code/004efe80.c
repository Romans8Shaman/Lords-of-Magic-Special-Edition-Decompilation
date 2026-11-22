
int __thiscall FUN_004efe80(void *this,int param_1)

{
  if (((param_1 < 0) || (*(int *)this <= param_1)) || (*(int *)((int)this + 8) == 0)) {
    return 0;
  }
  return *(int *)((int)this + 8) + param_1 * 0xac;
}


