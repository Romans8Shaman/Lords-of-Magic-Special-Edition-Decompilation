
void __cdecl op_unittype(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_3f4 [250];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054c43b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00522a60((int)local_3f4);
  local_4 = 0;
  iVar2 = FUN_005241e0(&DAT_005cd2ec,local_3f4);
  if (*(int *)((int)param_1 + 0x54) == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  else {
    iVar1 = *(int *)((int)param_1 + 0x50);
    iVar3 = *(int *)((int)param_1 + 0x54) + -1;
    *(int *)((int)param_1 + 0x54) = iVar3;
    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
    *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
  }
  if (iVar2 < 0) {
    FUN_004d41c0(param_1,s_unittype_failed_0057417c);
  }
  DAT_005d3348 = DAT_005d3348 + -1000;
  ExceptionList = local_c;
  return;
}


