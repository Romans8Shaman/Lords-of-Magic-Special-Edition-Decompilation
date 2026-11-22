
void __fastcall FUN_004a4970(void *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0054b0f1;
  pvStack_c = ExceptionList;
  DAT_005838a4 = DAT_005838a4 + -0x308;
  local_4 = 5;
  ExceptionList = &pvStack_c;
  FUN_004a4b00(param_1,1);
  FUN_004b1460((int)param_1);
  if (*(int *)((int)param_1 + 0xa8) != 0) {
    DAT_005838a4 = DAT_005838a4 + *(int *)((int)param_1 + 0xb8) * *(int *)((int)param_1 + 0xbc) * -8
    ;
    if (*(int *)((int)param_1 + 0xa8) != 0) {
      Ordinal_403(*(int *)((int)param_1 + 0xa8),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    *(undefined4 *)((int)param_1 + 0xa8) = 0;
  }
  if (*(int *)((int)param_1 + 0xac) != 0) {
    DAT_005838a4 = DAT_005838a4 +
                   *(int *)((int)param_1 + 0xb8) * *(int *)((int)param_1 + 0xbc) * -0x10;
    iVar1 = *(int *)((int)param_1 + 0xac);
    if (iVar1 != 0) {
      FUN_00539eb0(iVar1,0x10,*(int *)(iVar1 + -4),FUN_0046ba20);
      if (iVar1 + -4 != 0) {
        Ordinal_403(iVar1 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
    }
    *(undefined4 *)((int)param_1 + 0xac) = 0;
  }
  local_4._0_1_ = 4;
  thunk_FUN_00531a80((int *)((int)param_1 + 0x2e8));
  local_4._0_1_ = 3;
  FUN_00498b90((int *)((int)param_1 + 0x278));
  DAT_00583648 = DAT_00583648 + -0x20;
  local_4._0_1_ = 2;
  FUN_00495590((int *)((int)param_1 + 0x254));
  DAT_00583648 = DAT_00583648 + -0x20;
  local_4._0_1_ = 1;
  FUN_00495590((int *)((int)param_1 + 0x234));
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_00508b00((undefined4 *)((int)param_1 + 0xd8));
  local_4 = 0xffffffff;
  thunk_FUN_004f5f40((int)param_1 + 0x1c);
  ExceptionList = pvStack_c;
  return;
}


