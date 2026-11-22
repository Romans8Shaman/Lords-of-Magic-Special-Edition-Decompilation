
void __thiscall FUN_00404ae0(void *this,int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  int iStack_8;
  undefined4 *local_4;
  
  iVar3 = param_2;
  bVar2 = false;
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 1;
  }
  if (param_2 == 0) {
    return;
  }
  local_4 = this;
  iVar4 = FUN_00504f00(0,100);
  if (0x32 < iVar4) {
    return;
  }
  *(byte *)(iVar3 + 0x78) = *(byte *)(iVar3 + 0x78) | 4;
  iVar4 = FUN_00525fc0((int *)(iVar3 + 0xc4));
  if (iVar4 < 0) {
    if ((*(int *)this == 0) || (*(int *)this == 1)) {
LAB_00404c2a:
      bVar2 = true;
    }
  }
  else {
    iVar5 = *(int *)this;
    if (iVar5 != 0x11) {
      if (((iVar5 == 0) || (iVar5 == 1)) || (iVar4 == 0)) {
        bVar2 = true;
      }
      if (bVar2) goto LAB_00404c3e;
      bVar2 = false;
      if ((iVar5 == 2) && (iVar4 = FUN_004205e0(iVar3), iVar4 != 0)) {
        bVar1 = false;
        iVar4 = 0;
        do {
          iVar5 = FUN_004a8300(&DAT_005ae958,
                               *(int *)(DAT_005ae970 + (iVar4 + *(int *)(iVar3 + 0x1c) * 8) * 4),0);
          if (((iVar5 != -1) && (uVar6 = FUN_00482ac0(&DAT_005aa12c,iVar5,0), uVar6 != 0)) &&
             ((iVar5 = FUN_00407d50(uVar6), iVar5 == 0 &&
              (*(int *)(uVar6 + 0x48) != *(int *)(param_1 + 0x48))))) {
            bVar1 = true;
            iVar4 = 8;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 8);
        if (!bVar1) {
          bVar2 = true;
        }
      }
      if (bVar2) goto LAB_00404c3e;
      FUN_00522000((void *)(iVar3 + 0xc4),&param_2,&iStack_8);
      bVar2 = false;
      if ((param_2 * 100) / iStack_8 < 0x14) goto LAB_00404c2a;
    }
  }
  if (!bVar2) {
    return;
  }
LAB_00404c3e:
  iVar4 = FUN_004a8b50(&DAT_005ae958,*(int *)(iVar3 + 0x1c),*(int *)(param_1 + 0x1c));
  if (iVar4 != 8) {
    bVar10 = *(byte *)(iVar3 + 0x78);
    iVar5 = *(int *)(iVar3 + 0x1c);
    if ((bVar10 & 8) == 0) {
      iVar7 = iVar4 + -2;
      if (iVar7 < 0) {
        iVar7 = 8 - iVar7;
      }
      bVar10 = bVar10 | 8;
    }
    else {
      iVar7 = iVar4 + 2;
      if (7 < iVar7) {
        iVar7 = iVar4 + -6;
      }
      bVar10 = bVar10 & 0xf7;
    }
    *(byte *)(iVar3 + 0x78) = bVar10;
    iVar7 = *(int *)(DAT_005ae970 + (iVar7 + iVar5 * 8) * 4);
    iVar8 = FUN_004edc30(&DAT_005ae958,iVar7,*(uint *)(iVar3 + 0x54));
    if (iVar8 == 0) {
      iVar8 = 0;
      do {
        if (iVar8 != iVar4) {
          iVar7 = *(int *)(DAT_005ae970 + (iVar8 + *(int *)(iVar3 + 0x1c) * 8) * 4);
          iVar9 = FUN_004edc30(&DAT_005ae958,iVar7,*(uint *)(iVar3 + 0x54));
          if (iVar9 != 0) goto LAB_00404cde;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 8);
      iVar7 = -1;
    }
LAB_00404cde:
    if ((iVar7 != -1) && (iVar7 != iVar5)) {
      *local_4 = 0x32;
      local_4[2] = iVar7;
    }
  }
  return;
}


