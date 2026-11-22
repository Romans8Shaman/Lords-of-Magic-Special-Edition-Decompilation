
undefined4 __thiscall FUN_0040c130(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  int local_60;
  undefined4 local_5c [19];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549058;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040c040(this);
  FUN_0040bb10((int)local_5c);
  local_4 = 0;
  uVar1 = FUN_005397f0((char *)&local_60,4,1,param_1);
  if (uVar1 != 1) {
    local_4 = 0xffffffff;
    FUN_0040bb30();
    ExceptionList = local_c;
    return 0;
  }
  while( true ) {
    if (local_60 == 0) {
      local_4 = 0xffffffff;
      FUN_0040bb30();
      ExceptionList = local_c;
      return 1;
    }
    iVar2 = FUN_0040bd10(local_5c,param_1);
    if ((iVar2 == 0) || (iVar2 = FUN_0040bec0(this,local_5c,local_10), iVar2 < 0)) break;
    local_60 = local_60 + -1;
  }
  local_4 = 0xffffffff;
  FUN_0040bb30();
  ExceptionList = local_c;
  return 0;
}


