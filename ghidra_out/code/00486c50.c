
int __thiscall FUN_00486c50(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054a808;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00486b40(&local_18);
  iVar2 = *(int *)((int)this + 4);
  if (*(int *)this <= iVar2) {
    local_4 = 0xffffffff;
    op_sunlight();
    ExceptionList = local_c;
    return -1;
  }
  if (*(int *)((int)this + 8) == 0) {
    local_4 = 0xffffffff;
    op_sunlight();
    ExceptionList = local_c;
    return -1;
  }
  local_18 = param_1;
  local_14 = 1;
  puVar1 = (undefined4 *)(*(int *)((int)this + 8) + iVar2 * 0xc);
  local_4 = 0xffffffff;
  *puVar1 = param_1;
  puVar1[1] = 1;
  puVar1[2] = local_10;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  op_sunlight();
  ExceptionList = local_c;
  return iVar2;
}


