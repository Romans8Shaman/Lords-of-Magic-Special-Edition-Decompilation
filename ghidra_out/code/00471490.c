
void __fastcall FUN_00471490(int param_1)

{
  int local_40 [4];
  undefined4 local_30;
  int local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00549ed0;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x20) != 0) {
    local_30 = *(undefined4 *)(param_1 + 0x34);
    local_40[3] = *(undefined4 *)(param_1 + 0x30);
    DAT_0058364c = DAT_0058364c + 0x14;
    local_40[1] = 0;
    local_40[2] = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    local_40[0] = param_1;
    FUN_004950c0(local_2c,*(int **)(param_1 + 0x24));
    local_4._0_1_ = 1;
    FUN_00495db0(local_2c,local_40,*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x2c));
    local_4 = (uint)local_4._1_3_ << 8;
    DAT_00583648 = DAT_00583648 + -0x20;
    FUN_00495590(local_2c);
    DAT_0058364c = DAT_0058364c + -0x14;
  }
  ExceptionList = local_c;
  return;
}


