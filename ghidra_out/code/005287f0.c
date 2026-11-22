
void __cdecl op_addunitmodifier(void *param_1)

{
  void *this;
  int iVar1;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054c4a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00526bf0((int)&local_2c);
  this = param_1;
  local_4 = 0;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_34 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_30 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_34 = 0;
  }
  iVar1 = FUN_004026a0(&local_34,&local_44,&local_38,(float *)&param_1);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
  }
  else {
    local_24 = local_44;
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      local_34 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      local_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      local_34 = 0;
    }
    iVar1 = FUN_004026a0(&local_34,&local_44,&local_38,(float *)&param_1);
    if (iVar1 == 0) {
      FUN_00404ab0(this,0xe);
    }
    else {
      local_14 = local_44;
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar1 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar1;
        local_34 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
        local_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
      }
      else {
        FUN_00404ab0(this,6);
        local_34 = 0;
      }
      iVar1 = FUN_004026a0(&local_34,&local_44,&local_38,(float *)&param_1);
      if (iVar1 == 0) {
        FUN_00404ab0(this,0xe);
      }
      else {
        local_18 = local_44;
        if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
          iVar1 = *(int *)((int)this + 0x54) + 1;
          *(int *)((int)this + 0x54) = iVar1;
          local_34 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
          local_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
        }
        else {
          FUN_00404ab0(this,6);
          local_34 = 0;
        }
        iVar1 = FUN_004026a0(&local_34,&local_44,&local_38,(float *)&param_1);
        if (iVar1 == 0) {
          FUN_00404ab0(this,0xe);
        }
        else {
          local_1c = local_44;
          FUN_0040adb0(this,&local_34);
          iVar1 = FUN_004026a0(&local_34,&local_44,&local_38,(float *)&param_1);
          if (iVar1 == 0) {
            *(undefined4 *)((int)this + 0x90) = 0xe;
            FUN_004d4550(this);
            *(undefined4 *)((int)this + 0x90) = 0;
            *(undefined4 *)((int)this + 0xa4) = 0;
          }
          else {
            local_20 = local_44;
            FUN_0040adb0(this,&local_34);
            iVar1 = FUN_004026a0(&local_34,&local_44,&local_38,(float *)&param_1);
            if (iVar1 == 0) {
              *(undefined4 *)((int)this + 0x90) = 0xe;
              FUN_004d4550(this);
              *(undefined4 *)((int)this + 0x90) = 0;
              *(undefined4 *)((int)this + 0xa4) = 0;
            }
            else {
              local_28 = local_44;
              FUN_0040adb0(this,&local_34);
              iVar1 = FUN_004026a0(&local_34,&local_44,&local_38,(float *)&param_1);
              if (iVar1 == 0) {
                FUN_00404ab0(this,0xe);
              }
              else {
                local_2c = local_44;
                iVar1 = FUN_0041bf10(this,&local_40,&local_3c);
                if (iVar1 != 0) {
                  FUN_00526fe0((void *)(local_40 + 0xc4 + local_3c * 0x4c),&local_2c);
                  if (-1 < (int)local_18) {
                    FUN_0041dc40(local_40);
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
  FUN_00526c10();
  ExceptionList = local_c;
  return;
}


