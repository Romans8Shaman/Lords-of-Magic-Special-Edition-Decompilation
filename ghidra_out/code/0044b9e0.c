
void __fastcall FUN_0044b9e0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005499e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0054d600;
  local_4 = 0;
  piVar1 = param_1 + 0xb;
  iVar2 = 6;
  do {
    FUN_00526e00(&DAT_005d2f50,*piVar1);
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_4 = 0xffffffff;
  FUN_0044b4e0(param_1);
  ExceptionList = local_c;
  return;
}


