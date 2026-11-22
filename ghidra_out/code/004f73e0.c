
undefined4 __thiscall FUN_004f73e0(void *this,int *param_1,int param_2)

{
  int *a1;
  int *this_00;
  undefined4 local_18;
  void *local_14;
  undefined4 *puStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  a1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054bb0d;
  local_c = ExceptionList;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  ExceptionList = &local_c;
  local_14 = this;
  if (param_2 == 0) {
    ExceptionList = &local_c;
    FUN_004f5d20(this);
  }
  FUN_005397f0((char *)&param_2,4,1,param_1);
  param_1 = (int *)0x0;
  if (0 < param_2) {
    this_00 = (int *)0x0;
    do {
      FUN_005397f0((char *)&local_18,4,1,a1);
      switch(local_18) {
      case 0:
        puStack_10 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
        uStack_4 = 0;
        if (puStack_10 == (undefined4 *)0x0) {
LAB_004f7606:
          uStack_4 = 0xffffffff;
          this_00 = (int *)0x0;
        }
        else {
          this_00 = FUN_00411610(puStack_10);
          uStack_4 = 0xffffffff;
        }
        break;
      case 1:
        puStack_10 = (undefined4 *)Ordinal_401(0x60,s_C__lomse_source_storm_h_00555130,0x3ef,0);
        uStack_4 = 1;
        if (puStack_10 == (undefined4 *)0x0) goto LAB_004f7606;
        this_00 = FUN_0050c0b0(puStack_10);
        uStack_4 = 0xffffffff;
        break;
      case 2:
        puStack_10 = (undefined4 *)Ordinal_401(0x94,s_C__lomse_source_storm_h_00555130,0x3ef,0);
        uStack_4 = 2;
        if (puStack_10 == (undefined4 *)0x0) goto LAB_004f7606;
        this_00 = FUN_0043b930(puStack_10);
        uStack_4 = 0xffffffff;
        break;
      case 3:
        puStack_10 = (undefined4 *)Ordinal_401(0x34c,s_C__lomse_source_storm_h_00555130,0x3ef,0);
        uStack_4 = 3;
        if (puStack_10 == (undefined4 *)0x0) goto LAB_004f7606;
        this_00 = FUN_0044e850(puStack_10);
        uStack_4 = 0xffffffff;
        break;
      case 4:
        puStack_10 = (undefined4 *)Ordinal_401(0x78,s_C__lomse_source_storm_h_00555130,0x3ef,0);
        uStack_4 = 4;
        if (puStack_10 == (undefined4 *)0x0) goto LAB_004f7606;
        this_00 = FUN_004ef6f0(puStack_10);
        uStack_4 = 0xffffffff;
        break;
      default:
        FUN_005047d0(s_Unrecognized_sprite_type_0055b550);
        break;
      case 7:
        this_00 = FUN_0047cbd0();
        break;
      case 8:
        puStack_10 = (undefined4 *)Ordinal_401(0x58,s_C__lomse_source_storm_h_00555130,0x3ef,0);
        uStack_4 = 5;
        if (puStack_10 == (undefined4 *)0x0) goto LAB_004f7606;
        this_00 = FUN_004ba150(puStack_10);
        uStack_4 = 0xffffffff;
        break;
      case 9:
        puStack_10 = (undefined4 *)Ordinal_401(0x148,s_C__lomse_source_storm_h_00555130,0x3ef,0);
        uStack_4 = 6;
        if (puStack_10 == (undefined4 *)0x0) goto LAB_004f7606;
        this_00 = FUN_004acf00(puStack_10);
        uStack_4 = 0xffffffff;
      }
      this_00[0x10] = (int)local_14;
      (/*IC:004f762b*/**(code **)(*this_00 + 0x28))(this_00,a1);
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < param_2);
  }
  if ((char)DAT_005787c8 != '\0') {
    FUN_004d05e0(DAT_005a7b78,DAT_005787c8,DAT_005787cc);
  }
  ExceptionList = local_c;
  return 1;
}


