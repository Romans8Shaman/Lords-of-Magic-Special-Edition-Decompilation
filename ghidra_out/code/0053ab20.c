
undefined4 FUN_0053ab20(LPVOID param_1)

{
  BOOL BVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0054eec8;
  puStack_10 = &LAB_0053b9f8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  BVar1 = TlsSetValue(DAT_00574a50,param_1);
  if (BVar1 == 0) {
    __amsg_exit(0x10);
  }
  if (PTR_op_sunlight_005747c0 != (undefined *)0x0) {
    (/*IC:0053ab6d*/*(code *)PTR_op_sunlight_005747c0)();
  }
  local_8 = 0;
  (/*IC:0053ab7a*/**(code **)((int)param_1 + 0x48))(*(undefined4 *)((int)param_1 + 0x4c));
  FUN_0053abd0();
  ExceptionList = local_14;
  return 0;
}


