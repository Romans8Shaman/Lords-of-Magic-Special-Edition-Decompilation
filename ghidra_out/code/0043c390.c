
undefined4 __thiscall FUN_0043c390(void *this,undefined4 *unused_stack_4,undefined4 param_p2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_64 [9];
  undefined2 local_40;
  undefined2 local_3e;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00549828;
  local_c = ExceptionList;
  DAT_00579088 = DAT_00579088 + 0x58;
  puVar2 = local_64;
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *unused_stack_4;
    unused_stack_4 = unused_stack_4 + 1;
    puVar2 = puVar2 + 1;
  }
  local_3e = local_40;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_0043c430(this,local_64);
  if (iVar1 < 0) {
    DAT_00579088 = DAT_00579088 + -0x58;
    ExceptionList = local_c;
    return 0;
  }
  DAT_00579088 = DAT_00579088 + -0x58;
  ExceptionList = local_c;
  return 1;
}


