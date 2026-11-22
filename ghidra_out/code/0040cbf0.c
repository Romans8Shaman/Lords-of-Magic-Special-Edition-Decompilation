
undefined4 __thiscall FUN_0040cbf0(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  int local_4c;
  undefined4 local_48 [13];
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005490f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040cb00(this);
  FUN_0040c580((int)local_48);
  local_4 = 0;
  uVar1 = FUN_005397f0((char *)&local_4c,4,1,param_1);
  if (uVar1 != 1) {
    local_4 = 0xffffffff;
    FUN_0040c5a0();
    ExceptionList = local_c;
    return 0;
  }
  while( true ) {
    if (local_4c == 0) {
      local_4 = 0xffffffff;
      FUN_0040c5a0();
      ExceptionList = local_c;
      return 1;
    }
    iVar2 = FUN_0040c700(local_48,param_1);
    if ((iVar2 == 0) || (uVar1 = FUN_0040c820(this,local_48,local_14,local_14,0,0), (int)uVar1 < 0))
    break;
    local_4c = local_4c + -1;
  }
  local_4 = 0xffffffff;
  FUN_0040c5a0();
  ExceptionList = local_c;
  return 0;
}


