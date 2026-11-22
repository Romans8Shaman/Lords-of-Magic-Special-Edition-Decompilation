
void __fastcall FUN_0044e9d0(undefined4 *param_1)

{
  undefined4 *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00549b68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0054d630;
  local_4 = 0;
  DAT_005792b0 = DAT_005792b0 + -0x34c;
  this = (undefined4 *)param_1[0x11];
  if (this != (undefined4 *)0x0) {
    (/*IC:0044ea18*/**(code **)*this)(this,1);
  }
  FUN_004530e0((int)param_1);
  local_4 = 0xffffffff;
  FUN_004f59f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


