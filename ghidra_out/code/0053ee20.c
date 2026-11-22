
void __cdecl FUN_0053ee20(int param_1,...)

{
  undefined *UNRECOVERED_JUMPTABLE;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0054efd8;
  puStack_10 = &LAB_0053b9f8;
  local_14 = ExceptionList;
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_005399b0(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  ExceptionList = local_14;
  return;
}


