
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00469e00(void *this,float param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_1 * (float10)_DAT_0054d7e8 * (float10)_DAT_0054d7f0;
  *(float *)((int)this + 0x4c) = param_1;
  fVar2 = (float10)fsin(fVar1);
  *(undefined4 *)((int)this + 0xf8) = 0x3f800000;
  *(undefined4 *)((int)this + 0x120) = 0x3f800000;
  fVar1 = (float10)fcos(fVar1);
  *(float *)((int)this + 0xe4) = (float)fVar1;
  *(float *)((int)this + 0x104) = (float)fVar2;
  *(float *)((int)this + 0xec) = (float)-fVar2;
  *(float *)((int)this + 0x10c) = (float)fVar1;
  (/*IC:00469e70*/**(code **)(*(int *)this + 0x2c))(this);
  return;
}


