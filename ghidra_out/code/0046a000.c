
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046a000(void *this,char param_1)

{
  float fVar1;
  
  if (param_1 == '\0') {
    fVar1 = _DAT_0054d814;
  }
  else {
    fVar1 = _DAT_0054d810;
  }
  *(float *)((int)this + 0x54) = *(float *)((int)this + 0x54) - fVar1;
  DAT_005577e0 = *(undefined4 *)((int)this + 0x54);
  *(undefined4 *)((int)this + 100) = DAT_005577e0;
  *(undefined4 *)((int)this + 0x78) = DAT_005577e0;
  _DAT_005577f4 = *(undefined4 *)((int)this + 0x54);
  DAT_00557820 = *(undefined4 *)((int)this + 0x54);
  _DAT_00557834 = *(undefined4 *)((int)this + 0x54);
  (/*IC:0046a048*/**(code **)(*(int *)this + 0x2c))();
  return;
}


