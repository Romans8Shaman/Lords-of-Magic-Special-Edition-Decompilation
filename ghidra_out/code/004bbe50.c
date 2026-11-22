
void __fastcall FUN_004bbe50(int param_1)

{
  undefined4 *this;
  
  FUN_004bca80(param_1);
  FUN_0051b820(param_1 + 0x1c64);
  this = *(undefined4 **)(param_1 + 0x28);
  if (this != (undefined4 *)0x0) {
    (/*IC:004bbe6e*/**(code **)*this)(this,1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  FUN_0042d4f0(param_1);
  return;
}


