
void __fastcall FUN_004d13e0(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint *puVar6;
  int local_c;
  uint local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    uVar4 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(uint *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    uVar4 = 0;
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  piVar1 = *(int **)(*(int *)((int)param_1 + 0x5c) + *(int *)((int)param_1 + 0x60) * 4);
  uVar4 = uVar4 & 0xff;
  if (uVar4 == 5) {
    local_c = *(int *)(*(int *)((int)param_1 + 0x80) + local_4 * 4);
    if ((((piVar1 == *(int **)(*(int *)((int)param_1 + 0x5c) + -4 + *(int *)((int)param_1 + 100) * 4
                              )) && (-1 < (int)local_4)) && ((int)local_4 < piVar1[1])) &&
       (*(uint *)(*piVar1 + 4 + local_4 * 0x10) == local_4)) {
      *(int **)(local_c + 0x10) = piVar1;
      *(uint *)(local_c + 0x14) = local_4;
      puVar6 = (uint *)(*piVar1 + local_4 * 0x10);
      goto LAB_004d14b7;
    }
    if (((piVar1 == *(int **)(local_c + 0x10)) && (*(int *)(local_c + 0x14) < piVar1[1])) &&
       ((puVar6 = (uint *)(*(int *)(local_c + 0x14) * 0x10 + *piVar1), puVar6[1] == local_4 &&
        ((char)*puVar6 == '\x05')))) goto LAB_004d14b7;
    if (((-1 < piVar1[3]) && (piVar1[2] <= (int)local_4)) && ((int)local_4 <= piVar1[3]))
    goto LAB_004d154f;
  }
  else {
    local_c = 0;
LAB_004d154f:
    iVar2 = 0;
    if (0 < piVar1[1]) {
      puVar6 = (uint *)*piVar1;
      do {
        if ((puVar6[1] == local_4) && ((*puVar6 & 0xff) == uVar4)) {
          if (local_c != 0) {
            *(int **)(local_c + 0x10) = piVar1;
            *(int *)(local_c + 0x14) = iVar2;
          }
          goto LAB_004d14b7;
        }
        iVar2 = iVar2 + 1;
        puVar6 = puVar6 + 4;
      } while (iVar2 < piVar1[1]);
    }
  }
  puVar6 = (uint *)0x0;
LAB_004d14b7:
  if (puVar6 == (uint *)0x0) {
    *(undefined4 *)((int)param_1 + 0x90) = 0x11;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  if ((uVar4 == 5) && ((local_4 == piVar1[2] || (local_4 == piVar1[3])))) {
    iVar2 = *(int *)((int)param_1 + 0x7c);
    piVar1[3] = -1;
    piVar1[2] = iVar2;
    iVar2 = piVar1[1];
    if (0 < iVar2) {
      pcVar5 = (char *)*piVar1;
      do {
        if (*pcVar5 == '\x05') {
          iVar3 = piVar1[2];
          if (*(int *)(pcVar5 + 4) <= piVar1[2]) {
            iVar3 = *(int *)(pcVar5 + 4);
          }
          piVar1[2] = iVar3;
          iVar3 = piVar1[3];
          if (piVar1[3] < *(int *)(pcVar5 + 4)) {
            iVar3 = *(int *)(pcVar5 + 4);
          }
          piVar1[3] = iVar3;
        }
        pcVar5 = pcVar5 + 0x10;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  *puVar6 = 0;
  puVar6[2] = 0;
  return;
}


