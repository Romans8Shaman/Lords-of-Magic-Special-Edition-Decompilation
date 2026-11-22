
undefined4 __thiscall FUN_0043b7b0(void *this,LPCSTR param_1)

{
  undefined4 uVar1;
  int local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004950c0(local_2c,*(int **)((int)this + 0x684));
  local_4 = 0;
  uVar1 = FUN_0043b500(local_2c,param_1);
  DAT_00583648 = DAT_00583648 + -0x20;
  local_4 = 0xffffffff;
  FUN_00495590(local_2c);
  ExceptionList = local_c;
  return uVar1;
}


