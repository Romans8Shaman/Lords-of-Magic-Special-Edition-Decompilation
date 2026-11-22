
void __cdecl op_getspellinfo(void *param_1)

{
  int iVar1;
  undefined4 *this;
  int iVar2;
  uint local_9c;
  undefined4 local_98;
  float local_94;
  float local_90;
  uint local_8c;
  uint local_88;
  undefined4 local_84 [16];
  undefined4 *local_44;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054b88b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004ef610(local_84,&DAT_00584c1c);
  local_4 = 0;
  local_44 = &DAT_005ae974;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_9c = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_98 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_9c = 0;
  }
  iVar1 = FUN_004026a0(&local_9c,&local_8c,(uint *)&local_90,&local_94);
  if (iVar1 == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
  }
  else {
    if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
      iVar1 = *(int *)((int)param_1 + 0x54) + 1;
      *(int *)((int)param_1 + 0x54) = iVar1;
      local_9c = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
      local_98 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(param_1,6);
      local_9c = 0;
    }
    iVar1 = FUN_004026a0(&local_9c,&local_88,(uint *)&local_94,&local_90);
    if (iVar1 == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 0xe;
    }
    else {
      if (local_88 == 0xfffffffe) {
        this = local_84;
      }
      else if (local_88 == 0xffffffff) {
        this = (undefined4 *)FUN_00482ac0(&DAT_005aa12c,DAT_00584c94,4);
      }
      else {
        this = (undefined4 *)FUN_00482ac0(&DAT_005aa12c,local_88,4);
      }
      if (this != (undefined4 *)0x0) {
        FUN_004ef8c0(this,param_1,local_8c);
        goto LAB_004efca1;
      }
      FUN_004d41c0(param_1,s_no_such_spell_005731d8);
      if (*(int *)((int)param_1 + 0x54) != 0) {
        iVar2 = *(int *)((int)param_1 + 0x54) + -1;
        *(int *)((int)param_1 + 0x54) = iVar2;
        iVar1 = *(int *)((int)param_1 + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
        goto LAB_004efca1;
      }
      *(undefined4 *)((int)param_1 + 0x90) = 3;
    }
  }
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
LAB_004efca1:
  local_4 = 0xffffffff;
  FUN_004ef740(local_84);
  ExceptionList = pvStack_c;
  return;
}


