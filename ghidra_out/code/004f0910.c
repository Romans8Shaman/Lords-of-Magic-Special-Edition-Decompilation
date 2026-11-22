
undefined4 __thiscall FUN_004f0910(void *this,int *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *this_00;
  int *this_01;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b8eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_004a8300((void *)((int)this + 0x482c),param_1[1],4);
  pvVar2 = (void *)FUN_004efe80((void *)((int)this + 0x4d40),*param_1);
  this_01 = (int *)0x0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    if (iVar1 == -1) {
      this_00 = (void *)Ordinal_401(0x78,s_C__lomse_source_storm_h_00555130,0x3ef,0);
      uStack_4 = 0;
      if (this_00 != (void *)0x0) {
        this_01 = FUN_004ef610(this_00,param_1);
      }
      uStack_4 = 0xffffffff;
      iVar1 = FUN_004a7d50((void *)((int)this + 0x482c),this_01,this_01[7]);
      if (iVar1 == -1) {
        if (this_01 != (int *)0x0) {
          (/*IC:004f09b5*/**(code **)*this_01)(this_01,1);
        }
        OutputDebugStringA(s_AddSpell_failed_00573208);
        ExceptionList = local_c;
        return 0;
      }
      iVar1 = FUN_004f0e70(pvVar2);
      FUN_004f5a90(this_01,iVar1);
      FUN_004f5b30(this_01,param_1[0xc]);
      (/*IC:004f09e4*/**(code **)(*this_01 + 0x1c))(this_01);
    }
    uVar3 = 1;
  }
  ExceptionList = local_c;
  return uVar3;
}


