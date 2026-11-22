
void __fastcall FUN_0044ebc0(int param_1)

{
  undefined4 *this;
  undefined4 uVar1;
  int local_a0 [11];
  undefined4 local_74;
  undefined4 local_60;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549b8b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0043b930(local_a0);
  *(undefined2 *)(param_1 + 0xcc) = *(undefined2 *)(param_1 + 0x74);
  *(undefined2 *)(param_1 + 0xce) = *(undefined2 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x68);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x1c);
  local_4 = 0;
  FUN_0043bac0(local_a0,(undefined4 *)(param_1 + 0xc4));
  FUN_0043bdc0(local_a0);
  this = *(undefined4 **)(param_1 + 0x2c);
  if (this != (undefined4 *)0x0) {
    (/*IC:0044ec44*/**(code **)*this)(this,1);
  }
  uVar1 = local_74;
  local_74 = 0;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  local_4 = 0xffffffff;
  FUN_0043ba50(local_a0);
  ExceptionList = pvStack_c;
  return;
}


