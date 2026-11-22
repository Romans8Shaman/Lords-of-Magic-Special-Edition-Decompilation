
void __thiscall FUN_00497770(void *this,void *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054ad58;
  local_c = ExceptionList;
  if (*(int *)((int)this + 8) != 0) {
    DAT_00583650 = DAT_00583650 + 0x10;
    local_14 = *(undefined4 *)this;
    local_10 = *(undefined4 *)((int)this + 4);
    local_1c = param_2;
    local_4 = 0;
    local_18 = param_3;
    if ((*(uint *)((int)this + 0x1c) & 4) == 0) {
      ExceptionList = &local_c;
      if ((*(uint *)((int)this + 0x1c) & 8) != 0) {
        iVar1 = *(int *)((int)this + 0x20);
        ExceptionList = &local_c;
        iVar2 = FUN_00497940(this);
        if (iVar1 < iVar2) {
          if (*(int *)((int)this + 0x24) == 0) {
            if (*(int *)((int)this + 0x34) < 1) {
              local_18 = local_18 +
                         (*(int *)((int)this + 0x30) - *(int *)(*(int *)((int)this + 0x14) + 8));
              if (*(int *)((int)this + 0x2c) == 0) {
                *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -1;
                *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x28);
              }
              else {
                *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + -1;
              }
              if (*(int *)((int)this + 0x30) < 0) {
                local_18 = param_3;
                *(int *)((int)this + 0x30) = *(int *)(*(int *)((int)this + 0x14) + 8) + -1;
                *(int *)((int)this + 0x20) = iVar1 + 1;
              }
            }
            else if (*(int *)((int)this + 0x2c) == 0) {
              local_18 = *(int *)((int)this + 0x34) + -1;
              *(int *)((int)this + 0x34) = local_18;
              *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x28);
            }
            else {
              *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + -1;
              local_18 = *(int *)((int)this + 0x34);
            }
          }
          else {
            *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + -1;
          }
        }
      }
    }
    else {
      ExceptionList = &local_c;
      iVar1 = FUN_00497940(this);
      iVar2 = FUN_00498110((int)this);
      iVar1 = (iVar2 - iVar1) * *(int *)(*(int *)((int)this + 0x14) + 8);
      if (0 < iVar1) {
        local_18 = local_18 + (iVar1 >> 1);
      }
    }
    FUN_0047f230(*(void **)((int)this + 0x14),param_1,*(char **)((int)this + 8),&local_1c,
                 *(int *)((int)this + 0x18),*(int *)((int)this + 0xc),*(int *)((int)this + 0x20));
    DAT_00583650 = DAT_00583650 + -0x10;
  }
  ExceptionList = local_c;
  return;
}


