
undefined4 __thiscall FUN_004558c0(void *this,int param_1,int param_2,undefined4 param_3)

{
  void *this_00;
  int iVar1;
  int iVar2;
  void *this_01;
  int *this_02;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00549d4b;
  local_c = ExceptionList;
  this_00 = (void *)((int)this + 0x482c);
  ExceptionList = &local_c;
  iVar1 = FUN_004a51c0(this_00,param_1,param_2);
  iVar2 = FUN_004a8300(this_00,iVar1,1);
  if (iVar2 == -1) {
    this_02 = (int *)0x0;
    this_01 = (void *)Ordinal_401(0x60,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    uStack_4 = 0;
    if (this_01 != (void *)0x0) {
      this_02 = FUN_0050c060(this_01,param_3);
    }
    uStack_4 = 0xffffffff;
    iVar1 = FUN_004a7d50(this_00,this_02,iVar1);
    if (iVar1 == -1) {
      if (this_02 != (int *)0x0) {
        (/*IC:00455951*/**(code **)*this_02)(this_02,1);
      }
      OutputDebugStringA(s_AddTree_failed_005575b4);
      ExceptionList = local_c;
      return 0;
    }
    (/*IC:00455966*/**(code **)(*this_02 + 0x2c))(this_02);
    iVar1 = FUN_004f6270((int)this + 0x4848);
    if (iVar1 == 0) {
      FUN_004f62f0((int)this + 0x4848);
    }
  }
  ExceptionList = local_c;
  return 1;
}


