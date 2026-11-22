
undefined4 __thiscall
FUN_004bb7b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b52b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x15c8) = param_3;
  *(undefined4 *)((int)this + 0x15cc) = param_4;
  *(undefined4 *)((int)this + 0x2c) = param_1;
  *(undefined4 *)((int)this + 0x30) = param_2;
  FUN_004bb770((int)this);
  FUN_004bb660(this);
  iVar1 = FUN_00492850(&DAT_005a7b50,*(int *)((int)this + 0x15c0));
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  if (*(void **)((int)this + 0x28) == (void *)0x0) {
    this_00 = (void *)FUN_0049f120();
    uStack_4 = 0;
    if (this_00 == (void *)0x0) {
      uStack_4 = 0xffffffff;
      *(undefined4 *)((int)this + 0x28) = 0;
    }
    else {
      puVar2 = FUN_0049c960(this_00,iVar1);
      uStack_4 = 0xffffffff;
      *(undefined4 **)((int)this + 0x28) = puVar2;
    }
  }
  else {
    FUN_0049c9d0(*(void **)((int)this + 0x28),iVar1);
  }
  FUN_0049da80(*(void **)((int)this + 0x28),0);
  ExceptionList = local_c;
  return 1;
}


