
undefined4 * __thiscall FUN_0049c960(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054aedb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0052b240((undefined4 *)((int)this + 0x30));
  *(undefined ***)this = &PTR_FUN_0054da30;
  DAT_0058372c = DAT_0058372c + 0x40;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  FUN_0049c9d0(this,param_1);
  ExceptionList = local_c;
  return this;
}


