
void __cdecl op_gethotkey(void *param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054adf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049a500(&local_18);
  this = param_1;
  local_4 = 0;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_20 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_1c = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_20 = 0;
  }
  iVar1 = FUN_004026a0(&local_20,&local_2c,&local_24,(float *)&param_1);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      local_20 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      local_1c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      local_20 = 0;
    }
    iVar1 = FUN_004026a0(&local_20,&local_28,&local_24,(float *)&param_1);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      if (local_28 == 0) {
        local_2c = local_2c + 1000;
      }
      iVar1 = FUN_0049a410(&DAT_00584cc4,&local_18,local_2c);
      if (iVar1 == 0) {
        if (*(int *)((int)this + 0x54) != 0) {
          iVar2 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar2;
          iVar1 = *(int *)((int)this + 0x50);
          *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
          *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
          goto LAB_0049aa5d;
        }
      }
      else if (*(int *)((int)this + 0x54) != 0) {
        iVar1 = *(int *)((int)this + 0x50);
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        *(undefined4 *)(iVar1 + iVar2 * 8) = local_14;
        *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = local_10;
        goto LAB_0049aa5d;
      }
      *(undefined4 *)((int)this + 0x90) = 3;
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
LAB_0049aa5d:
  local_4 = 0xffffffff;
  op_sunlight();
  ExceptionList = local_c;
  return;
}


