
void __cdecl op_addspelldef(void *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  uint local_b8;
  uint local_b4;
  int local_b0;
  int local_ac [2];
  undefined4 local_a4;
  int local_a0 [6];
  int local_88;
  uint local_84;
  int local_80;
  int local_7c [4];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054b8cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004efcd0(&local_b8);
  local_4 = 0;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_2c = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_28 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    local_2c = 0;
    local_28 = local_c4;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_34 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_30 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_34 = 0;
    local_30 = local_c4;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_4c = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_48 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_4c = 0;
    local_48 = local_c4;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_54 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_50 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_54 = 0;
    local_50 = local_c4;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_5c = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_58 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_5c = 0;
    local_58 = local_c4;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_64 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_60 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_64 = 0;
    local_60 = local_c4;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_6c = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_c4 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_6c = 0;
  }
  local_68 = local_c4;
  FUN_0040adb0(param_1,&local_c8);
  iVar1 = FUN_004026a0(&local_c8,&local_b4,(uint *)&local_c0,&local_bc);
  if (iVar1 == 0) {
    FUN_00404ab0(param_1,0xe);
  }
  else {
    FUN_0040adb0(param_1,&local_c8);
    iVar1 = FUN_004026a0(&local_c8,&local_b8,(uint *)&local_bc,&local_c0);
    if (iVar1 == 0) {
      FUN_00404ab0(param_1,0xe);
    }
    else {
      FUN_0040adb0(param_1,&local_c8);
      iVar1 = FUN_004026a0(&local_c8,&local_84,(uint *)&local_bc,&local_c0);
      if (iVar1 == 0) {
        FUN_00404ab0(param_1,0xe);
      }
      else {
        uVar2 = FUN_0043da90(param_1,&local_88);
        if ((int)uVar2 != 0) {
          uVar2 = FUN_0043da90(param_1,&local_80);
          if ((int)uVar2 != 0) {
            uVar2 = FUN_0043da90(param_1,local_a0);
            if ((int)uVar2 != 0) {
              uVar2 = FUN_0043da90(param_1,local_7c);
              if ((int)uVar2 != 0) {
                local_a4 = FUN_004f2050(param_1);
                uVar2 = FUN_0043da90(param_1,&local_b0);
                if ((int)uVar2 != 0) {
                  uVar2 = FUN_0043da90(param_1,local_ac);
                  if ((int)uVar2 != 0) {
                    iVar1 = FUN_004efff0(&DAT_005aee6c,&local_b8);
                    FUN_0041d1d0(param_1,1,iVar1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_004efd60();
  ExceptionList = local_c;
  return;
}


