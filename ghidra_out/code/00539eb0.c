
void FUN_00539eb0(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0054ee90;
  puStack_10 = &LAB_0053b9f8;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (/*IC:00539ef8*/*(code *)param_4)();
  }
  local_8 = 0xffffffff;
  FUN_00539f29();
  ExceptionList = local_14;
  return;
}


