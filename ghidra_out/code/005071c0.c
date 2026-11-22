
undefined4 __thiscall FUN_005071c0(void *this,int param_1)

{
  if ((*(uint *)((int)this + 0x5cc) & 1 << ((byte)param_1 & 0x1f)) == 0) {
    return 1;
  }
  return (uint)(param_1 == *(int *)((int)this + 0x48));
}


