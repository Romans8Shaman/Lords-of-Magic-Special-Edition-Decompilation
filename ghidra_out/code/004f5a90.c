
undefined4 __thiscall FUN_004f5a90(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b9cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00492850(&DAT_005a7b50,param_1);
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  if (*(void **)((int)this + 0x2c) == (void *)0x0) {
    this_00 = (void *)FUN_0049f120();
    uStack_4 = 0;
    if (this_00 == (void *)0x0) {
      *(undefined4 *)((int)this + 0x2c) = 0;
    }
    else {
      puVar2 = FUN_0049c960(this_00,iVar1);
      *(undefined4 **)((int)this + 0x2c) = puVar2;
    }
  }
  else {
    FUN_0049c9d0(*(void **)((int)this + 0x2c),iVar1);
  }
  ExceptionList = local_c;
  return 1;
}


