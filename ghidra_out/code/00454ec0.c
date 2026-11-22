
void __thiscall FUN_00454ec0(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 local_5e8 [375];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549d2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00411610(local_5e8);
  local_4 = 0;
  iVar1 = FUN_004a6e60((void *)((int)this + 0x482c),param_1,param_2);
  FUN_00482ac0(this,iVar1,0);
  local_4 = 0xffffffff;
  FUN_00411910(local_5e8);
  ExceptionList = local_c;
  return;
}


