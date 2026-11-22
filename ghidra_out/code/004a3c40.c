
void __cdecl op_lightning(void *param_1)

{
  void *this;
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint local_70;
  uint local_6c [2];
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40 [3];
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054b028;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004a3080(&local_64);
  this = param_1;
  local_4 = 0;
  FUN_0040adb0(param_1,local_6c);
  iVar1 = FUN_004026a0(local_6c,local_40,&local_70,(float *)&param_1);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
  }
  else {
    FUN_0040adb0(this,local_6c);
    iVar1 = FUN_004026a0(local_6c,&local_10,&local_70,(float *)&param_1);
    if (iVar1 == 0) {
      FUN_00404ab0(this,0xe);
    }
    else {
      FUN_0040adb0(this,local_6c);
      iVar1 = FUN_004026a0(local_6c,&local_14,&local_70,(float *)&param_1);
      if (iVar1 == 0) {
        FUN_00404ab0(this,0xe);
      }
      else {
        FUN_0040adb0(this,local_6c);
        iVar1 = FUN_004026a0(local_6c,&local_20,&local_70,(float *)&param_1);
        if (iVar1 == 0) {
          FUN_00404ab0(this,0xe);
        }
        else {
          puVar2 = (undefined4 *)FUN_0040adb0(this,local_6c);
          local_1c = *puVar2;
          local_18 = puVar2[1];
          if ((char)local_1c != '\0') {
            uVar3 = FUN_0043da90(this,(int *)&param_1);
            if ((int)uVar3 != 0) {
              local_21 = param_1._0_1_;
              uVar3 = FUN_0043da90(this,(int *)&param_1);
              if ((int)uVar3 != 0) {
                local_25 = param_1._0_1_;
                uVar3 = FUN_0043da90(this,(int *)&param_1);
                if ((int)uVar3 != 0) {
                  local_22 = param_1._0_1_;
                  uVar3 = FUN_0043da90(this,(int *)&param_1);
                  if ((int)uVar3 != 0) {
                    local_26 = param_1._0_1_;
                    uVar3 = FUN_0043da90(this,(int *)&param_1);
                    if ((int)uVar3 != 0) {
                      local_23 = param_1._0_1_;
                      uVar3 = FUN_0043da90(this,(int *)&param_1);
                      if ((int)uVar3 != 0) {
                        local_27 = param_1._0_1_;
                        uVar3 = FUN_0043da90(this,(int *)&param_1);
                        if ((int)uVar3 != 0) {
                          local_24 = param_1._0_1_;
                          uVar3 = FUN_0043da90(this,(int *)&param_1);
                          if ((int)uVar3 != 0) {
                            local_28 = param_1._0_1_;
                            FUN_0040adb0(this,local_6c);
                            iVar1 = FUN_004026a0(local_6c,&local_44,&local_70,(float *)&param_1);
                            if (iVar1 == 0) {
                              FUN_00404ab0(this,0xe);
                            }
                            else {
                              FUN_0040adb0(this,local_6c);
                              iVar1 = FUN_004026a0(local_6c,&local_48,&local_70,(float *)&param_1);
                              if (iVar1 == 0) {
                                FUN_00404ab0(this,0xe);
                              }
                              else {
                                FUN_0040adb0(this,local_6c);
                                iVar1 = FUN_004026a0(local_6c,&local_30,&local_70,(float *)&param_1)
                                ;
                                if (iVar1 == 0) {
                                  FUN_00404ab0(this,0xe);
                                }
                                else {
                                  FUN_0040adb0(this,local_6c);
                                  iVar1 = FUN_004026a0(local_6c,&local_34,&local_70,
                                                       (float *)&param_1);
                                  if (iVar1 == 0) {
                                    FUN_00404ab0(this,0xe);
                                  }
                                  else {
                                    FUN_0040adb0(this,local_6c);
                                    iVar1 = FUN_004026a0(local_6c,&local_2c,&local_70,
                                                         (float *)&param_1);
                                    if (iVar1 == 0) {
                                      FUN_00404ab0(this,0xe);
                                    }
                                    else {
                                      FUN_0040adb0(this,local_6c);
                                      iVar1 = FUN_004026a0(local_6c,&local_4c,&local_70,
                                                           (float *)&param_1);
                                      if (iVar1 == 0) {
                                        FUN_00404ab0(this,0xe);
                                      }
                                      else {
                                        uVar3 = FUN_0043da90(this,&local_54);
                                        if ((int)uVar3 != 0) {
                                          uVar3 = FUN_0043da90(this,&local_58);
                                          if ((int)uVar3 != 0) {
                                            uVar3 = FUN_0043da90(this,&local_50);
                                            if ((int)uVar3 != 0) {
                                              uVar3 = FUN_0043da90(this,&local_5c);
                                              if ((int)uVar3 != 0) {
                                                uVar3 = FUN_0043da90(this,&local_60);
                                                if ((int)uVar3 != 0) {
                                                  FUN_004a2da0(&DAT_00584ca8,&local_64);
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
  local_4 = 0xffffffff;
  op_sunlight();
  ExceptionList = local_c;
  return;
}


