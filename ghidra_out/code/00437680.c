
uint __thiscall FUN_00437680(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = -1;
  iVar1 = FUN_00416a30(param_1);
  if ((iVar1 != 0) && ((*(uint *)((int)this + 0x50) & 0x2100) == 0)) {
    return 0;
  }
  if ((*(uint *)((int)this + 0x50) & 0x40000) != 0) {
    uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x48),2);
    if (uVar2 == 0) {
      local_c = -1;
    }
    else {
      local_c = (int)*(short *)(uVar2 + 0x56);
    }
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    piVar5 = (int *)(param_1 + 0xc4);
    do {
      uVar2 = 1 << ((byte)iVar1 & 0x1f);
      if ((*(uint *)((int)this + 0x50) & 0x100) == 0) {
        uVar3 = FUN_00525f10((int)piVar5);
        if (uVar3 != 0) {
          uVar2 = 0;
        }
      }
      if (-1 < local_c) {
        uVar3 = FUN_00529180(piVar5);
        if (uVar3 != 0) {
          iVar4 = FUN_004e8bc0(piVar5);
          if (iVar4 == local_c) goto LAB_0043773d;
        }
        uVar2 = 0;
      }
LAB_0043773d:
      piVar5 = piVar5 + 0x13;
      local_8 = local_8 | uVar2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x4c));
  }
  return local_8;
}


