
void __cdecl op_artifacttype(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005495cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00427b90(local_8c);
  local_4 = 0;
  iVar2 = FUN_00427d30(&DAT_005cd340,local_8c);
  if (*(int *)((int)param_1 + 0x54) == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  else {
    iVar3 = *(int *)((int)param_1 + 0x54) + -1;
    *(int *)((int)param_1 + 0x54) = iVar3;
    iVar1 = *(int *)((int)param_1 + 0x50);
    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
    *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
  }
  ExceptionList = local_c;
  DAT_005788cc = DAT_005788cc + -0x80;
  return;
}


