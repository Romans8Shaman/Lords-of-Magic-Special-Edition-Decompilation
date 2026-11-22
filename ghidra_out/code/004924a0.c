
int __thiscall FUN_004924a0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *this_00;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054aa0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00491c70(this);
  puVar2 = (undefined4 *)FUN_00491c20(this,iVar1);
  if (puVar2 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return -1;
  }
  this_00 = (void *)FUN_0049f120();
  uStack_4 = 0;
  if (this_00 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0049c960(this_00,param_1);
  }
  puVar2[1] = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return -1;
  }
  *puVar2 = 0xe;
  ExceptionList = local_c;
  return iVar1;
}


