
undefined4 __fastcall FUN_00530250(int param_1)

{
  undefined4 *this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_5e8 [375];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054c52b;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x2e8) == 3) {
    return 1;
  }
  ExceptionList = &local_c;
  this = FUN_0052d240(param_1);
  if (this == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  uVar1 = FUN_0052d190(param_1);
  if (uVar1 == 0) {
    uVar1 = 0xffffffff;
  }
  FUN_00411610(local_5e8);
  local_4 = 0;
  FUN_00415170(this,local_5e8,uVar1);
  uVar2 = FUN_00420970(local_5e8);
  FUN_004117f0(local_5e8,0);
  local_4 = 0xffffffff;
  FUN_00411910(local_5e8);
  ExceptionList = local_c;
  return uVar2;
}


