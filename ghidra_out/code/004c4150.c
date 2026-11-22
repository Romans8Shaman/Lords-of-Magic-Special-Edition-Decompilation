
void __cdecl op_addquestdefinition(void *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    cVar3 = (char)*(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(int *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    cVar3 = '\0';
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  iVar1 = *(int *)((int)param_1 + 0x90);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  if (iVar1 == 0) {
    if (cVar3 != '\b') {
      *(undefined4 *)((int)param_1 + 0x90) = 0xe;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
      local_4 = 0;
    }
  }
  else {
    local_4 = 0;
  }
  if (local_4 == 0) {
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar1 = *(int *)((int)param_1 + 0x50);
      iVar2 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar2;
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
    }
  }
  iVar1 = FUN_004c3b20(&DAT_005cd2e0,local_4);
  if (*(int *)((int)param_1 + 0x54) == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  iVar4 = *(int *)((int)param_1 + 0x54) + -1;
  *(int *)((int)param_1 + 0x54) = iVar4;
  iVar2 = *(int *)((int)param_1 + 0x50);
  *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
  *(int *)(iVar2 + 4 + iVar4 * 8) = iVar1;
  return;
}


