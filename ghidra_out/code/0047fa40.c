
void __fastcall FUN_0047fa40(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0054a73f;
  local_c = ExceptionList;
  local_4 = 0x23;
  ExceptionList = &local_c;
  FUN_0047fd20(param_1);
  if (*(HANDLE *)(param_1 + 0x228b4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x228b4));
  }
  local_4._0_1_ = 0x22;
  thunk_FUN_0052b260((int *)(param_1 + 0x23060));
  local_4._0_1_ = 0x21;
  thunk_FUN_004ef2e0((int *)(param_1 + 0x22ec8));
  local_4._0_1_ = 0x20;
  FUN_00437260((undefined4 *)(param_1 + 0x22db0));
  local_4._0_1_ = 0x1f;
  FUN_00539eb0(param_1 + 0x22a5c,0x18,0x14,&LAB_00489950);
  local_4._0_1_ = 0x1e;
  FUN_004b2770((undefined4 *)(param_1 + 0x22994));
  local_4._0_1_ = 0x1d;
  op_sunlight();
  local_4._0_1_ = 0x1c;
  FUN_0047bd80((undefined4 *)(param_1 + 0x228bc));
  local_4._0_1_ = 0x1b;
  FUN_00539eb0(param_1 + 0x5068,0x1d84,0x10,FUN_004bbe80);
  local_4._0_1_ = 0x1a;
  FUN_004c5ba0((int *)(param_1 + 0x4dd8));
  local_4._0_1_ = 0x19;
  thunk_FUN_004277b0((int *)(param_1 + 0x4dd0));
  local_4._0_1_ = 0x18;
  thunk_FUN_004c3c90((undefined4 *)(param_1 + 0x4db0));
  local_4._0_1_ = 0x17;
  FUN_0040ef60((int *)(param_1 + 0x4da4));
  local_4._0_1_ = 0x16;
  FUN_0040e040((int *)(param_1 + 0x4d94));
  local_4._0_1_ = 0x15;
  FUN_0040d580((int *)(param_1 + 0x4d84));
  local_4._0_1_ = 0x14;
  FUN_0040c7b0((int *)(param_1 + 0x4d74));
  local_4._0_1_ = 0x13;
  FUN_0040be50((int *)(param_1 + 0x4d60));
  local_4._0_1_ = 0x12;
  FUN_0040b3f0((int *)(param_1 + 0x4d4c));
  local_4._0_1_ = 0x11;
  thunk_FUN_004f0060(param_1 + 0x4d40);
  local_4._0_1_ = 0x10;
  FUN_004a4970((void *)(param_1 + 0x482c));
  local_4._0_1_ = 0xf;
  op_sunlight();
  local_4._0_1_ = 0xe;
  FUN_0042e530((undefined4 *)(param_1 + 0x3b24));
  local_4._0_1_ = 0xd;
  FUN_00411910((undefined4 *)(param_1 + 0x3540));
  local_4._0_1_ = 0xc;
  FUN_00411910((undefined4 *)(param_1 + 0x2f64));
  local_4._0_1_ = 0xb;
  FUN_00411910((undefined4 *)(param_1 + 0x2988));
  local_4._0_1_ = 10;
  FUN_00411910((undefined4 *)(param_1 + 0x23ac));
  local_4._0_1_ = 9;
  FUN_00411910((undefined4 *)(param_1 + 0x1dd0));
  local_4._0_1_ = 8;
  FUN_00411910((undefined4 *)(param_1 + 0x17f4));
  local_4._0_1_ = 7;
  FUN_00411910((undefined4 *)(param_1 + 0x1218));
  local_4._0_1_ = 6;
  FUN_00411910((undefined4 *)(param_1 + 0xc3c));
  local_4._0_1_ = 5;
  FUN_00411910((undefined4 *)(param_1 + 0x660));
  DAT_00583648 = DAT_00583648 + -0x20;
  local_4._0_1_ = 4;
  FUN_00495590((int *)(param_1 + 0x630));
  local_4._0_1_ = 3;
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590((int *)(param_1 + 0x608));
  DAT_00583648 = DAT_00583648 + -0x20;
  local_4._0_1_ = 2;
  FUN_00495590((int *)(param_1 + 0x5e8));
  local_4._0_1_ = 1;
  FUN_004b19a0(param_1 + 0x130);
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_0049a220(param_1 + 0xc4);
  local_4 = 0xffffffff;
  thunk_FUN_004b0e00(param_1 + 0xb0);
  ExceptionList = local_c;
  return;
}


