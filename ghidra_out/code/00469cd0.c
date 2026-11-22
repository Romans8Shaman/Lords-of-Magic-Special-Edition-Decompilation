
void __thiscall FUN_00469cd0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  *(int *)((int)this + 8) = param_1;
  *(int *)((int)this + 0xc) = param_2;
  *(int *)((int)this + 0x10) = param_3;
  *(int *)((int)this + 0x14) = param_4;
  (/*IC:00469cee*/**(code **)(*(int *)this + 0x30))(this);
  return;
}


