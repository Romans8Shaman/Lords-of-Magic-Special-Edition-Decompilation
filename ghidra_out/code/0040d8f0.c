
undefined4 __thiscall FUN_0040d8f0(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  int local_58;
  undefined4 local_54 [17];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549178;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040e220(this);
  FUN_0040d2e0((int)local_54);
  local_4 = 0;
  uVar1 = FUN_005397f0((char *)&local_58,4,1,param_1);
  if (uVar1 != 1) {
    local_4 = 0xffffffff;
    FUN_0040d300();
    ExceptionList = local_c;
    return 0;
  }
  while( true ) {
    if (local_58 == 0) {
      local_4 = 0xffffffff;
      FUN_0040d300();
      ExceptionList = local_c;
      return 1;
    }
    iVar2 = FUN_0040d4a0(local_54,param_1);
    if ((iVar2 == 0) || (iVar2 = FUN_0040d5f0(this,local_54,local_10), iVar2 < 0)) break;
    local_58 = local_58 + -1;
  }
  local_4 = 0xffffffff;
  FUN_0040d300();
  ExceptionList = local_c;
  return 0;
}


