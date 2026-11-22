
void __cdecl op_armyaddunittype(void *param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint local_70;
  void *local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  int local_58 [5];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549ac8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00526e40(local_58);
  this = param_1;
  local_4 = 0;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_60 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_5c = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_60 = 0;
  }
  iVar1 = FUN_004026a0(&local_60,&local_70,&local_64,(float *)&param_1);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      local_60 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      local_5c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      local_60 = 0;
    }
    iVar1 = FUN_004026a0(&local_60,&local_68,&local_64,(float *)&param_1);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      iVar1 = FUN_0041be40(this,&local_6c);
      if (iVar1 == 0) goto LAB_0044d373;
      FUN_00529200(local_58,local_68,0);
      if ((int)local_70 < *(int *)((int)local_6c + 0x4c)) {
        FUN_00526ea0((int)local_6c + local_70 * 0x4c + 0xc4);
        piVar3 = local_58;
        piVar4 = (int *)((int)local_6c + local_70 * 0x4c + 0xc4);
        for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar4 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        }
      }
      else {
        local_70 = FUN_004163a0(local_6c,local_58);
      }
      local_40 = 0;
      local_3c = 0;
      local_44 = 0;
      if (*(int *)((int)this + 0x54) != 0) {
        iVar1 = *(int *)((int)this + 0x50);
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(uint *)(iVar1 + 4 + iVar2 * 8) = local_70;
        goto LAB_0044d373;
      }
      *(undefined4 *)((int)this + 0x90) = 3;
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
LAB_0044d373:
  local_4 = 0xffffffff;
  thunk_FUN_00526ea0((int)local_58);
  ExceptionList = local_c;
  return;
}


