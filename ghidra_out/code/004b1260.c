
undefined4 __thiscall FUN_004b1260(void *this,int *param_1,int param_2,int param_3)

{
  undefined4 *this_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_5e8 [375];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054b2bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = FUN_00485080(&DAT_005aa12c,*param_1,0x2f);
  uVar2 = 0;
  if (this_00 != (undefined4 *)0x0) {
    FUN_00411610(local_5e8);
    local_4 = 0;
    FUN_00415170(this_00,local_5e8,param_1[2]);
    iVar1 = FUN_004a51c0(this,param_2,param_3);
    iVar1 = FUN_00420890(local_5e8,iVar1);
    if (iVar1 == 0) {
      FUN_004117f0(local_5e8,0);
      local_4 = 0xffffffff;
      FUN_00411910(local_5e8);
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_004b1490(this,local_5e8,(int)param_1);
      if (iVar1 == 0) {
        FUN_004117f0(local_5e8,0);
        local_4 = 0xffffffff;
        FUN_00411910(local_5e8);
        uVar2 = 0;
      }
      else {
        iVar1 = *(int *)((int)this + 0xc0);
        iVar3 = 0;
        param_1[3] = iVar1;
        if (0 < iVar1) {
          do {
            iVar1 = FUN_004b13a0(this,iVar3);
            *(char *)(iVar3 + 0x24 + (int)param_1) = (char)iVar1;
            iVar3 = iVar3 + 1;
          } while (iVar3 < param_1[3]);
        }
        FUN_004117f0(local_5e8,0);
        local_4 = 0xffffffff;
        FUN_00411910(local_5e8);
        uVar2 = 1;
      }
    }
  }
  ExceptionList = local_c;
  return uVar2;
}


