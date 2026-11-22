
undefined4 __thiscall FUN_00489260(void *this,int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *this_00;
  int iVar4;
  undefined4 *this_01;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 *puStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054a88d;
  local_c = ExceptionList;
  if (param_1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    ExceptionList = &local_c;
    *(undefined4 *)((int)this + 4) = 1;
    FUN_005397f0((char *)&local_18,4,1,param_1);
    local_1c = 0;
    if (0 < local_18) {
      do {
        this_01 = (undefined4 *)0x0;
        FUN_005397f0((char *)&local_14,4,1,param_1);
        switch(local_14) {
        case 0:
          puStack_10 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 0;
          if (puStack_10 == (undefined4 *)0x0) {
LAB_00489455:
            this_00 = (undefined4 *)0x0;
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
            this_00 = (undefined4 *)0x0;
            this_01 = (undefined4 *)0x0;
          }
          else {
            this_01 = FUN_0050c0b0(puStack_10);
            uStack_4 = 0xffffffff;
            this_00 = this_01;
          }
          goto LAB_00489461;
        case 2:
          puStack_10 = (undefined4 *)Ordinal_401(0x94,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 2;
          if (puStack_10 == (undefined4 *)0x0) goto LAB_00489455;
          this_00 = FUN_0043b930(puStack_10);
          break;
        case 3:
          puStack_10 = (undefined4 *)Ordinal_401(0x34c,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 3;
          if (puStack_10 == (undefined4 *)0x0) goto LAB_00489455;
          this_00 = FUN_0044e850(puStack_10);
          break;
        case 4:
          puStack_10 = (undefined4 *)Ordinal_401(0x78,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 4;
          if (puStack_10 == (undefined4 *)0x0) goto LAB_00489455;
          this_00 = FUN_004ef6f0(puStack_10);
          break;
        default:
          FUN_005047d0(s_Unrecognized_sprite_type_0055b550);
          *(undefined4 *)((int)this + 4) = 0;
          ExceptionList = local_c;
          return 0;
        case 7:
          this_00 = FUN_0047cbd0();
          goto LAB_0048945f;
        case 8:
          puStack_10 = (undefined4 *)Ordinal_401(0x58,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 5;
          if (puStack_10 == (undefined4 *)0x0) goto LAB_00489455;
          this_00 = FUN_004ba150(puStack_10);
          break;
        case 9:
          puStack_10 = (undefined4 *)Ordinal_401(0x148,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 6;
          if (puStack_10 == (undefined4 *)0x0) goto LAB_00489455;
          this_00 = FUN_004acf00(puStack_10);
        }
        uStack_4 = 0xffffffff;
LAB_0048945f:
LAB_00489461:
        if ((this_00 != (undefined4 *)0x0) && (this_01 != (undefined4 *)0x0)) {
          this_00[0x10] = this;
          FUN_0050da70(this_01,param_1);
          pvVar2 = DAT_005a7b78;
          uVar3 = this_01[0x12];
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar2);
            *(undefined4 *)((int)pvVar2 + 0x90) = 0;
            *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
          }
          else {
            iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
            iVar1 = *(int *)((int)pvVar2 + 0x50);
            *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
            *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = uVar3;
          }
          FUN_004d05e0(DAT_005a7b78,param_2,param_3);
          (/*IC:004894d5*/**(code **)*this_00)(this_00,1);
        }
        local_1c = local_1c + 1;
      } while (local_1c < local_18);
    }
    uVar3 = 1;
    *(undefined4 *)((int)this + 4) = 0;
  }
  ExceptionList = local_c;
  return uVar3;
}


