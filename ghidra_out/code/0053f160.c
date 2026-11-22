
void FUN_0053f160(void)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0054f000;
  puStack_10 = &LAB_0053b9f8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (PTR_FUN_00574a54 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &local_14;
    (/*IC:0053f19d*/*(code *)PTR_FUN_00574a54)();
  }
  local_8 = 0xffffffff;
  FUN_0053f1ce();
  ExceptionList = local_14;
  return;
}


