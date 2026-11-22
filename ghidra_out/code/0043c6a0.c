
void __cdecl op_addbuildinginfo(void *param_1)

{
  void *this;
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int local_78;
  char local_74 [4];
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40 [2];
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549868;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0043be40(&local_64);
  this = param_1;
  local_4 = 0;
  FUN_0040adb0(param_1,&local_6c);
  iVar1 = FUN_004026a0(&local_6c,&local_34,(uint *)local_74,(float *)&param_1);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
  }
  else {
    FUN_0040adb0(this,&local_6c);
    iVar1 = FUN_004026a0(&local_6c,local_18,(uint *)local_74,(float *)&param_1);
    if (iVar1 == 0) {
      FUN_00404ab0(this,0xe);
    }
    else {
      FUN_0040adb0(this,&local_6c);
      iVar1 = FUN_004026a0(&local_6c,&local_1c,(uint *)local_74,(float *)&param_1);
      if (iVar1 == 0) {
        FUN_00404ab0(this,0xe);
      }
      else {
        FUN_0040adb0(this,&local_6c);
        iVar1 = FUN_004026a0(&local_6c,&local_20,(uint *)local_74,(float *)&param_1);
        if (iVar1 == 0) {
          FUN_00404ab0(this,0xe);
        }
        else {
          FUN_0040adb0(this,&local_6c);
          iVar1 = FUN_004026a0(&local_6c,&local_24,(uint *)local_74,(float *)&param_1);
          if (iVar1 == 0) {
            FUN_00404ab0(this,0xe);
          }
          else {
            FUN_0040adb0(this,&local_6c);
            iVar1 = FUN_004026a0(&local_6c,&local_28,(uint *)local_74,(float *)&param_1);
            if (iVar1 == 0) {
              FUN_00404ab0(this,0xe);
            }
            else {
              if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
                iVar1 = *(int *)((int)this + 0x54) + 1;
                *(int *)((int)this + 0x54) = iVar1;
                local_48 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
                local_44 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
              }
              else {
                FUN_00404ab0(this,6);
                local_48 = 0;
                local_44 = local_68;
              }
              FUN_0040adb0(this,&local_6c);
              iVar1 = FUN_004026a0(&local_6c,&local_60,(uint *)local_74,(float *)&param_1);
              if (iVar1 == 0) {
                FUN_00404ab0(this,0xe);
              }
              else {
                if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
                  iVar1 = *(int *)((int)this + 0x54) + 1;
                  *(int *)((int)this + 0x54) = iVar1;
                  local_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
                  local_2c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
                }
                else {
                  FUN_00404ab0(this,6);
                  local_30 = 0;
                  local_2c = local_68;
                }
                if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
                  iVar1 = *(int *)((int)this + 0x54) + 1;
                  *(int *)((int)this + 0x54) = iVar1;
                  local_5c = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
                  local_68 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
                }
                else {
                  FUN_00404ab0(this,6);
                  local_5c = 0;
                }
                local_58 = local_68;
                FUN_0040adb0(this,(undefined4 *)local_74);
                iVar1 = FUN_0041da00((int)this);
                uVar2 = 0;
                if (iVar1 == 0) {
                  if (local_74[0] == '\b') {
                    uVar2 = local_70;
                  }
                  else {
                    FUN_00404ab0(this,0xe);
                  }
                }
                FUN_0040adb0(this,&local_6c);
                iVar1 = FUN_004026a0(&local_6c,&local_38,(uint *)local_74,(float *)&param_1);
                if (iVar1 == 0) {
                  FUN_00404ab0(this,0xe);
                }
                else {
                  FUN_0040adb0(this,&local_6c);
                  iVar1 = FUN_004026a0(&local_6c,&local_3c,(uint *)local_74,(float *)&param_1);
                  if (iVar1 == 0) {
                    FUN_00404ab0(this,0xe);
                  }
                  else {
                    uVar3 = FUN_0043da90(this,&local_78);
                    if ((int)uVar3 != 0) {
                      iVar1 = FUN_0043dc30(this,local_40);
                      if (iVar1 != 0) {
                        local_64 = uVar2;
                        iVar1 = FUN_0043c390(&DAT_005cd310,&local_64,local_78);
                        if (iVar1 == 0) {
                          FUN_0043d6f0(this,s_addbuildinginfo_failed_00556580);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  DAT_00579088 = DAT_00579088 + -0x58;
  ExceptionList = local_c;
  return;
}


