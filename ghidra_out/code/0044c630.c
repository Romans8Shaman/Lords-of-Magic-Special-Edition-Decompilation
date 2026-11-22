
undefined4 __thiscall FUN_0044c630(void *this,uint param_1)

{
  int *a1;
  undefined4 *puVar1;
  int *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00549a4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CreateDirectoryA(s_custldr_005572e4,(LPSECURITY_ATTRIBUTES)0x0);
  FUN_0053a090(&DAT_005d22f0,s_custldr__s_005572d8,param_1);
  a1 = (int *)FUN_00539610(&DAT_005d22f0,&DAT_005572ec);
  if (a1 == (int *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  FUN_005397f0((char *)((int)this + 0x58),0x2a0,1,a1);
  FUN_005397f0((char *)((int)this + 0x2f8),0x78,1,a1);
  FUN_005397f0((char *)((int)this + 0x40),4,1,a1);
  FUN_005397f0((char *)((int)this + 0x44),4,1,a1);
  FUN_005397f0((char *)((int)this + 0x38),4,1,a1);
  DAT_005aa12c = DAT_0055b1b0;
  puVar1 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  uStack_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = FUN_00411610(puVar1);
  }
  *(int **)this = this_00;
  uStack_4 = 0xffffffff;
  (/*IC:0044c72e*/**(code **)(*this_00 + 0x24))(this_00,a1);
  if (0x66 < DAT_0055b1b0) {
    FUN_005397f0((char *)((int)this + 0x54),4,1,a1);
    FUN_005397f0((char *)((int)this + 0x4c),4,1,a1);
    FUN_005397f0((char *)((int)this + 0x50),4,1,a1);
    FUN_005397f0((char *)((int)this + 0x48),4,1,a1);
  }
  if (0x6c < DAT_0055b1b0) {
    FUN_005397f0((char *)&DAT_005af0f4,4,1,a1);
  }
  FUN_005394d0(a1);
  ExceptionList = local_c;
  return 1;
}


