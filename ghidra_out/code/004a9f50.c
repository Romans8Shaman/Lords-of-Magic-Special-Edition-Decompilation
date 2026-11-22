
void __fastcall FUN_004a9f50(void *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint local_18;
  
  iVar9 = DAT_005af144;
  iVar11 = 0;
  bVar1 = false;
  bVar2 = false;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    puVar10 = (uint *)(*(int *)((int)param_1 + 100) + 4);
    bVar1 = false;
    do {
      if ((*puVar10 & 0x400) != 0) {
        bVar1 = true;
      }
      if ((*puVar10 & 0x800) != 0) {
        bVar2 = true;
      }
      if ((bVar1) && (bVar2)) {
        return;
      }
      iVar11 = iVar11 + 1;
      puVar10 = puVar10 + 2;
    } while (iVar11 < *(int *)((int)param_1 + 0x68));
  }
  iVar11 = FUN_004154a0(0x5aa78c);
  if (iVar11 == 0) {
    iVar11 = FUN_004154a0(0x5aad68);
    local_18 = 0x40000;
    if (iVar11 != 0) goto LAB_004a9fd1;
  }
  else {
LAB_004a9fd1:
    local_18 = 0x80000;
  }
  if (DAT_00583100 != '\x01') goto LAB_004aa8f3;
  bVar3 = false;
  bVar4 = false;
  iVar11 = FUN_004154a0(0x5aa78c);
  iVar13 = 0;
  if (0 < DAT_005aa7d8) {
    piVar12 = &DAT_005aa850;
    bVar3 = false;
    do {
      FUN_00521e30(piVar12);
      uVar5 = FUN_00521e50(piVar12);
      if (uVar5 != 0) {
        bVar4 = true;
      }
      uVar5 = FUN_00521e70(piVar12);
      if (uVar5 != 0) {
        bVar3 = true;
      }
      iVar13 = iVar13 + 1;
      piVar12 = piVar12 + 0x13;
    } while (iVar13 < DAT_005aa7d8);
  }
  if ((iVar11 != 0) || ((bVar3 && (!bVar4)))) {
    local_18 = 0x80000;
    iVar11 = FUN_004a9ea0(DAT_005aa7d4,0x80000);
    if ((DAT_005aa7d0 == 0) || (DAT_005aa7d0 == 4)) {
      uVar5 = 0x80000;
      iVar13 = *(int *)((int)param_1 + 0x70) / 2;
LAB_004aa449:
      iVar7 = iVar13 + 3;
      iVar13 = iVar13 + -3;
      iVar8 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
      iVar6 = 0;
    }
    else if ((DAT_005aa7d0 == 1) || (DAT_005aa7d0 == 5)) {
      uVar5 = 0x80000;
      iVar13 = *(int *)((int)param_1 + 0x70) / 2 - iVar9;
      iVar7 = iVar13 + 3;
      iVar6 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
      iVar8 = iVar6 + 3;
    }
    else if ((DAT_005aa7d0 == 2) || (DAT_005aa7d0 == 6)) {
      iVar11 = -1;
      uVar5 = 0x80000;
      iVar6 = *(int *)((int)param_1 + 0x6c) / 2;
      iVar7 = *(int *)((int)param_1 + 0x70) / 2 - iVar9;
      iVar8 = iVar6 + 3;
      iVar13 = 0;
      iVar6 = iVar6 + -3;
    }
    else {
      if ((DAT_005aa7d0 != 3) && (DAT_005aa7d0 != 7)) goto LAB_004aa46c;
      uVar5 = 0x80000;
      iVar7 = *(int *)((int)param_1 + 0x70) / 2 + iVar9;
      iVar6 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
      iVar13 = iVar7 + -3;
      iVar8 = iVar6 + 3;
    }
LAB_004aa465:
    FUN_00468320(param_1,DAT_005aa7d4,iVar6,iVar8,iVar13,iVar7,uVar5,iVar11);
  }
  else {
    if (!bVar3) {
      if (!bVar4) {
        local_18 = 0x100000;
        if ((DAT_005aa7d0 != 0) && (DAT_005aa7d0 != 4)) {
          if ((DAT_005aa7d0 == 1) || (DAT_005aa7d0 == 5)) {
            iVar11 = -1;
            uVar5 = 0x100000;
            iVar13 = *(int *)((int)param_1 + 0x70) / 2 - iVar9;
            iVar7 = iVar13 + 3;
            iVar6 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
            iVar8 = iVar6 + 3;
          }
          else if ((DAT_005aa7d0 == 2) || (DAT_005aa7d0 == 6)) {
            iVar11 = -1;
            uVar5 = 0x100000;
            iVar6 = *(int *)((int)param_1 + 0x6c) / 2;
            iVar7 = *(int *)((int)param_1 + 0x70) / 2 - iVar9;
            iVar8 = iVar6 + 3;
            iVar13 = 0;
            iVar6 = iVar6 + -3;
          }
          else {
            if ((DAT_005aa7d0 != 3) && (DAT_005aa7d0 != 7)) goto LAB_004aa46c;
            iVar11 = -1;
            uVar5 = 0x100000;
            iVar7 = *(int *)((int)param_1 + 0x70) / 2 + iVar9;
            iVar6 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
            iVar13 = iVar7 + -3;
            iVar8 = iVar6 + 3;
          }
          goto LAB_004aa465;
        }
        iVar11 = -1;
        uVar5 = 0x100000;
        iVar13 = *(int *)((int)param_1 + 0x70) / 2;
        goto LAB_004aa449;
      }
      if (!bVar4) goto LAB_004aa16f;
LAB_004aa27c:
      local_18 = 0x40000;
      iVar11 = FUN_004a9ea0(DAT_005aa7d4,0x40000);
      if ((DAT_005aa7d0 == 0) || (DAT_005aa7d0 == 4)) {
        uVar5 = 0x40000;
        iVar13 = *(int *)((int)param_1 + 0x70) / 2;
        goto LAB_004aa449;
      }
      if ((DAT_005aa7d0 == 1) || (DAT_005aa7d0 == 5)) {
        uVar5 = 0x40000;
        iVar13 = *(int *)((int)param_1 + 0x70) / 2 - iVar9;
        iVar7 = iVar13 + 3;
        iVar6 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
        iVar8 = iVar6 + 3;
      }
      else if ((DAT_005aa7d0 == 2) || (DAT_005aa7d0 == 6)) {
        uVar5 = 0x40000;
        iVar6 = *(int *)((int)param_1 + 0x6c) / 2;
        iVar7 = *(int *)((int)param_1 + 0x70) / 2 - iVar9;
        iVar8 = iVar6 + 3;
        iVar13 = 0;
        iVar6 = iVar6 + -3;
      }
      else {
        if ((DAT_005aa7d0 != 3) && (DAT_005aa7d0 != 7)) goto LAB_004aa46c;
        uVar5 = 0x40000;
        iVar7 = *(int *)((int)param_1 + 0x70) / 2 + iVar9;
        iVar6 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
        iVar13 = iVar7 + -3;
        iVar8 = iVar6 + 3;
      }
      goto LAB_004aa465;
    }
LAB_004aa16f:
    if ((bVar3) && (bVar4)) {
      iVar11 = FUN_004a9ea0(DAT_005aa7d4,0x80000);
      if ((DAT_005aa7d0 == 0) || (DAT_005aa7d0 == 4)) {
        iVar6 = *(int *)((int)param_1 + 0x70) / 2;
        iVar8 = iVar6 + 3;
        iVar6 = iVar6 + -3;
        iVar13 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
        iVar7 = 0;
      }
      else if ((DAT_005aa7d0 == 1) || (DAT_005aa7d0 == 5)) {
        iVar6 = *(int *)((int)param_1 + 0x70) / 2 - iVar9;
        iVar8 = iVar6 + 3;
        iVar7 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
        iVar13 = iVar7 + 3;
      }
      else if ((DAT_005aa7d0 == 2) || (DAT_005aa7d0 == 6)) {
        iVar7 = *(int *)((int)param_1 + 0x6c) / 2;
        iVar8 = *(int *)((int)param_1 + 0x70) / 2 - iVar9;
        iVar13 = iVar7 + 3;
        iVar6 = 0;
        iVar7 = iVar7 + -3;
      }
      else {
        if ((DAT_005aa7d0 != 3) && (DAT_005aa7d0 != 7)) goto LAB_004aa27c;
        iVar8 = *(int *)((int)param_1 + 0x70) / 2 + iVar9;
        iVar7 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
        iVar6 = iVar8 + -3;
        iVar13 = iVar7 + 3;
      }
      FUN_00468320(param_1,DAT_005aa7d4,iVar7,iVar13,iVar6,iVar8,0x80000,iVar11);
      goto LAB_004aa27c;
    }
  }
LAB_004aa46c:
  bVar4 = false;
  bVar3 = false;
  iVar11 = FUN_004154a0(0x5aad68);
  iVar13 = 0;
  if (0 < DAT_005aadb4) {
    piVar12 = &DAT_005aae2c;
    do {
      FUN_00521e30(piVar12);
      uVar5 = FUN_00521e50(piVar12);
      if (uVar5 != 0) {
        bVar4 = true;
      }
      uVar5 = FUN_00521e70(piVar12);
      if (uVar5 != 0) {
        bVar3 = true;
      }
      iVar13 = iVar13 + 1;
      piVar12 = piVar12 + 0x13;
    } while (iVar13 < DAT_005aadb4);
  }
  if ((iVar11 != 0) || ((bVar3 && (!bVar4)))) {
    local_18 = 0x80000;
    iVar11 = FUN_004a9ea0(DAT_005aadb0,0x80000);
    if ((DAT_005aa7d0 == 0) || (DAT_005aa7d0 == 4)) {
      uVar5 = 0x80000;
      iVar6 = *(int *)((int)param_1 + 0x70) / 2;
      goto LAB_004aa8d0;
    }
    if ((DAT_005aa7d0 == 1) || (DAT_005aa7d0 == 5)) {
      uVar5 = 0x80000;
      iVar6 = *(int *)((int)param_1 + 0x70) / 2 - iVar9;
      iVar8 = iVar6 + 3;
      iVar7 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
      iVar13 = iVar7 + 3;
    }
    else if ((DAT_005aa7d0 == 2) || (DAT_005aa7d0 == 6)) {
      uVar5 = 0x80000;
      iVar7 = *(int *)((int)param_1 + 0x6c) / 2;
      iVar8 = *(int *)((int)param_1 + 0x70) / 2 - iVar9;
      iVar13 = iVar7 + 3;
      iVar6 = 0;
      iVar7 = iVar7 + -3;
    }
    else {
      if ((DAT_005aa7d0 != 3) && (DAT_005aa7d0 != 7)) goto LAB_004aa8f3;
      uVar5 = 0x80000;
      iVar8 = *(int *)((int)param_1 + 0x70) / 2 + iVar9;
      iVar7 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
      iVar6 = iVar8 + -3;
      iVar13 = iVar7 + 3;
    }
  }
  else {
    if (bVar3) {
      if (!bVar4) goto LAB_004aa8f3;
      iVar11 = FUN_004a9ea0(DAT_005aadb0,0x80000);
      if ((DAT_005aa7d0 == 0) || (DAT_005aa7d0 == 4)) {
        iVar11 = -1;
        iVar6 = *(int *)((int)param_1 + 0x70) / 2;
        iVar8 = iVar6 + 3;
        iVar6 = iVar6 + -3;
        iVar13 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
        iVar7 = 0;
      }
      else if ((DAT_005aa7d0 == 1) || (DAT_005aa7d0 == 5)) {
        iVar6 = *(int *)((int)param_1 + 0x70) / 2 - iVar9;
        iVar8 = iVar6 + 3;
        iVar7 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
        iVar13 = iVar7 + 3;
      }
      else if ((DAT_005aa7d0 == 2) || (DAT_005aa7d0 == 6)) {
        iVar11 = -1;
        iVar7 = *(int *)((int)param_1 + 0x6c) / 2;
        iVar8 = *(int *)((int)param_1 + 0x70) / 2 - iVar9;
        iVar13 = iVar7 + 3;
        iVar6 = 0;
        iVar7 = iVar7 + -3;
      }
      else {
        if ((DAT_005aa7d0 != 3) && (DAT_005aa7d0 != 7)) goto LAB_004aa702;
        iVar8 = *(int *)((int)param_1 + 0x70) / 2 + iVar9;
        iVar7 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
        iVar6 = iVar8 + -3;
        iVar13 = iVar7 + 3;
      }
      FUN_00468320(param_1,DAT_005aadb0,iVar7,iVar13,iVar6,iVar8,0x80000,iVar11);
    }
    else if (!bVar4) {
      local_18 = 0x100000;
      if ((DAT_005aa7d0 == 0) || (DAT_005aa7d0 == 4)) {
        iVar11 = -1;
        uVar5 = 0x100000;
        iVar6 = *(int *)((int)param_1 + 0x70) / 2;
        goto LAB_004aa8d0;
      }
      if ((DAT_005aa7d0 == 1) || (DAT_005aa7d0 == 5)) {
        iVar11 = -1;
        uVar5 = 0x100000;
        iVar6 = *(int *)((int)param_1 + 0x70) / 2 - iVar9;
        iVar8 = iVar6 + 3;
        iVar7 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
        iVar13 = iVar7 + 3;
      }
      else if ((DAT_005aa7d0 == 2) || (DAT_005aa7d0 == 6)) {
        iVar11 = -1;
        uVar5 = 0x100000;
        iVar7 = *(int *)((int)param_1 + 0x6c) / 2;
        iVar8 = *(int *)((int)param_1 + 0x70) / 2 - iVar9;
        iVar13 = iVar7 + 3;
        iVar6 = 0;
        iVar7 = iVar7 + -3;
      }
      else {
        if ((DAT_005aa7d0 != 3) && (DAT_005aa7d0 != 7)) goto LAB_004aa8f3;
        iVar11 = -1;
        uVar5 = 0x100000;
        iVar8 = *(int *)((int)param_1 + 0x70) / 2 + iVar9;
        iVar7 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
        iVar6 = iVar8 + -3;
        iVar13 = iVar7 + 3;
      }
      goto LAB_004aa8ec;
    }
LAB_004aa702:
    local_18 = 0x40000;
    iVar11 = FUN_004a9ea0(DAT_005aadb0,0x40000);
    if ((DAT_005aa7d0 == 0) || (DAT_005aa7d0 == 4)) {
      iVar11 = -1;
      uVar5 = 0x40000;
      iVar6 = *(int *)((int)param_1 + 0x70) / 2;
LAB_004aa8d0:
      iVar8 = iVar6 + 3;
      iVar6 = iVar6 + -3;
      iVar13 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
      iVar7 = 0;
    }
    else if ((DAT_005aa7d0 == 1) || (DAT_005aa7d0 == 5)) {
      uVar5 = 0x40000;
      iVar6 = *(int *)((int)param_1 + 0x70) / 2 - iVar9;
      iVar8 = iVar6 + 3;
      iVar7 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
      iVar13 = iVar7 + 3;
    }
    else if ((DAT_005aa7d0 == 2) || (DAT_005aa7d0 == 6)) {
      iVar11 = -1;
      uVar5 = 0x40000;
      iVar7 = *(int *)((int)param_1 + 0x6c) / 2;
      iVar8 = *(int *)((int)param_1 + 0x70) / 2 - iVar9;
      iVar13 = iVar7 + 3;
      iVar6 = 0;
      iVar7 = iVar7 + -3;
    }
    else {
      if ((DAT_005aa7d0 != 3) && (DAT_005aa7d0 != 7)) goto LAB_004aa8f3;
      uVar5 = 0x40000;
      iVar8 = *(int *)((int)param_1 + 0x70) / 2 + iVar9;
      iVar7 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
      iVar6 = iVar8 + -3;
      iVar13 = iVar7 + 3;
    }
  }
LAB_004aa8ec:
  FUN_00468320(param_1,DAT_005aadb0,iVar7,iVar13,iVar6,iVar8,uVar5,iVar11);
LAB_004aa8f3:
  if (DAT_00583100 == '\x02') {
    iVar11 = FUN_004551a0(&DAT_005ae8e8,0);
    if ((iVar11 == 0) || (iVar11 == 7)) {
      FUN_00468320(param_1,DAT_005aadb0,0x2a,0x2f,0x14,0x1c,local_18,-1);
      FUN_00468320(param_1,DAT_005aa7d4,0,6,0x14,0x1c,local_18,-1);
    }
    else if ((iVar11 == 1) || (iVar11 == 2)) {
      FUN_00468320(param_1,DAT_005aadb0,0x14,0x1c,0x2a,0x2f,local_18,-1);
      FUN_00468320(param_1,DAT_005aa7d4,0x14,0x1c,0,6,local_18,-1);
    }
    else if ((iVar11 == 3) || (iVar11 == 4)) {
      FUN_00468320(param_1,DAT_005aadb0,0,6,0x14,0x1c,local_18,-1);
      FUN_00468320(param_1,DAT_005aa7d4,0x2a,0x2f,0x14,0x1c,local_18,-1);
    }
    else {
      FUN_00468320(param_1,DAT_005aadb0,0x14,0x1c,0,6,local_18,-1);
      FUN_00468320(param_1,DAT_005aa7d4,0x14,0x1c,0x2a,0x2f,local_18,-1);
    }
  }
  if (DAT_00583100 == '\x03') {
    if ((bVar1) && (!bVar2)) {
      FUN_004a9e60(param_1,0x400,0x800);
      return;
    }
    if ((!bVar1) && (bVar2)) {
      FUN_004a9e60(param_1,0x800,0x400);
      return;
    }
    iVar11 = FUN_004a9e00(DAT_005aadb0);
    if (iVar11 == -1) {
      iVar11 = FUN_004a9e00(DAT_005aa7d4);
    }
    if ((-1 < iVar11) && (iVar11 < 8)) {
      if ((iVar11 == 0) || (iVar11 == 4)) {
        iVar11 = *(int *)((int)param_1 + 0x70) / 2;
        FUN_00468320(param_1,DAT_005aa7d4,0,*(int *)((int)param_1 + 0x6c) / 2 - iVar9,iVar11 + -3,
                     iVar11 + 3,local_18,-1);
        iVar11 = *(int *)((int)param_1 + 0x70) / 2;
        FUN_00468320(param_1,DAT_005aadb0,0,*(int *)((int)param_1 + 0x6c) / 2 - iVar9,iVar11 + -3,
                     iVar11 + 3,local_18,-1);
        return;
      }
      if ((iVar11 == 1) || (iVar11 == 5)) {
        iVar13 = *(int *)((int)param_1 + 0x70) / 2 - iVar9;
        iVar11 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
        FUN_00468320(param_1,DAT_005aa7d4,iVar11,iVar11 + 3,iVar13,iVar13 + 3,local_18,-1);
        iVar11 = *(int *)((int)param_1 + 0x70) / 2 - iVar9;
        iVar9 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
        FUN_00468320(param_1,DAT_005aadb0,iVar9,iVar9 + 3,iVar11,iVar11 + 3,local_18,-1);
        return;
      }
      if ((iVar11 == 2) || (iVar11 == 6)) {
        iVar11 = *(int *)((int)param_1 + 0x6c) / 2;
        FUN_00468320(param_1,DAT_005aa7d4,iVar11 + -3,iVar11 + 3,0,
                     *(int *)((int)param_1 + 0x70) / 2 - iVar9,local_18,-1);
        iVar11 = *(int *)((int)param_1 + 0x6c) / 2;
        FUN_00468320(param_1,DAT_005aadb0,iVar11 + -3,iVar11 + 3,0,
                     *(int *)((int)param_1 + 0x70) / 2 - iVar9,local_18,-1);
        return;
      }
      if ((iVar11 == 3) || (iVar11 == 7)) {
        iVar11 = *(int *)((int)param_1 + 0x70) / 2 + iVar9;
        iVar13 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
        FUN_00468320(param_1,DAT_005aa7d4,iVar13,iVar13 + 3,iVar11 + -3,iVar11,local_18,-1);
        iVar11 = *(int *)((int)param_1 + 0x70) / 2 + iVar9;
        iVar9 = *(int *)((int)param_1 + 0x6c) / 2 - iVar9;
        FUN_00468320(param_1,DAT_005aadb0,iVar9,iVar9 + 3,iVar11 + -3,iVar11,local_18,-1);
        return;
      }
    }
  }
  return;
}


