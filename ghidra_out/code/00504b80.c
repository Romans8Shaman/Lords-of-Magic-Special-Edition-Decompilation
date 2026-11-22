
void __fastcall FUN_00504b80(int param_1)

{
  int local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054c148;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x22ff4) != 0) {
    ExceptionList = &local_c;
    FUN_004950c0(local_2c,*(int **)(param_1 + 0x68c));
    local_4 = 0;
    FUN_00497270(local_2c,0,0,*(int *)(param_1 + 0x2dd4) * 2 + 0x280,
                 *(int *)(param_1 + 0x2dd8) * 2 + 0x180,0);
    DAT_00583648 = DAT_00583648 + -0x20;
    local_4 = 0xffffffff;
    FUN_00495590(local_2c);
  }
  ExceptionList = local_c;
  return;
}


