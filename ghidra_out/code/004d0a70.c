
void __fastcall FUN_004d0a70(void *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int local_c;
  uint local_8;
  int *local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar5 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar5;
    local_8 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar5 * 8);
    local_4 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar5 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    local_8 = 0;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar5 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar5;
    uVar6 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar5 * 8);
    piVar10 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar5 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar6 = 0;
    piVar10 = local_4;
  }
  uVar6 = uVar6 & 0xff;
  if (uVar6 == 6) {
    local_c = 0;
    if (0 < piVar10[1]) {
      do {
        puVar1 = (undefined4 *)(*piVar10 + local_c * 8);
        if (*(char *)(*piVar10 + local_c * 8) != '\0') {
          uVar3 = *puVar1;
          uVar4 = puVar1[1];
          if (*(int *)((int)param_1 + 0x54) == 0) {
            *(undefined4 *)((int)param_1 + 0x90) = 3;
            FUN_004d4550(param_1);
            *(undefined4 *)((int)param_1 + 0x90) = 0;
            *(undefined4 *)((int)param_1 + 0xa4) = 0;
          }
          else {
            iVar5 = *(int *)((int)param_1 + 0x50);
            iVar9 = *(int *)((int)param_1 + 0x54) + -1;
            *(int *)((int)param_1 + 0x54) = iVar9;
            *(undefined4 *)(iVar5 + iVar9 * 8) = uVar3;
            *(undefined4 *)(iVar5 + 4 + iVar9 * 8) = uVar4;
          }
          FUN_004d05e0(param_1,local_8,local_4);
          iVar5 = *(int *)((int)param_1 + 0x6c);
          *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
          if (iVar5 != 0) {
            return;
          }
        }
        local_c = local_c + 1;
      } while (local_c < piVar10[1]);
    }
  }
  else if (uVar6 == 7) {
    local_c = 0;
    if (0 < piVar10[1]) {
      iVar5 = 0;
      do {
        pcVar8 = (char *)(*piVar10 + iVar5);
        if (*pcVar8 != '\0') {
          uVar3 = *(undefined4 *)pcVar8;
          uVar4 = *(undefined4 *)(pcVar8 + 4);
          if (*(int *)((int)param_1 + 0x54) == 0) {
            *(undefined4 *)((int)param_1 + 0x90) = 3;
            FUN_004d4550(param_1);
            *(undefined4 *)((int)param_1 + 0x90) = 0;
            *(undefined4 *)((int)param_1 + 0xa4) = 0;
          }
          else {
            iVar9 = *(int *)((int)param_1 + 0x50);
            iVar7 = *(int *)((int)param_1 + 0x54) + -1;
            *(int *)((int)param_1 + 0x54) = iVar7;
            *(undefined4 *)(iVar9 + iVar7 * 8) = uVar3;
            *(undefined4 *)(iVar9 + 4 + iVar7 * 8) = uVar4;
          }
          uVar3 = *(undefined4 *)(*piVar10 + 8 + iVar5);
          uVar4 = *(undefined4 *)(*piVar10 + 0xc + iVar5);
          if (*(int *)((int)param_1 + 0x54) == 0) {
            *(undefined4 *)((int)param_1 + 0x90) = 3;
            FUN_004d4550(param_1);
            *(undefined4 *)((int)param_1 + 0x90) = 0;
            *(undefined4 *)((int)param_1 + 0xa4) = 0;
          }
          else {
            iVar9 = *(int *)((int)param_1 + 0x50);
            iVar7 = *(int *)((int)param_1 + 0x54) + -1;
            *(int *)((int)param_1 + 0x54) = iVar7;
            *(undefined4 *)(iVar9 + iVar7 * 8) = uVar3;
            *(undefined4 *)(iVar9 + 4 + iVar7 * 8) = uVar4;
          }
          FUN_004d05e0(param_1,local_8,local_4);
          iVar9 = *(int *)((int)param_1 + 0x6c);
          *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
          if (iVar9 != 0) {
            return;
          }
        }
        local_c = local_c + 1;
        iVar5 = iVar5 + 0x10;
        if (piVar10[1] <= local_c) {
          return;
        }
      } while( true );
    }
  }
  else {
    if (uVar6 != 8) {
      *(undefined4 *)((int)param_1 + 0x90) = 0xe;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
      return;
    }
    uVar6 = 0xffffffff;
    piVar11 = piVar10;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      iVar5 = *piVar11;
      piVar11 = (int *)((int)piVar11 + 1);
    } while ((char)iVar5 != '\0');
    iVar5 = 0;
    if (0 < (int)(~uVar6 - 1)) {
      while( true ) {
        cVar2 = *(char *)(iVar5 + (int)piVar10);
        if (*(int *)((int)param_1 + 0x54) == 0) {
          *(undefined4 *)((int)param_1 + 0x90) = 3;
          FUN_004d4550(param_1);
          *(undefined4 *)((int)param_1 + 0x90) = 0;
          *(undefined4 *)((int)param_1 + 0xa4) = 0;
        }
        else {
          iVar9 = *(int *)((int)param_1 + 0x50);
          iVar7 = *(int *)((int)param_1 + 0x54) + -1;
          *(int *)((int)param_1 + 0x54) = iVar7;
          *(undefined4 *)(iVar9 + iVar7 * 8) = 1;
          *(int *)(iVar9 + 4 + iVar7 * 8) = (int)cVar2;
        }
        FUN_004d05e0(param_1,local_8,local_4);
        iVar9 = *(int *)((int)param_1 + 0x6c);
        *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
        if (iVar9 != 0) break;
        iVar5 = iVar5 + 1;
        if ((int)(~uVar6 - 1) <= iVar5) {
          return;
        }
      }
    }
  }
  return;
}


