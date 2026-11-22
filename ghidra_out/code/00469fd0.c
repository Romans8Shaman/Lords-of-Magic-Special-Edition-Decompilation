
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00469fd0(void *this,int param_1)

{
  *(int *)((int)this + 100) = param_1;
  *(int *)((int)this + 0x78) = param_1;
  DAT_005577e0 = param_1;
  _DAT_005577f4 = param_1;
  DAT_00557820 = param_1;
  _DAT_00557834 = param_1;
  (/*IC:00469ff4*/**(code **)(*(int *)this + 0x2c))(this);
  return 1;
}


