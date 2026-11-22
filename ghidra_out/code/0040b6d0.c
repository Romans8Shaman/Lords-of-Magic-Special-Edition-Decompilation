
undefined4 __thiscall FUN_0040b6d0(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  int local_5c;
  undefined4 local_58 [18];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00548ff8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040b5e0(this);
  FUN_0040b0b0((int)local_58);
  local_4 = 0;
  uVar1 = FUN_005397f0((char *)&local_5c,4,1,param_1);
  if (uVar1 != 1) {
    local_4 = 0xffffffff;
    FUN_0040b0d0();
    ExceptionList = local_c;
    return 0;
  }
  while( true ) {
    if (local_5c == 0) {
      local_4 = 0xffffffff;
      FUN_0040b0d0();
      ExceptionList = local_c;
      return 1;
    }
    iVar2 = FUN_0040b2b0(local_58,param_1);
    if ((iVar2 == 0) || (iVar2 = FUN_0040b460(this,local_58,local_10), iVar2 < 0)) break;
    local_5c = local_5c + -1;
  }
  local_4 = 0xffffffff;
  FUN_0040b0d0();
  ExceptionList = local_c;
  return 0;
}


