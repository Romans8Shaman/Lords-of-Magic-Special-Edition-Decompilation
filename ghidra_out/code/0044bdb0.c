
undefined4 __thiscall FUN_0044bdb0(void *this,int param_1)

{
  if (*(int *)((int)this + 0x14) < param_1) {
    return 0;
  }
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) - param_1;
  return 1;
}


