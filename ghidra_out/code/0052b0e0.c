
undefined4 __thiscall FUN_0052b0e0(void *this,int param_1)

{
  if (((param_1 < 0) || (7 < param_1)) ||
     ((*(uint *)((int)this + 0x24) & 1 << ((char)param_1 + 0x18U & 0x1f)) == 0)) {
    return 0;
  }
  return 1;
}


