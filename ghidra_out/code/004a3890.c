
void __cdecl op_randombolt(void *param_1)

{
  int iVar1;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  float local_74;
  float local_70;
  uint local_6c;
  undefined4 local_68;
  undefined1 local_64 [48];
  undefined4 local_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054b008;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004a3080(local_64);
  local_4 = 0;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_6c = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_68 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_6c = 0;
  }
  iVar1 = FUN_004026a0(&local_6c,&local_84,(uint *)&local_70,&local_74);
  if (iVar1 != 0) {
    if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
      iVar1 = *(int *)((int)param_1 + 0x54) + 1;
      *(int *)((int)param_1 + 0x54) = iVar1;
      local_6c = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
      local_68 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(param_1,6);
      local_6c = 0;
    }
    iVar1 = FUN_004026a0(&local_6c,&local_80,(uint *)&local_74,&local_70);
    if (iVar1 != 0) {
      if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
        iVar1 = *(int *)((int)param_1 + 0x54) + 1;
        *(int *)((int)param_1 + 0x54) = iVar1;
        local_6c = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
        local_68 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
      }
      else {
        *(undefined4 *)((int)param_1 + 0x90) = 6;
        FUN_004d4550(param_1);
        *(undefined4 *)((int)param_1 + 0x90) = 0;
        *(undefined4 *)((int)param_1 + 0xa4) = 0;
        local_6c = 0;
      }
      iVar1 = FUN_004026a0(&local_6c,&local_7c,(uint *)&local_74,&local_70);
      if (iVar1 != 0) {
        if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
          iVar1 = *(int *)((int)param_1 + 0x54) + 1;
          *(int *)((int)param_1 + 0x54) = iVar1;
          local_6c = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
          local_68 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
        }
        else {
          *(undefined4 *)((int)param_1 + 0x90) = 6;
          FUN_004d4550(param_1);
          *(undefined4 *)((int)param_1 + 0x90) = 0;
          *(undefined4 *)((int)param_1 + 0xa4) = 0;
          local_6c = 0;
        }
        iVar1 = FUN_004026a0(&local_6c,&local_78,(uint *)&local_74,&local_70);
        if (iVar1 != 0) {
          local_34 = 2;
          FUN_004a3800(local_64,local_78,local_7c,local_80,local_84);
          goto LAB_004a3a9f;
        }
      }
    }
  }
  *(undefined4 *)((int)param_1 + 0x90) = 0xe;
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
LAB_004a3a9f:
  local_4 = 0xffffffff;
  op_sunlight();
  ExceptionList = local_c;
  return;
}


