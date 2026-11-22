
void __fastcall FUN_004f5770(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0054b9b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_0054de68;
  local_4 = 1;
  if (-1 < (int)param_1[1]) {
    FUN_004f5800((int)param_1);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_004f56c0(param_1 + 4);
  *param_1 = &PTR_LAB_0054de30;
  ExceptionList = local_c;
  return;
}


