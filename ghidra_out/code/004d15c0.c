
void __fastcall FUN_004d15c0(void *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int extraout_EDX;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar4 = *(int *)((int)param_1 + 0x50);
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    cVar3 = (char)*(undefined4 *)(iVar4 + -8 + iVar1 * 8);
    piVar6 = *(int **)(iVar4 + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    cVar3 = '\0';
    iVar4 = extraout_EDX;
    piVar6 = local_4;
  }
  uVar5 = 0;
  if (cVar3 != '\x01') {
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  piVar2 = (int *)FUN_004d3110((int)param_1,iVar4,0x10);
  if (piVar2 == (int *)0x0) {
    piVar2 = local_4;
  }
  else {
    iVar4 = *(int *)((int)param_1 + 0xa84) + 0x10;
    *(int *)((int)param_1 + 0xa84) = iVar4;
    piVar2[1] = (int)piVar6;
    piVar2[2] = 0;
    piVar2[3] = 0;
    if ((int)piVar6 < 1) {
      *piVar2 = 0;
    }
    else {
      iVar4 = FUN_004d3110((int)param_1,iVar4,(int)piVar6 * 8);
      *piVar2 = iVar4;
      if (iVar4 == 0) {
        piVar2 = local_4;
        goto LAB_004d16c8;
      }
      *(int *)((int)param_1 + 0xa84) = *(int *)((int)param_1 + 0xa84) + (int)piVar6 * 8;
    }
    iVar4 = 0;
    if (0 < (int)piVar6) {
      do {
        iVar1 = *piVar2;
        iVar4 = iVar4 + 1;
        *(undefined4 *)(iVar1 + -8 + iVar4 * 8) = 0;
        *(int **)(iVar1 + -4 + iVar4 * 8) = local_4;
      } while (iVar4 < (int)piVar6);
    }
    uVar5 = 6;
  }
LAB_004d16c8:
  if ((char)uVar5 == '\0') {
    *(undefined4 *)((int)param_1 + 0x90) = 2;
  }
  else {
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar4 = *(int *)((int)param_1 + 0x50);
      iVar1 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar1;
      *(uint *)(iVar4 + iVar1 * 8) = uVar5 | 0x100;
      *(int **)(iVar4 + 4 + iVar1 * 8) = piVar2;
      return;
    }
    *(undefined4 *)((int)param_1 + 0x90) = 3;
  }
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
}


