
void __fastcall FUN_00478320(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0054a154;
  local_c = ExceptionList;
  local_4 = 2;
  DAT_005832ec = DAT_005832ec + -0x13b8;
  ExceptionList = &local_c;
  FUN_00478410(param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x489));
  local_4._0_1_ = 1;
  FUN_00539eb0(param_1 + 0x3f0,300,2,op_sunlight);
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_00477f50((int)(param_1 + 0x3ed));
  local_4 = 0xffffffff;
  FUN_00539eb0(param_1 + 0x1e3,0xd0,10,&LAB_0047a770);
  ExceptionList = local_c;
  return;
}


