
undefined4 __thiscall FUN_0043f4e0(void *this,undefined4 param_1,int param_2)

{
  switch(param_1) {
  case 0:
    *(int *)((int)this + 0x58) = param_2;
    (/*IC:0043f4f9*/**(code **)(*(int *)this + 0x2c))(this);
    return 1;
  case 1:
    *(int *)((int)this + 0x5c) = param_2;
    (/*IC:0043f50d*/**(code **)(*(int *)this + 0x2c))(this);
    return 1;
  case 2:
    *(undefined2 *)((int)this + 0x54) = (undefined2)param_2;
    (/*IC:0043f523*/**(code **)(*(int *)this + 0x2c))(this);
    return 1;
  case 3:
    *(undefined2 *)((int)this + 0x56) = (undefined2)param_2;
    (/*IC:0043f539*/**(code **)(*(int *)this + 0x2c))(this);
    return 1;
  default:
    return 0;
  }
}


