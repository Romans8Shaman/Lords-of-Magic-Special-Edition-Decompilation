
int * __fastcall FUN_004ad860(int param_1,undefined4 unused_reg_1,int *unused_stack_0)

{
  void *this;
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b23b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = (void *)Ordinal_401(0x148,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  uStack_4 = 0;
  if (this == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_004ad050(this,unused_stack_0);
  }
  uStack_4 = 0xffffffff;
  if (piVar1 == (int *)0x0) {
    OutputDebugStringA(s_Insufficient_memory_to_add_missi_0055cc58);
    ExceptionList = pvStack_c;
    return (int *)0x0;
  }
  FUN_004a7d50((void *)(param_1 + 0x482c),piVar1,*unused_stack_0);
  ExceptionList = pvStack_c;
  return piVar1;
}


