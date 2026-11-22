
/* WARNING: Removing unreachable block (ram,0x004cf804) */

void __fastcall FUN_004cf5a0(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int extraout_EDX;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint local_8;
  int *local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar4 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar4;
    local_8 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar4 * 8);
    piVar10 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    local_8 = 0;
    piVar10 = local_4;
  }
  uVar8 = local_8 & 0xff;
  switch(uVar8) {
  case 1:
    if ((int)piVar10 < 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 0x12;
    }
    else {
      if ((int)piVar10 <= *(int *)((int)param_1 + 0x58) - *(int *)((int)param_1 + 0x54)) {
        if ((int)piVar10 < 1) {
          return;
        }
        piVar5 = piVar10;
        do {
          iVar4 = *(int *)((int)param_1 + 0x54);
          iVar6 = *(int *)((int)param_1 + 0x50);
          uVar2 = *(undefined4 *)(iVar6 + -8 + ((int)piVar10 + iVar4) * 8);
          uVar3 = *(undefined4 *)(iVar6 + -4 + ((int)piVar10 + iVar4) * 8);
          if (iVar4 == 0) {
            FUN_00404ab0(param_1,3);
          }
          else {
            iVar4 = iVar4 + -1;
            *(int *)((int)param_1 + 0x54) = iVar4;
            *(undefined4 *)(iVar6 + iVar4 * 8) = uVar2;
            *(undefined4 *)(iVar6 + 4 + iVar4 * 8) = uVar3;
          }
          piVar5 = (int *)((int)piVar5 + -1);
        } while (piVar5 != (int *)0x0);
        return;
      }
      *(undefined4 *)((int)param_1 + 0x90) = 6;
    }
    goto LAB_004cf8cb;
  default:
    FUN_00404ab0(param_1,0xe);
    return;
  case 6:
    if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
      iVar4 = *(int *)((int)param_1 + 0x50);
      iVar6 = *(int *)((int)param_1 + 0x54) + 1;
      *(int *)((int)param_1 + 0x54) = iVar6;
      uVar7 = *(uint *)(iVar4 + -8 + iVar6 * 8);
      local_4 = *(int **)(iVar4 + -4 + iVar6 * 8);
    }
    else {
      *(undefined4 *)((int)param_1 + 0x90) = 6;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
      uVar7 = 0;
      iVar4 = extraout_EDX;
    }
    if ((uVar7 & 0xff) != uVar8) {
      *(undefined4 *)((int)param_1 + 0x90) = 0xe;
      goto LAB_004cf789;
    }
    if (piVar10[1] < local_4[1]) {
LAB_004cf77f:
      *(undefined4 *)((int)param_1 + 0x90) = 0xf;
LAB_004cf789:
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
      return;
    }
    iVar6 = 0;
    if (0 < local_4[1]) {
      do {
        iVar1 = *local_4;
        iVar4 = *piVar10;
        *(undefined4 *)(iVar4 + iVar6 * 8) = *(undefined4 *)(iVar1 + iVar6 * 8);
        *(undefined4 *)(iVar4 + 4 + iVar6 * 8) = *(undefined4 *)(iVar1 + 4 + iVar6 * 8);
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_4[1]);
    }
    piVar5 = (int *)FUN_004d3110((int)param_1,iVar4,0x10);
    if (piVar5 == (int *)0x0) {
      *(undefined4 *)((int)param_1 + 0x90) = 2;
      goto LAB_004cf7dc;
    }
    *(int *)((int)param_1 + 0xa84) = *(int *)((int)param_1 + 0xa84) + 0x10;
    piVar5[1] = local_4[1];
    piVar5[2] = 0;
    piVar5[3] = 0;
    *piVar5 = *piVar10;
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar4 = *(int *)((int)param_1 + 0x50);
      iVar6 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar6;
      *(undefined4 *)(iVar4 + iVar6 * 8) = 6;
      *(int **)(iVar4 + 4 + iVar6 * 8) = piVar5;
      return;
    }
    break;
  case 7:
    if (piVar10[1] < local_4[1]) {
      *(undefined4 *)((int)param_1 + 0x90) = 0xf;
    }
    else if (*(int *)*piVar10 == 0) {
      iVar4 = 0;
      if (0 < local_4[1]) {
        iVar6 = 0;
        do {
          puVar9 = (undefined4 *)(*local_4 + iVar6);
          puVar11 = (undefined4 *)(*piVar10 + iVar6);
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + 0x10;
          *puVar11 = *puVar9;
          puVar11[1] = puVar9[1];
          puVar11[2] = puVar9[2];
          puVar11[3] = puVar9[3];
        } while (iVar4 < local_4[1]);
      }
      iVar4 = *(int *)((int)param_1 + 0x54);
      if (iVar4 != 0) {
LAB_004cf883:
        iVar6 = *(int *)((int)param_1 + 0x50);
        iVar4 = iVar4 + -1;
        *(int *)((int)param_1 + 0x54) = iVar4;
        *(uint *)(iVar6 + iVar4 * 8) = local_8;
        *(int **)(iVar6 + 4 + iVar4 * 8) = piVar10;
        return;
      }
      *(undefined4 *)((int)param_1 + 0x90) = 3;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x90) = 0x12;
    }
LAB_004cf8cb:
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  case 8:
    if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
      iVar4 = *(int *)((int)param_1 + 0x54) + 1;
      *(int *)((int)param_1 + 0x54) = iVar4;
      uVar7 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar4 * 8);
      local_4 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar4 * 8);
    }
    else {
      *(undefined4 *)((int)param_1 + 0x90) = 6;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
      uVar7 = 0;
    }
    if ((uVar7 & 0xff) != uVar8) {
      *(undefined4 *)((int)param_1 + 0x90) = 0xe;
      goto LAB_004cf8cb;
    }
    iVar4 = FUN_004cee20((char *)piVar10);
    uVar8 = 0xffffffff;
    piVar5 = local_4;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      iVar6 = *piVar5;
      piVar5 = (int *)((int)piVar5 + 1);
    } while ((char)iVar6 != '\0');
    if (iVar4 < (int)(~uVar8 - 1)) goto LAB_004cf77f;
    uVar8 = 0xffffffff;
    do {
      piVar5 = local_4;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      piVar5 = (int *)((int)local_4 + 1);
      iVar4 = *local_4;
      local_4 = piVar5;
    } while ((char)iVar4 != '\0');
    uVar8 = ~uVar8;
    piVar5 = (int *)((int)piVar5 - uVar8);
    piVar12 = piVar10;
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *piVar12 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar12 = piVar12 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)piVar12 = (char)*piVar5;
      piVar5 = (int *)((int)piVar5 + 1);
      piVar12 = (int *)((int)piVar12 + 1);
    }
    iVar4 = *(int *)((int)param_1 + 0x54);
    if (iVar4 != 0) goto LAB_004cf883;
  }
  *(undefined4 *)((int)param_1 + 0x90) = 3;
LAB_004cf7dc:
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
}


