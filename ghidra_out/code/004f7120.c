
undefined4 __thiscall FUN_004f7120(void *this,int *param_1,int param_2,int param_3)

{
  int *a1;
  undefined4 uVar1;
  int *this_00;
  int iVar2;
  undefined4 local_14;
  undefined4 *puStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  a1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054baad;
  local_c = ExceptionList;
  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    ExceptionList = &local_c;
    if (param_2 == 0) {
      ExceptionList = &local_c;
      FUN_004f5d20(this);
    }
    *(undefined4 *)((int)this + 4) = 1;
    FUN_005397f0((char *)&param_1,4,1,a1);
    iVar2 = 0;
    if (0 < (int)param_1) {
      do {
        FUN_005397f0((char *)&local_14,4,1,a1);
        switch(local_14) {
        case 0:
          puStack_10 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 0;
          if (puStack_10 == (undefined4 *)0x0) {
LAB_004f7308:
            this_00 = (int *)0x0;
          }
          else {
            this_00 = FUN_00411610(puStack_10);
          }
          break;
        case 1:
          puStack_10 = (undefined4 *)Ordinal_401(0x60,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 1;
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f7308;
          this_00 = FUN_0050c0b0(puStack_10);
          break;
        case 2:
          puStack_10 = (undefined4 *)Ordinal_401(0x94,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 2;
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f7308;
          this_00 = FUN_0043b930(puStack_10);
          break;
        case 3:
          puStack_10 = (undefined4 *)Ordinal_401(0x34c,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 3;
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f7308;
          this_00 = FUN_0044e850(puStack_10);
          break;
        case 4:
          puStack_10 = (undefined4 *)Ordinal_401(0x78,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 4;
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f7308;
          this_00 = FUN_004ef6f0(puStack_10);
          break;
        default:
          FUN_005047d0(s_Unrecognized_sprite_type_0055b550);
          ExceptionList = local_c;
          return 0;
        case 7:
          this_00 = FUN_0047cbd0();
          goto LAB_004f730e;
        case 8:
          puStack_10 = (undefined4 *)Ordinal_401(0x58,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 5;
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f7308;
          this_00 = FUN_004ba150(puStack_10);
          break;
        case 9:
          puStack_10 = (undefined4 *)Ordinal_401(0x148,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 6;
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f7308;
          this_00 = FUN_004acf00(puStack_10);
        }
        uStack_4 = 0xffffffff;
LAB_004f730e:
        this_00[0x10] = (int)this;
        (/*IC:004f731a*/**(code **)(*this_00 + 0x24))(this_00,a1);
        if (((byte)iVar2 & 7) == 7) {
          FUN_00487730(&DAT_005aa12c,a1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1);
    }
    if (param_2 != 0) {
      FUN_004f76b0((int)this);
    }
    if (param_3 != 0) {
      FUN_005397f0((char *)&DAT_005ccd70,0xb4,1,a1);
      FUN_005397f0((char *)&DAT_005cce24,0xb4,1,a1);
    }
    *(undefined4 *)((int)this + 4) = 0;
    FUN_004f62f0((int)this);
    uVar1 = 1;
  }
  ExceptionList = local_c;
  return uVar1;
}


