
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00469f00(void *this,int param_1)

{
  *(int *)((int)this + 0x54) = param_1;
  *(int *)((int)this + 100) = param_1;
  *(int *)((int)this + 0x78) = param_1;
  DAT_005577e0 = param_1;
  _DAT_005577f4 = *(undefined4 *)((int)this + 0x54);
  DAT_00557820 = *(undefined4 *)((int)this + 0x54);
  _DAT_00557834 = *(undefined4 *)((int)this + 0x54);
  (/*IC:00469f30*/**(code **)(*(int *)this + 0x2c))(this);
  return;
}


