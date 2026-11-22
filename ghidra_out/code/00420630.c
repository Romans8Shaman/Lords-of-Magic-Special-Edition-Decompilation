
void __fastcall FUN_00420630(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar6 = 0;
  iVar4 = 0;
  local_14 = 0;
  local_8 = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    piVar5 = (int *)(param_1 + 0xc4);
    do {
      uVar1 = FUN_00521e30(piVar5);
      if (uVar1 == 0) {
        local_18 = local_18 + 1;
      }
      else {
        iVar2 = FUN_00521e90(piVar5);
        iVar4 = iVar4 + iVar2;
      }
      uVar1 = FUN_00521e70(piVar5);
      if (uVar1 == 0) {
        uVar1 = FUN_00521e30(piVar5);
        if (uVar1 == 0) {
          local_10 = local_10 + 1;
        }
      }
      else {
        iVar2 = FUN_00521e90(piVar5);
        local_14 = local_14 + iVar2;
        uVar1 = FUN_00521e50(piVar5);
        if (uVar1 == 0) {
          local_c = local_c + 1;
        }
      }
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 0x13;
    } while (iVar6 < *(int *)(param_1 + 0x4c));
    local_8 = iVar4;
  }
  iVar4 = FUN_004c1c50(param_1);
  if (((iVar4 != 0) && (uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)(param_1 + 0x5b4),0), uVar1 != 0)
      ) && (iVar4 = 0, 0 < *(int *)(uVar1 + 0x4c))) {
    piVar5 = (int *)(uVar1 + 0xc4);
    do {
      uVar3 = FUN_00521e30(piVar5);
      if (uVar3 == 0) {
        local_18 = local_18 + 1;
      }
      else {
        iVar6 = FUN_00521e90(piVar5);
        local_8 = local_8 + iVar6;
      }
      uVar3 = FUN_00521e70(piVar5);
      if (uVar3 == 0) {
        uVar3 = FUN_00521e30((int *)((param_1 - uVar1) + (int)piVar5));
        if (uVar3 == 0) {
          local_10 = local_10 + 1;
        }
      }
      else {
        iVar6 = FUN_00521e90(piVar5);
        local_14 = local_14 + iVar6;
        uVar3 = FUN_00521e50(piVar5);
        if (uVar3 == 0) {
          local_c = local_c + 1;
        }
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0x13;
    } while (iVar4 < *(int *)(uVar1 + 0x4c));
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (local_18 <= local_8) {
    *(undefined4 *)(param_1 + 0x54) = 0x100000;
  }
  if (local_10 <= local_14) {
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x80000;
  }
  if (local_c == 0) {
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x40000;
  }
  return;
}


