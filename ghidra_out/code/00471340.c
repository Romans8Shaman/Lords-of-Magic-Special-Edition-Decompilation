
void __thiscall FUN_00471340(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  int local_30;
  int local_2c [5];
  uint local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549eb0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x20) = 0;
  if (*(int **)((int)this + 0x24) != (int *)0x0) {
    FUN_004950c0(local_2c,*(int **)((int)this + 0x24));
    iVar1 = (param_3 - param_1) + 1;
    iVar2 = (param_4 - param_2) + 1;
    *(int *)((int)this + 0x28) = param_1;
    *(int *)((int)this + 0x2c) = param_2;
    *(int *)((int)this + 0x30) = iVar1;
    *(int *)((int)this + 0x34) = iVar2;
    if (param_1 < 0) {
      *(undefined4 *)((int)this + 0x28) = 0;
      *(int *)((int)this + 0x30) = param_1 + iVar1;
    }
    if (param_2 < 0) {
      *(undefined4 *)((int)this + 0x2c) = 0;
      *(int *)((int)this + 0x34) = param_2 + iVar2;
    }
    local_30 = *(int *)((int)this + 0x34);
    local_34 = *(uint *)((int)this + 0x30);
    local_38 = *(undefined4 *)((int)this + 0x2c);
    local_3c = *(undefined4 *)((int)this + 0x28);
    DAT_0058364c = DAT_0058364c + 0x14;
    local_40 = local_2c;
    local_4 = 1;
    FUN_00495a90((int *)&local_40);
    *(uint *)((int)this + 0x30) = local_34;
    *(int *)((int)this + 0x34) = local_30;
    if ((0 < (int)local_34) && (0 < local_30)) {
      if ((*(int *)((int)this + 4) < (int)local_34) || (*(int *)((int)this + 8) < local_30)) {
        FUN_004952c0(this,local_34,local_30,local_18 >> 2 & 1);
      }
      if (*(int *)this != 0) {
        FUN_00495db0(this,(int *)&local_40,0,0);
        *(undefined4 *)((int)this + 0x20) = 1;
      }
    }
    DAT_0058364c = DAT_0058364c + -0x14;
    DAT_00583648 = DAT_00583648 + -0x20;
    local_4 = 0xffffffff;
    FUN_00495590(local_2c);
  }
  ExceptionList = local_c;
  return;
}


