
void FUN_00539ff0(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4,
                 undefined4 unused_stack_16)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0054eeb0;
  puStack_10 = &LAB_0053b9f8;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 1) {
    (/*IC:0053a02b*/*(code *)param_4)();
  }
  local_8 = 0xffffffff;
  FUN_0053a068();
  ExceptionList = local_14;
  return;
}


