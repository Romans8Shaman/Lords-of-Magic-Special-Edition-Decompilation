
void __fastcall FUN_004718b0(int param_1)

{
  undefined4 *this;
  
  this = *(undefined4 **)(param_1 + 0x170);
  if (this != (undefined4 *)0x0) {
    (/*IC:004718c1*/**(code **)*this)(this,1);
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  return;
}


