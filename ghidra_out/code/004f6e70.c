
int * __thiscall FUN_004f6e70(void *this,int *param_1)

{
  int *this_00;
  int *piVar1;
  int *local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 *puStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054ba4d;
  local_c = ExceptionList;
  local_20 = (int *)0x0;
  if (param_1 == (int *)0x0) {
    local_20 = (int *)0x0;
  }
  else {
    ExceptionList = &local_c;
    *(undefined4 *)((int)this + 4) = 1;
    FUN_005397f0((char *)&local_18,4,1,param_1);
    local_1c = 0;
    if (0 < local_18) {
      do {
        piVar1 = (int *)0x0;
        FUN_005397f0((char *)&local_14,4,1,param_1);
        switch(local_14) {
        case 0:
          puStack_10 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 0;
          if (puStack_10 == (undefined4 *)0x0) {
LAB_004f706c:
            this_00 = (int *)0x0;
          }
          else {
            this_00 = FUN_00411610(puStack_10);
          }
          break;
        case 1:
          puStack_10 = (undefined4 *)Ordinal_401(0x60,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 1;
          if (puStack_10 == (undefined4 *)0x0) {
            uStack_4 = 0xffffffff;
            this_00 = (int *)0x0;
            piVar1 = (int *)0x0;
          }
          else {
            piVar1 = FUN_0050c0b0(puStack_10);
            uStack_4 = 0xffffffff;
            this_00 = piVar1;
          }
          goto LAB_004f7074;
        case 2:
          puStack_10 = (undefined4 *)Ordinal_401(0x94,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 2;
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f706c;
          this_00 = FUN_0043b930(puStack_10);
          break;
        case 3:
          puStack_10 = (undefined4 *)Ordinal_401(0x34c,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 3;
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f706c;
          this_00 = FUN_0044e850(puStack_10);
          break;
        case 4:
          puStack_10 = (undefined4 *)Ordinal_401(0x78,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 4;
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f706c;
          this_00 = FUN_004ef6f0(puStack_10);
          break;
        default:
          FUN_005047d0(s_Unrecognized_sprite_type_0055b550);
          *(undefined4 *)((int)this + 4) = 0;
          ExceptionList = local_c;
          return (int *)0x0;
        case 7:
          this_00 = FUN_0047cbd0();
          goto LAB_004f7072;
        case 8:
          puStack_10 = (undefined4 *)Ordinal_401(0x58,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 5;
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f706c;
          this_00 = FUN_004ba150(puStack_10);
          break;
        case 9:
          puStack_10 = (undefined4 *)Ordinal_401(0x148,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 6;
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f706c;
          this_00 = FUN_004acf00(puStack_10);
        }
        uStack_4 = 0xffffffff;
LAB_004f7072:
LAB_004f7074:
        this_00[0x10] = (int)this;
        (/*IC:004f7084*/**(code **)(*this_00 + 0x24))(this_00,param_1);
        if (((piVar1 == (int *)0x0) || (local_20 != (int *)0x0)) || (piVar1[0x15] < 0)) {
          FUN_00483be0(&DAT_005aa12c,this_00);
        }
        else {
          local_20 = piVar1;
        }
        local_1c = local_1c + 1;
      } while (local_1c < local_18);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  ExceptionList = local_c;
  return local_20;
}


