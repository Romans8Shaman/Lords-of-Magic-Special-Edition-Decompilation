
int __thiscall FUN_004a7a50(void *this,int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar8 = 99999;
  local_18 = -1;
  uVar2 = FUN_004a4c50(this,param_1);
  if (((((param_2 & uVar2) != 0) && (iVar3 = FUN_004edbb0(this,param_1), iVar3 == 0)) &&
      (*(int *)(*(int *)((int)this + 100) + param_1 * 8) == 0)) &&
     ((*(uint *)(*(int *)((int)this + 100) + param_1 * 8 + 4) & 0x200) == 0)) {
    return param_1;
  }
  bVar1 = false;
  local_c = param_1 / *(int *)((int)this + 0x70);
  iVar3 = param_1 % *(int *)((int)this + 0x6c) - local_c;
  local_8 = local_c + 1;
  local_c = local_c + -1;
  do {
    local_20 = iVar3 + local_c;
    local_1c = iVar3 + local_8;
    if (local_20 < 0) {
      local_20 = 0;
    }
    iVar4 = *(int *)((int)this + 0x6c) + -1;
    if (iVar4 <= local_1c) {
      local_1c = iVar4;
    }
    local_10 = local_c;
    if (local_c < 0) {
      local_10 = 0;
    }
    iVar5 = *(int *)((int)this + 0x70) + -1;
    iVar4 = local_20;
    local_14 = local_8;
    if (iVar5 <= local_8) {
      local_14 = iVar5;
    }
    for (; iVar5 = local_10, iVar4 <= local_1c; iVar4 = iVar4 + 1) {
      iVar5 = local_10 * *(int *)((int)this + 0x6c) + iVar4;
      if (((*(int *)(*(int *)((int)this + 100) + iVar5 * 8) == 0) &&
          (uVar2 = FUN_004a4c50(this,iVar5), (param_2 & uVar2) != 0)) &&
         ((iVar6 = FUN_004a8a50(this,param_1,iVar5), iVar6 < iVar8 &&
          ((iVar7 = FUN_004edbb0(this,iVar5), iVar7 == 0 &&
           ((*(uint *)(*(int *)((int)this + 100) + 4 + iVar5 * 8) & 0x200) == 0)))))) {
        bVar1 = true;
        iVar8 = iVar6;
        local_18 = iVar5;
      }
      iVar5 = local_14 * *(int *)((int)this + 0x6c) + iVar4;
      if ((((*(int *)(*(int *)((int)this + 100) + iVar5 * 8) == 0) &&
           (uVar2 = FUN_004a4c50(this,iVar5), (param_2 & uVar2) != 0)) &&
          (iVar6 = FUN_004a8a50(this,param_1,iVar5), iVar6 < iVar8)) &&
         ((iVar7 = FUN_004edbb0(this,iVar5), iVar7 == 0 &&
          ((*(uint *)(*(int *)((int)this + 100) + 4 + iVar5 * 8) & 0x200) == 0)))) {
        bVar1 = true;
        iVar8 = iVar6;
        local_18 = iVar5;
      }
    }
    for (; iVar5 <= local_14; iVar5 = iVar5 + 1) {
      iVar4 = iVar5 * *(int *)((int)this + 0x6c) + local_20;
      if (((*(int *)(*(int *)((int)this + 100) + iVar4 * 8) == 0) &&
          (uVar2 = FUN_004a4c50(this,iVar4), (param_2 & uVar2) != 0)) &&
         ((iVar6 = FUN_004a8a50(this,param_1,iVar4), iVar6 < iVar8 &&
          ((iVar7 = FUN_004edbb0(this,iVar4), iVar7 == 0 &&
           ((*(uint *)(*(int *)((int)this + 100) + 4 + iVar4 * 8) & 0x200) == 0)))))) {
        bVar1 = true;
        iVar8 = iVar6;
        local_18 = iVar4;
      }
      iVar4 = iVar5 * *(int *)((int)this + 0x6c) + local_1c;
      if ((((*(int *)(*(int *)((int)this + 100) + iVar4 * 8) == 0) &&
           (uVar2 = FUN_004a4c50(this,iVar4), (param_2 & uVar2) != 0)) &&
          (iVar6 = FUN_004a8a50(this,param_1,iVar4), iVar6 < iVar8)) &&
         ((iVar7 = FUN_004edbb0(this,iVar4), iVar7 == 0 &&
          ((*(uint *)(*(int *)((int)this + 100) + 4 + iVar4 * 8) & 0x200) == 0)))) {
        bVar1 = true;
        iVar8 = iVar6;
        local_18 = iVar4;
      }
    }
    local_c = local_c + -1;
    local_8 = local_8 + 1;
  } while ((!bVar1) &&
          (((local_20 != 0 || (local_10 != 0)) ||
           ((local_1c != *(int *)((int)this + 0x6c) + -1 ||
            (local_14 != *(int *)((int)this + 0x70) + -1))))));
  if (local_18 == -1) {
    local_18 = param_1;
  }
  return local_18;
}


