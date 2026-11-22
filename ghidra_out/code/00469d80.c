
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00469d80(void *this,float param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_1 * (float10)_DAT_0054d7e8 * (float10)_DAT_0054d7f0;
  *(float *)((int)this + 0x48) = param_1;
  fVar2 = (float10)fsin(fVar1);
  *(undefined4 *)((int)this + 0xa4) = 0x3f800000;
  *(undefined4 *)((int)this + 0xe0) = 0x3f800000;
  fVar1 = (float10)fcos(fVar1);
  *(float *)((int)this + 0xb8) = (float)fVar1;
  *(float *)((int)this + 200) = (float)-fVar2;
  *(float *)((int)this + 0xbc) = (float)fVar2;
  *(float *)((int)this + 0xcc) = (float)fVar1;
  (/*IC:00469dee*/**(code **)(*(int *)this + 0x2c))(this);
  return;
}


