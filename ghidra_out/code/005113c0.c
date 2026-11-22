
undefined4 * __fastcall FUN_005113c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054c33e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00469a40(param_1);
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610(param_1 + 0xa1);
  param_1[0x6b] = param_1[0x6b] + 0x202cc;
  param_1[0x7b] = 0x3c;
  param_1[0x7c] = 0x3c;
  param_1[0x7f] = 0x3c;
  param_1[0x80] = 0x3c;
  param_1[0x77] = 6;
  param_1[0x78] = 6;
  param_1[0x6c] = 0x3c;
  param_1[0x6d] = 0x3c;
  *param_1 = &PTR_FUN_0054e860;
  param_1[0x80a9] = 0x96;
  param_1[0x80aa] = 30000;
  param_1[0x80ab] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0xa0] = 0x1f7;
  param_1[0x9f] = 0x2f7;
  param_1[0x85] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  puVar2 = param_1 + 0x8b;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x94;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_4 = 0;
  param_1[0x80b2] = 0;
  param_1[0x86] = 1;
  param_1[0x87] = 0;
  FUN_005185a0((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


