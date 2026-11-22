
void __cdecl op_addvirtualunit(void *param_1)

{
  void *this;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint local_6c;
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
  puStack_8 = &LAB_00549ae8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00526e40(local_58);
  this = param_1;
  iVar4 = 0;
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
  iVar1 = FUN_004026a0(&local_60,&local_68,&local_64,(float *)&param_1);
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
    iVar1 = FUN_004026a0(&local_60,&local_6c,&local_64,(float *)&param_1);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      FUN_00529200(local_58,local_6c,0x200);
      if (0 < (int)local_68) {
        piVar2 = &DAT_005869f8;
        do {
          if (-1 < *piVar2) {
            iVar4 = iVar4 + 1;
          }
          piVar2 = piVar2 + 1;
          local_68 = local_68 - 1;
        } while (local_68 != 0);
      }
      if (iVar4 < *(int *)((int)DAT_005869f4 + 0x4c)) {
        iVar4 = FUN_00416450(DAT_005869f4,local_58,iVar4);
      }
      else {
        iVar4 = FUN_004163a0(DAT_005869f4,local_58);
      }
      local_40 = 0;
      local_3c = 0;
      local_44 = 0;
      if (*(int *)((int)this + 0x54) != 0) {
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        iVar1 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
        *(int *)(iVar1 + 4 + iVar3 * 8) = iVar4;
        goto LAB_0044d535;
      }
      *(undefined4 *)((int)this + 0x90) = 3;
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
LAB_0044d535:
  local_4 = 0xffffffff;
  thunk_FUN_00526ea0((int)local_58);
  ExceptionList = local_c;
  return;
}


