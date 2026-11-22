
void __thiscall FUN_004564b0(void *this,int param_1,int param_2,int param_3)

{
  void *this_00;
  int *this_01;
  int iVar1;
  int iVar2;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00549d73;
  local_c = ExceptionList;
  if ((((-1 < param_1) && (param_1 < *(int *)((int)this + 0x6c))) && (-1 < param_2)) &&
     ((param_2 < *(int *)((int)this + 0x70) && (-1 < DAT_005ae920)))) {
    ExceptionList = &local_c;
    this_00 = (void *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    uStack_4 = 0;
    if (this_00 == (void *)0x0) {
      this_01 = (int *)0x0;
    }
    else {
      this_01 = FUN_004116b0(this_00,DAT_005aadb0);
    }
    uStack_4 = 0xffffffff;
    if (this_01 != (int *)0x0) {
      FUN_00526e40(&iStack_58);
      uStack_4 = 1;
      iVar1 = FUN_00455660(&DAT_005ae8e8,0);
      if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
        iVar2 = 0;
      }
      else {
        iVar2 = DAT_005cd2f4 + iVar1 * 1000;
      }
      if (iVar2 != 0) {
        iStack_54 = DAT_005ae920;
        uStack_4c = 0;
        uStack_48 = 0;
        iStack_58 = iVar1;
        FUN_004163a0(this_01,&iStack_58);
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_44 = 0;
        this_01[0x11] = param_3;
        iVar1 = FUN_004a51c0(this,param_1,param_2);
        this_01[7] = iVar1;
        FUN_004a7d50(this,this_01,iVar1);
        FUN_00455890(&DAT_005ae8e8,param_1,param_2,(char)param_3,this_01[10],this_01[0x12]);
        FUN_00455290(&DAT_005ae8e8,0,this_01[10]);
        FUN_0041efa0(this_01,0xf);
        DAT_005ae935 = 7;
        (/*IC:0045661f*/**(code **)(*this_01 + 0x2c))(this_01);
        FUN_00456e70(this,param_1,param_2,param_3);
        FUN_00456670(this,param_1,param_2,param_3,0);
      }
      uStack_4 = 0xffffffff;
      thunk_FUN_00526ea0((int)&iStack_58);
    }
  }
  ExceptionList = local_c;
  return;
}


