
void __fastcall FUN_0043ba50(undefined4 *param_1)

{
  undefined4 *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005497e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0054d4d8;
  local_4 = 0;
  DAT_00579080 = DAT_00579080 + -0x94;
  this = (undefined4 *)param_1[0x12];
  if (this != (undefined4 *)0x0) {
    (/*IC:0043ba98*/**(code **)*this)(this,1);
  }
  local_4 = 0xffffffff;
  FUN_004f59f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


