
void __fastcall FUN_00504c30(int param_1)

{
  int local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054c168;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x22ff4) != 0) {
    ExceptionList = &local_c;
    FUN_004950c0(local_2c,*(int **)(param_1 + 0x688));
    local_4 = 0;
    FUN_00497270(local_2c,0,0,0x280,0x1e0,0);
    (/*IC:00504c9e*/**(code **)(**(int **)(param_1 + 0x684) + 0x1c))
              (*(int **)(param_1 + 0x684),0,0,*(undefined4 *)(param_1 + 0x688),0,0);
    DAT_00583648 = DAT_00583648 + -0x20;
    local_4 = 0xffffffff;
    FUN_00495590(local_2c);
  }
  ExceptionList = local_c;
  return;
}


