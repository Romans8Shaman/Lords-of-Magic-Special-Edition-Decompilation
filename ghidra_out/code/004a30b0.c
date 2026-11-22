
void __thiscall FUN_004a30b0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  int local_1c;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = DAT_0058525c;
  local_1c = 1;
  local_10 = 1;
  uVar1 = *(undefined2 *)
           (DAT_00584cbc + (*(int *)((int)this + 0x34) * 0x100 + *(int *)((int)this + 0x28)) * 2);
  uVar5 = param_3 - param_1 >> 0x1f;
  iVar7 = (param_3 - param_1 ^ uVar5) - uVar5;
  uVar5 = param_4 - param_2 >> 0x1f;
  iVar3 = (param_4 - param_2 ^ uVar5) - uVar5;
  iVar9 = DAT_00585248 >> 1;
  if (param_3 < param_1) {
    local_10 = -1;
  }
  if (param_4 < param_2) {
    local_1c = -1;
  }
  if (iVar3 < iVar7) {
    param_3 = iVar3 * 2 - iVar7;
    if (0 < iVar7 + 1) {
      iVar4 = iVar9 * param_2;
      local_8 = iVar7 + 1;
      local_c = iVar4;
      do {
        if (param_3 < 0) {
          iVar8 = iVar3;
        }
        else {
          iVar8 = iVar3 - iVar7;
          param_2 = param_2 + local_1c;
          iVar4 = iVar4 + iVar9 * local_1c;
          local_c = iVar4;
        }
        param_3 = param_3 + iVar8 * 2;
        param_1 = param_1 + local_10;
        if (((0 < param_1) && (param_1 < -*(int *)((int)this + 0x30) + 0x27f)) &&
           ((0 < param_2 && (param_2 < -*(int *)((int)this + 0x30) + 0x17f)))) {
          *(undefined2 *)(iVar2 + (param_1 + iVar4) * 2) = uVar1;
          iVar8 = 1;
          if (1 < *(int *)((int)this + 0x30)) {
            puVar6 = (undefined2 *)(iVar2 + 2 + (param_1 + iVar4) * 2);
            puVar10 = (undefined2 *)(iVar2 + (iVar9 + param_1 + iVar4) * 2);
            do {
              *puVar6 = uVar1;
              *puVar10 = uVar1;
              iVar8 = iVar8 + 1;
              puVar6 = puVar6 + 1;
              puVar10 = puVar10 + iVar9;
            } while (iVar8 < *(int *)((int)this + 0x30));
            iVar4 = local_c;
          }
        }
        local_8 = local_8 + -1;
      } while (local_8 != 0);
      return;
    }
  }
  else {
    param_3 = iVar7 * 2 - iVar3;
    if (0 < iVar3 + 1) {
      iVar4 = iVar9 * param_2;
      local_8 = iVar3 + 1;
      do {
        iVar8 = iVar7;
        if (-1 < param_3) {
          param_1 = param_1 + local_10;
          iVar8 = iVar7 - iVar3;
        }
        param_3 = param_3 + iVar8 * 2;
        param_2 = param_2 + local_1c;
        iVar4 = iVar4 + iVar9 * local_1c;
        if ((((0 < param_1) && (param_1 < -*(int *)((int)this + 0x30) + 0x27f)) && (0 < param_2)) &&
           (param_2 < -*(int *)((int)this + 0x30) + 0x17f)) {
          iVar8 = 1;
          *(undefined2 *)(iVar2 + (param_1 + iVar4) * 2) = uVar1;
          if (1 < *(int *)((int)this + 0x30)) {
            puVar6 = (undefined2 *)(iVar2 + 2 + (param_1 + iVar4) * 2);
            puVar10 = (undefined2 *)(iVar2 + (iVar9 + param_1 + iVar4) * 2);
            do {
              *puVar6 = uVar1;
              *puVar10 = uVar1;
              iVar8 = iVar8 + 1;
              puVar6 = puVar6 + 1;
              puVar10 = puVar10 + iVar9;
            } while (iVar8 < *(int *)((int)this + 0x30));
          }
        }
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  return;
}


