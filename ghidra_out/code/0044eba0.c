
undefined4 __thiscall FUN_0044eba0(void *this)

{
  if ((*(uint *)((int)this + 0x30) & 8) == 0) {
    return 0;
  }
  *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0xfffffff7;
  (/*IC:0044ebae*/**(code **)(*(int *)this + 0x2c))();
  return 1;
}


