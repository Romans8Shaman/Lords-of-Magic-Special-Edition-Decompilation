
void __fastcall FUN_0042e530(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00549676;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_004117f0(param_1,0);
  FUN_004117f0(param_1 + 0x177,0);
  local_4 = local_4 & 0xffffff00;
  FUN_00411910(param_1 + 0x177);
  local_4 = 0xffffffff;
  FUN_00411910(param_1);
  ExceptionList = local_c;
  return;
}


