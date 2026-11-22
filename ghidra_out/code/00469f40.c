
void __thiscall FUN_00469f40(void *this,int param_1,int param_2,int param_3,int param_4)

{
  *(int *)((int)this + 0x18) = param_1;
  *(int *)((int)this + 0x1c) = param_2;
  *(int *)((int)this + 0x20) = param_3;
  *(int *)((int)this + 0x24) = param_4;
  (/*IC:00469f5e*/**(code **)(*(int *)this + 0x30))(this);
  return;
}


