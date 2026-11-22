
undefined4 __cdecl FUN_004a2380(LPCSTR param_1,int param_2)

{
  undefined4 uVar1;
  int local_20 [2];
  byte *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054afc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004fe720(local_20,param_1,0,0,0,1);
  local_4 = 0;
  if (local_20[0] == 0) {
    local_4 = 0xffffffff;
    FUN_004fe9c0(local_20);
    ExceptionList = local_c;
    return 0;
  }
  uVar1 = FUN_004a2ae0(local_20[0],local_18,param_2);
  local_4 = 0xffffffff;
  FUN_004fe9c0(local_20);
  ExceptionList = local_c;
  return uVar1;
}


