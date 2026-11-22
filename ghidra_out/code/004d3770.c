
void __fastcall
FUN_004d3770(int param_1,undefined4 unused_reg_1,undefined4 unused_stack_0,undefined4 unused_stack_4
            )

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  int *local_c;
  
  iVar6 = *(int *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x58);
  iVar1 = iVar6;
  if (iVar6 < iVar3) {
    pcVar4 = (char *)(*(int *)(param_1 + 0x50) + iVar6 * 8);
    do {
      if (*pcVar4 == '\n') break;
      iVar1 = iVar1 + 1;
      pcVar4 = pcVar4 + 8;
    } while (iVar1 < iVar3);
  }
  if (iVar1 == iVar3) {
    *(undefined4 *)(param_1 + 0x90) = 0xb;
    goto LAB_004d390c;
  }
  iVar1 = iVar1 - iVar6;
  cVar7 = '\0';
  piVar2 = (int *)FUN_004d3110(param_1,iVar3,0x10);
  if (piVar2 != (int *)0x0) {
    iVar6 = *(int *)(param_1 + 0xa84) + 0x10;
    *(int *)(param_1 + 0xa84) = iVar6;
    piVar2[1] = iVar1;
    piVar2[2] = 0;
    piVar2[3] = 0;
    if (iVar1 < 1) {
      *piVar2 = 0;
    }
    else {
      iVar6 = FUN_004d3110(param_1,iVar6,iVar1 * 8);
      *piVar2 = iVar6;
      if (iVar6 == 0) goto LAB_004d382e;
      *(int *)(param_1 + 0xa84) = *(int *)(param_1 + 0xa84) + iVar1 * 8;
    }
    iVar6 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = *piVar2;
        iVar6 = iVar6 + 1;
        *(undefined4 *)(iVar3 + -8 + iVar6 * 8) = 0;
        *(int **)(iVar3 + -4 + iVar6 * 8) = local_c;
      } while (iVar6 < iVar1);
    }
    cVar7 = '\x06';
    local_c = piVar2;
  }
LAB_004d382e:
  if (cVar7 == '\0') {
    *(undefined4 *)(param_1 + 0x90) = 2;
  }
  else {
    if (0 < iVar1) {
      iVar6 = iVar1 * 8;
      do {
        if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x58)) {
          iVar3 = *(int *)(param_1 + 0x54) + 1;
          *(int *)(param_1 + 0x54) = iVar3;
          uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x50) + -8 + iVar3 * 8);
          piVar2 = *(int **)(*(int *)(param_1 + 0x50) + -4 + iVar3 * 8);
        }
        else {
          *(undefined4 *)(param_1 + 0x90) = 6;
          FUN_004d4550((void *)param_1);
          uVar5 = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined4 *)(param_1 + 0xa4) = 0;
          piVar2 = local_c;
        }
        iVar6 = iVar6 + -8;
        iVar1 = iVar1 + -1;
        iVar3 = *local_c;
        *(undefined4 *)(iVar3 + iVar6) = uVar5;
        *(int **)(iVar3 + 4 + iVar6) = piVar2;
      } while (iVar1 != 0);
    }
    if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x58)) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x90) = 6;
      FUN_004d4550((void *)param_1);
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      iVar6 = *(int *)(param_1 + 0x50);
      iVar3 = *(int *)(param_1 + 0x54) + -1;
      *(int *)(param_1 + 0x54) = iVar3;
      *(undefined4 *)(iVar6 + iVar3 * 8) = 0x106;
      *(int **)(iVar6 + 4 + iVar3 * 8) = local_c;
      return;
    }
    *(undefined4 *)(param_1 + 0x90) = 3;
  }
LAB_004d390c:
  FUN_004d4550((void *)param_1);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  return;
}


