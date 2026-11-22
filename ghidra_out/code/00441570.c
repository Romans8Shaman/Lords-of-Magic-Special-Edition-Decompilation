
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00441570(void *this,int param_1,uint param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_58 [5];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  if (((param_1 < 0) || (DAT_005cd2f0 <= param_1)) || (DAT_005cd2f4 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_005cd2f4 + param_1 * 1000;
  }
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_00526e40(local_58);
    local_4 = 0;
    iVar2 = FUN_00529200(local_58,param_1,param_2);
    if (iVar2 == 0) {
      local_4 = 0xffffffff;
      thunk_FUN_00526ea0((int)local_58);
      uVar1 = 0;
    }
    else {
      local_34 = param_2;
      FUN_00411760(0x5ad66c);
      _DAT_005ad694 = 0xfffffff4;
      puVar3 = local_58;
      puVar4 = &DAT_005ad730;
      for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      _DAT_005ad6b8 = 1;
      _DAT_005ad6bc = 0;
      _DAT_005ad6b4 = (/*IC:0044164d*/**(code **)(*(int *)this + 0x3c))(this);
      _DAT_005ad688 = *(undefined4 *)((int)this + 0x1c);
      FUN_00522350(0xfffffff4,0,param_3);
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_44 = 0;
      FUN_00411760(0x5ad66c);
      iVar2 = 5;
      do {
        *param_3 = -*param_3;
        iVar2 = iVar2 + -1;
        param_3 = param_3 + 1;
      } while (iVar2 != 0);
      local_4 = 0xffffffff;
      thunk_FUN_00526ea0((int)local_58);
      uVar1 = 1;
    }
  }
  ExceptionList = local_c;
  return uVar1;
}


