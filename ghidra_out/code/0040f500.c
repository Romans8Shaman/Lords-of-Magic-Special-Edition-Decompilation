
undefined4 __thiscall FUN_0040f500(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  int local_60;
  undefined4 local_5c [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549258;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040f430(this);
  FUN_0040eb30(local_5c);
  local_4 = 0;
  uVar1 = FUN_005397f0((char *)&local_60,4,1,param_1);
  if (uVar1 != 1) {
    local_4 = 0xffffffff;
    FUN_0040eb60();
    ExceptionList = local_c;
    return 0;
  }
  while( true ) {
    if (local_60 == 0) {
      local_4 = 0xffffffff;
      FUN_0040eb60();
      ExceptionList = local_c;
      return 1;
    }
    iVar2 = FUN_0040ed80(local_5c,param_1);
    if ((iVar2 == 0) || (iVar2 = FUN_0040efd0(this,local_5c), iVar2 < 0)) break;
    local_60 = local_60 + -1;
  }
  local_4 = 0xffffffff;
  FUN_0040eb60();
  ExceptionList = local_c;
  return 0;
}


