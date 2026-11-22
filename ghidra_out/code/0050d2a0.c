
void __cdecl op_addterrainspritetype(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c [5];
  undefined4 local_28;
  undefined4 local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054c2a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0050cdf0(local_3c);
  local_4 = 0;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_28 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_40 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    local_28 = 0;
  }
  local_24 = local_40;
  if ((char)local_28 == '\0') {
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar2 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar2;
      iVar1 = *(int *)((int)param_1 + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
    }
  }
  else {
    iVar1 = FUN_0050d140(&DAT_005cd304,local_3c);
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar2 = *(int *)((int)param_1 + 0x50);
      iVar3 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar3;
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(int *)(iVar2 + 4 + iVar3 * 8) = iVar1;
    }
    if (iVar1 < 0) {
      FUN_004d41c0(param_1,s_addtreetype_failed_00573ac4);
    }
  }
  local_4 = 0xffffffff;
  FUN_0050ce40();
  ExceptionList = local_c;
  return;
}


