
undefined4 __thiscall FUN_0043d0a0(void *this,int *param_1)

{
  int *piVar1;
  undefined4 *this_00;
  int local_14;
  undefined4 *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005498ab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004f6b00(this,param_1);
  FUN_005397f0((char *)&param_1,4,1,piVar1);
  FUN_005397f0((char *)((int)this + 0x4c),(uint)param_1,1,piVar1);
  FUN_005397f0((char *)((int)this + 0x90),4,1,piVar1);
  if (0x3a < DAT_005aa12c) {
    FUN_005397f0((char *)&local_14,4,1,piVar1);
    if (local_14 != 0) {
      puStack_10 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
      uStack_4 = 0;
      if (puStack_10 == (undefined4 *)0x0) {
        this_00 = (undefined4 *)0x0;
      }
      else {
        this_00 = FUN_00411610(puStack_10);
      }
      uStack_4 = 0xffffffff;
      *(undefined4 **)((int)this + 0x48) = this_00;
      FUN_004122a0(this_00,piVar1);
    }
  }
  if (0x59 < DAT_005aa12c) {
    FUN_005397f0((char *)((int)this + 0x44),4,1,piVar1);
  }
  ExceptionList = pvStack_c;
  return 1;
}


