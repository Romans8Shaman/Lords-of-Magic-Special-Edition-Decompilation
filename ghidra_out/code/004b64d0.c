
undefined4 __fastcall FUN_004b64d0(int param_1)

{
  int *this;
  undefined4 *this_00;
  
  DAT_005851a0 = 0;
  this = *(int **)(param_1 + 0x4b2c);
  if (this != (int *)0x0) {
    (/*IC:004b64e9*/**(code **)(*this + 0x44))(this);
    this_00 = *(undefined4 **)(param_1 + 0x4b2c);
    if (this_00 != (undefined4 *)0x0) {
      (/*IC:004b64fa*/**(code **)*this_00)(this_00,1);
    }
    *(undefined4 *)(param_1 + 0x4b2c) = 0;
  }
  FUN_004c4d20((undefined4 *)&DAT_005cd2c4);
  return 1;
}


