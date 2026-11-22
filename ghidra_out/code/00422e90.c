
undefined4 __thiscall FUN_00422e90(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_58 [5];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005494c8;
  local_c = ExceptionList;
  if ((((param_1 < 0) || (param_2 < 0)) || (param_1 == param_2)) ||
     ((*(int *)((int)this + 0x4c) <= param_1 || (*(int *)((int)this + 0x4c) <= param_2)))) {
    uVar1 = 0;
  }
  else {
    puVar5 = (undefined4 *)((int)this + param_1 * 0x4c + 0xc4);
    puVar3 = puVar5;
    puVar4 = local_58;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_4 = 0;
    puVar3 = (undefined4 *)((int)this + param_2 * 0x4c + 0xc4);
    puVar4 = puVar3;
    ExceptionList = &local_c;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar5 = local_58;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    local_40 = 0;
    local_3c = 0;
    local_44 = 0;
    (/*IC:00422f36*/**(code **)(*(int *)this + 0x2c))(this);
    if ((*(int *)((int)this + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
       ((*(byte *)((int)this + 0x30) & 0x20) != 0)) {
      FUN_004d09a0(DAT_005a7b78,DAT_005a7bf4,DAT_005a7bf8,0);
    }
    local_4 = 0xffffffff;
    thunk_FUN_00526ea0((int)local_58);
    uVar1 = 1;
  }
  ExceptionList = local_c;
  return uVar1;
}


