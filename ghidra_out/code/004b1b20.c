
void __fastcall FUN_004b1b20(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0054b377;
  local_c = ExceptionList;
  DAT_00583648 = DAT_00583648 + -0x20;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00495590((int *)(param_1 + 0x3b0));
  local_4 = local_4 & 0xffffff00;
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590((int *)(param_1 + 0x390));
  local_4 = 0xffffffff;
  FUN_00539eb0(param_1 + 0x70,200,4,FUN_004b2770);
  ExceptionList = local_c;
  return;
}


