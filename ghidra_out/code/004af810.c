
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_launchmissile(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  undefined4 *this_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unused_reg_1;
  undefined8 uVar3;
  undefined4 *puStack_6c;
  float fStack_68;
  uint auStack_64 [2];
  uint uStack_5c;
  float fStack_58;
  uint uStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  float fStack_38;
  float fStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint auStack_14 [2];
  float fStack_c;
  float fStack_8;
  uint uStack_4;
  
  this = vm;
  FUN_0040adb0(vm,auStack_64);
  iVar1 = FUN_004026a0(auStack_64,&uStack_4,(uint *)&fStack_68,(float *)&puStack_6c);
  if (iVar1 != 0) {
    FUN_0040adb0(this,auStack_64);
    iVar1 = FUN_004026a0(auStack_64,(uint *)&puStack_6c,(uint *)&fStack_68,&fStack_8);
    if (iVar1 != 0) {
      FUN_0040adb0(this,auStack_64);
      iVar1 = FUN_004026a0(auStack_64,(uint *)&puStack_6c,(uint *)&fStack_68,&fStack_c);
      if (iVar1 != 0) {
        auStack_14[1] = 0xffffffff;
        FUN_0040adb0(this,auStack_64);
        iVar1 = FUN_004026a0(auStack_64,auStack_14,(uint *)&puStack_6c,&fStack_68);
        if (iVar1 != 0) {
          FUN_0040adb0(this,auStack_64);
          iVar1 = FUN_004026a0(auStack_64,&uStack_18,(uint *)&puStack_6c,&fStack_68);
          if (iVar1 != 0) {
            FUN_0040adb0(this,auStack_64);
            iVar1 = FUN_004026a0(auStack_64,&uStack_54,(uint *)&puStack_6c,&fStack_68);
            if (iVar1 != 0) {
              FUN_0040adb0(this,auStack_64);
              iVar1 = FUN_004026a0(auStack_64,(uint *)&puStack_6c,(uint *)&fStack_68,&fStack_58);
              if (iVar1 == 0) {
                FUN_00404ab0(this,0xe);
                return;
              }
              FUN_0040adb0(this,auStack_64);
              iVar1 = FUN_004026a0(auStack_64,&uStack_5c,(uint *)&puStack_6c,&fStack_68);
              if (iVar1 == 0) {
                FUN_00404ab0(this,0xe);
                return;
              }
              FUN_0040adb0(this,auStack_64);
              iVar1 = FUN_004026a0(auStack_64,&uStack_2c,(uint *)&puStack_6c,&fStack_68);
              if (iVar1 == 0) {
                FUN_00404ab0(this,0xe);
                return;
              }
              FUN_0040adb0(this,auStack_64);
              iVar1 = FUN_004026a0(auStack_64,&uStack_28,(uint *)&puStack_6c,&fStack_68);
              if (iVar1 == 0) {
                FUN_00404ab0(this,0xe);
                return;
              }
              uVar3 = FUN_0043da90(this,(int *)&uStack_30);
              if ((int)uVar3 != 0) {
                FUN_0040adb0(this,auStack_64);
                iVar1 = FUN_004026a0(auStack_64,(uint *)&puStack_6c,(uint *)&fStack_68,(float *)&vm)
                ;
                if (iVar1 == 0) {
                  FUN_00404ab0(this,0xe);
                  return;
                }
                fStack_34 = (float)vm * _DAT_0054dbc0;
                FUN_0040adb0(this,auStack_64);
                iVar1 = FUN_004026a0(auStack_64,(uint *)&puStack_6c,(uint *)&fStack_68,&fStack_38);
                if (iVar1 == 0) {
                  FUN_00404ab0(this,0xe);
                  return;
                }
                FUN_0040adb0(this,auStack_64);
                iVar1 = FUN_004026a0(auStack_64,&uStack_20,(uint *)&puStack_6c,&fStack_68);
                if (iVar1 == 0) {
                  FUN_00404ab0(this,0xe);
                  return;
                }
                FUN_0040adb0(this,auStack_64);
                iVar1 = FUN_004026a0(auStack_64,&uStack_24,(uint *)&puStack_6c,&fStack_68);
                if (iVar1 == 0) {
                  FUN_00404ab0(this,0xe);
                  return;
                }
                FUN_0040adb0(this,auStack_64);
                iVar1 = FUN_004026a0(auStack_64,&uStack_3c,(uint *)&puStack_6c,&fStack_68);
                if (iVar1 == 0) {
                  FUN_00404ab0(this,0xe);
                  return;
                }
                FUN_0040adb0(this,auStack_64);
                iVar1 = FUN_004026a0(auStack_64,&uStack_1c,(uint *)&puStack_6c,&fStack_68);
                if (iVar1 == 0) {
                  FUN_00404ab0(this,0xe);
                  return;
                }
                FUN_0040adb0(this,auStack_64);
                iVar1 = FUN_004026a0(auStack_64,&uStack_40,(uint *)&puStack_6c,&fStack_68);
                if (iVar1 == 0) {
                  FUN_00404ab0(this,0xe);
                  return;
                }
                FUN_0040adb0(this,auStack_64);
                iVar1 = FUN_004026a0(auStack_64,&uStack_44,(uint *)&puStack_6c,&fStack_68);
                if (iVar1 == 0) {
                  FUN_00404ab0(this,0xe);
                  return;
                }
                uVar3 = FUN_0043da90(this,&iStack_4c);
                if ((int)uVar3 != 0) {
                  uVar3 = FUN_0043da90(this,&iStack_50);
                  if ((int)uVar3 != 0) {
                    iVar1 = FUN_004f6000(&DAT_005ae974,iStack_50);
                    iVar2 = FUN_004f6000(&DAT_005ae974,uStack_44);
                    this_00 = FUN_00485080(&DAT_005aa12c,iStack_50,0x2f);
                    puStack_6c = FUN_00485080(&DAT_005aa12c,uStack_44,0x2f);
                    if (((this_00 == (undefined4 *)0x0) || (iStack_4c < 0)) ||
                       ((int)this_00[0x13] <= iStack_4c)) {
                      uStack_48 = 0xffffffff;
                    }
                    else {
                      uStack_48 = this_00[(iStack_4c + 3) * 0x13];
                    }
                    if ((iVar1 != 0) && ((int)uStack_5c < 0)) {
                      uStack_5c = *(uint *)(iVar1 + 0x1c);
                    }
                    if ((iVar2 != 0) && ((int)uStack_54 < 0)) {
                      uStack_54 = *(uint *)(iVar2 + 0x1c);
                    }
                    if (((int)uStack_5c < 0) || (DAT_005ae9c0 <= (int)uStack_5c)) {
                      FUN_004d41c0(this,s_invalid_missile_starting_locatio_0055cd14);
                      return;
                    }
                    iVar1 = FUN_004b0230(&DAT_005ae958,uStack_54);
                    if (iVar1 == 0) {
                      FUN_004d41c0(this,s_invalid_missile_destination_loca_0055ccec);
                      return;
                    }
                    if (this_00 == (undefined4 *)0x0) {
                      uStack_30 = uStack_30 | 0x10000;
                    }
                    if (puStack_6c == (undefined4 *)0x0) {
                      uStack_30 = uStack_30 | 0x20000;
                    }
                    unused_reg_1 = extraout_EDX;
                    if ((-1 < (int)uStack_24) && (this_00 != (undefined4 *)0x0)) {
                      FUN_0041efa0(this_00,uStack_24);
                      unused_reg_1 = extraout_EDX_00;
                    }
                    FUN_004ad860(0x5aa12c,unused_reg_1,&uStack_5c);
                  }
                }
              }
              return;
            }
          }
        }
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


