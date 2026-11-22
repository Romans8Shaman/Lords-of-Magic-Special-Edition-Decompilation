
undefined4 __thiscall FUN_0045c5e0(void *this,int unused_stack_8,int param_p3)

{
  int iVar1;
  int *this_00;
  int *this_01;
  uint uVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  undefined4 uVar6;
  int aiStack_108 [5];
  int iStack_f3;
  undefined4 uStack_ef;
  int iStack_eb;
  undefined4 uStack_e7;
  int iStack_e3;
  int iStack_df;
  int iStack_db;
  uint uStack_d7;
  
  iVar1 = FUN_0048c420(0x31);
  if (iVar1 == 0) {
    this_00 = FUN_00485080(this,unused_stack_8,0x2f);
    this_01 = FUN_00485080(this,param_p3,0x2f);
    uVar2 = FUN_00482ac0(this,param_p3,1);
    uVar3 = (uint)(this_01 != (int *)0x0);
    if ((uVar3 == 0) && (uVar2 != 0)) {
      uVar3 = FUN_0050cc20(uVar2);
    }
    if ((this_00 != (int *)0x0) && (uVar3 != 0)) {
      iVar1 = (/*IC:0045c66b*/**(code **)(*this_00 + 0x3c))(this_00);
      if ((iVar1 < 0) || (0xf < iVar1)) {
        iVar1 = 0;
      }
      else {
        iVar1 = (int)this + iVar1 * 0x1d84 + 0x5068;
      }
      if (iVar1 != 0) {
        iVar1 = *(int *)(iVar1 + 0x15dc);
        if (DAT_005d1e84 == 0) {
          iVar4 = 1;
        }
        else {
          iVar4 = FUN_004b7dd0(DAT_005d1e84);
        }
        if (iVar1 == iVar4) {
          FUN_0048cc70(aiStack_108,0x31);
          iStack_f3 = unused_stack_8;
          iStack_eb = param_p3;
          uStack_ef = (/*IC:0045c6e3*/**(code **)(*this_00 + 0x3c))(this_00);
          if (this_01 == (int *)0x0) {
            uStack_e7 = 0xf;
          }
          else {
            uStack_e7 = (/*IC:0045c6f2*/**(code **)(*this_01 + 0x3c))(this_01);
          }
          iStack_e3 = this_00[7];
          if (this_01 == (int *)0x0) {
            iStack_df = *(int *)(uVar2 + 0x1c);
          }
          else {
            iStack_df = this_01[7];
          }
          if (DAT_005d2ca4 == 0) {
            DVar5 = GetTickCount();
            iStack_db = DVar5 + DAT_00573428;
          }
          else {
            iStack_db = DAT_005d2ca4 + DAT_00573428;
          }
          uStack_d7 = 0;
          iVar1 = FUN_0042f4d0((void *)((int)this + 0x3b24),DAT_005a7b78,unused_stack_8,param_p3);
          if (iVar1 != 0) {
            uStack_d7 = uStack_d7 | 1;
          }
          uVar6 = FUN_00489b70(&DAT_00584ae8,aiStack_108);
          return uVar6;
        }
      }
    }
  }
  return 0;
}


