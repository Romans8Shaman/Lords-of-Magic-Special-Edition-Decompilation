
void __cdecl op_getunittypelevelrange(void *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int local_1c;
  uint local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  undefined4 local_4;
  
  pvVar3 = param_1;
  local_18 = 0;
  local_1c = 0;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_8 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_8 = 0;
  }
  iVar1 = FUN_004026a0(&local_8,(uint *)&param_1,(uint *)&local_c,&local_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
  }
  else {
    if (*(int *)((int)pvVar3 + 0x54) < *(int *)((int)pvVar3 + 0x58)) {
      iVar1 = *(int *)((int)pvVar3 + 0x54) + 1;
      *(int *)((int)pvVar3 + 0x54) = iVar1;
      local_8 = *(uint *)(*(int *)((int)pvVar3 + 0x50) + -8 + iVar1 * 8);
      local_4 = *(undefined4 *)(*(int *)((int)pvVar3 + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(pvVar3,6);
      local_8 = 0;
    }
    iVar1 = FUN_004026a0(&local_8,(uint *)&local_14,(uint *)&local_10,&local_c);
    if (iVar1 == 0) {
      *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
    }
    else {
      FUN_00529a90(local_14,(uint)param_1,&local_1c,&local_18);
      pvVar3 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar2 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar2;
        iVar1 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(int *)(iVar1 + 4 + iVar2 * 8) = local_1c;
      }
      pvVar3 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) != 0) {
        iVar2 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar2;
        iVar1 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(uint *)(iVar1 + 4 + iVar2 * 8) = local_18;
        return;
      }
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    }
  }
  FUN_004d4550(pvVar3);
  *(undefined4 *)((int)pvVar3 + 0x90) = 0;
  *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  return;
}


