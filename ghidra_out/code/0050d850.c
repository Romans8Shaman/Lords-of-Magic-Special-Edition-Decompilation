
undefined4 __thiscall FUN_0050d850(void *this,int param_1,int param_2,undefined4 param_3)

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
  puStack_8 = &LAB_0054c2cb;
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
        (/*IC:0050d8e1*/**(code **)*this_02)(this_02,1);
      }
      OutputDebugStringA(s_AddTree_failed_005575b4);
      ExceptionList = local_c;
      return 0;
    }
    FUN_0050d770((int)this_02);
    (/*IC:0050d8fd*/**(code **)(*this_02 + 0x2c))(this_02);
    FUN_004f62f0((int)this + 0x4848);
  }
  ExceptionList = local_c;
  return 1;
}


