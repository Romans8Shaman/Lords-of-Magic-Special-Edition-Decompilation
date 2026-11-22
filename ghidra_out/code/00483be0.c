
void __thiscall FUN_00483be0(void *this,int *param_1)

{
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 2;
  (/*IC:00483bfa*/**(code **)(*param_1 + 0x44))(param_1,&DAT_005a7a14);
  FUN_004a6d70((void *)((int)this + 0x482c),(int)param_1,param_1[7]);
  FUN_004f60f0((void *)((int)this + 0x4848),param_1[10]);
  if (param_1[1] == 7) {
    FUN_0047cc50((int)param_1);
  }
  else if (param_1 != (int *)0x0) {
    (/*IC:00483c2c*/**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}


