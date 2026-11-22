
void __fastcall FUN_004fdc40(int param_1)

{
  undefined4 *arg1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0054c009;
  pvStack_c = ExceptionList;
  arg1 = *(undefined4 **)(param_1 + 0x23090);
  local_4 = 0x20;
  ExceptionList = &pvStack_c;
  if (arg1 != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_004d2c80(arg1);
    Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    Ordinal_403(*(int *)(param_1 + 0x110),s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  local_4._0_1_ = 0x1f;
  op_sunlight();
  local_4._0_1_ = 0x1e;
  thunk_FUN_004b64d0(param_1 + 0x48870);
  local_4._0_1_ = 0x1d;
  thunk_FUN_004b9dc0((int *)(param_1 + 0x48864));
  local_4._0_1_ = 0x1c;
  thunk_FUN_00427df0((undefined4 *)(param_1 + 0x48858));
  local_4._0_1_ = 0x1b;
  thunk_FUN_004b0e00(param_1 + 0x4884c);
  local_4._0_1_ = 0x1a;
  thunk_FUN_004b0e00(param_1 + 0x48840);
  local_4._0_1_ = 0x19;
  thunk_FUN_0043d1e0(param_1 + 0x48834);
  local_4._0_1_ = 0x18;
  thunk_FUN_0043c170(param_1 + 0x48828);
  local_4._0_1_ = 0x17;
  thunk_FUN_0050d1a0(param_1 + 0x4881c);
  local_4._0_1_ = 0x16;
  thunk_FUN_004b0e00(param_1 + 0x48810);
  local_4._0_1_ = 0x15;
  thunk_FUN_005240b0(param_1 + 0x48804);
  local_4._0_1_ = 0x14;
  thunk_FUN_004c39b0((undefined4 *)(param_1 + 0x487f8));
  local_4._0_1_ = 0x13;
  thunk_FUN_004c4bb0((undefined4 *)(param_1 + 0x487dc));
  local_4._0_1_ = 0x12;
  FUN_0047fa40(param_1 + 0x25644);
  local_4._0_1_ = 0x11;
  op_sunlight();
  local_4._0_1_ = 0x10;
  FUN_004717b0(param_1 + 0x2531c);
  local_4._0_1_ = 0xf;
  FUN_00539eb0(param_1 + 0x232a8,0x400,8,&LAB_004fdc30);
  DAT_00583648 = DAT_00583648 + -0x20;
  local_4._0_1_ = 0xe;
  FUN_00495590((int *)(param_1 + 0x23070));
  local_4 = CONCAT31(local_4._1_3_,0xd);
  thunk_FUN_00491b00((int *)(param_1 + 0x23068));
  DAT_00583650 = DAT_00583650 + -0x10;
  if (*(int *)(param_1 + 0x22fcc) != 0) {
    Ordinal_403(*(int *)(param_1 + 0x22fcc),s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  *(undefined4 *)(param_1 + 0x22fcc) = 0;
  *(undefined4 *)(param_1 + 0x22fbc) = 0;
  *(undefined4 *)(param_1 + 0x22fc0) = 0;
  *(undefined4 *)(param_1 + 0x22fc4) = 0;
  *(undefined4 *)(param_1 + 0x22fc8) = 0;
  if (*(int *)(param_1 + 0x22fa8) != 0) {
    Ordinal_403(*(int *)(param_1 + 0x22fa8),s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  *(undefined4 *)(param_1 + 0x22fa8) = 0;
  *(undefined4 *)(param_1 + 0x22f98) = 0;
  *(undefined4 *)(param_1 + 0x22f9c) = 0;
  *(undefined4 *)(param_1 + 0x22fa0) = 0;
  *(undefined4 *)(param_1 + 0x22fa4) = 0;
  if (*(int *)(param_1 + 0x22f84) != 0) {
    Ordinal_403(*(int *)(param_1 + 0x22f84),s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  *(undefined4 *)(param_1 + 0x22f84) = 0;
  *(undefined4 *)(param_1 + 0x22f74) = 0;
  *(undefined4 *)(param_1 + 0x22f78) = 0;
  *(undefined4 *)(param_1 + 0x22f7c) = 0;
  *(undefined4 *)(param_1 + 0x22f80) = 0;
  if (*(int *)(param_1 + 0x22f60) != 0) {
    Ordinal_403(*(int *)(param_1 + 0x22f60),s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  *(undefined4 *)(param_1 + 0x22f60) = 0;
  *(undefined4 *)(param_1 + 0x22f50) = 0;
  *(undefined4 *)(param_1 + 0x22f54) = 0;
  *(undefined4 *)(param_1 + 0x22f58) = 0;
  *(undefined4 *)(param_1 + 0x22f5c) = 0;
  if (*(int *)(param_1 + 0x22f3c) != 0) {
    Ordinal_403(*(int *)(param_1 + 0x22f3c),s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  *(undefined4 *)(param_1 + 0x22f3c) = 0;
  *(undefined4 *)(param_1 + 0x22f2c) = 0;
  *(undefined4 *)(param_1 + 0x22f30) = 0;
  *(undefined4 *)(param_1 + 0x22f34) = 0;
  *(undefined4 *)(param_1 + 0x22f38) = 0;
  if (*(int *)(param_1 + 0x22f18) != 0) {
    Ordinal_403(*(int *)(param_1 + 0x22f18),s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  *(undefined4 *)(param_1 + 0x22f18) = 0;
  *(undefined4 *)(param_1 + 0x22f08) = 0;
  *(undefined4 *)(param_1 + 0x22f0c) = 0;
  *(undefined4 *)(param_1 + 0x22f10) = 0;
  *(undefined4 *)(param_1 + 0x22f14) = 0;
  *(undefined4 *)(param_1 + 0x2be8) = &PTR_FUN_0054e860;
  local_4._0_1_ = 0x21;
  *(int *)(param_1 + 0x2d94) = *(int *)(param_1 + 0x2d94) + -0x202cc;
  FUN_00519980(param_1 + 0x2be8);
  DAT_00583648 = DAT_00583648 + -0x20;
  local_4._0_1_ = 5;
  FUN_00495590((int *)(param_1 + 0x2e6c));
  local_4._0_1_ = 4;
  op_sunlight();
  local_4._0_1_ = 3;
  thunk_FUN_00531030((undefined4 *)(param_1 + 0x1cd8));
  local_4._0_1_ = 2;
  FUN_00478320((int *)(param_1 + 0x920));
  local_4._0_1_ = 1;
  thunk_FUN_004c9900((undefined4 *)(param_1 + 0x278));
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_0049a220(param_1 + 0x1dc);
  local_4 = 0xffffffff;
  FUN_004a2ba0(param_1 + 0x1c0);
  ExceptionList = pvStack_c;
  return;
}


