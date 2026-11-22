
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall
FUN_004ebf80(int *param_1,undefined4 unused_reg_1,int unused_stack_0,int unused_stack_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar5 = param_1[0x34];
  if ((iVar5 < 0) || (iVar2 = *param_1, iVar2 < iVar5)) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x35) & 1) == 0) {
    unused_stack_0 = (param_1[0x2a] - param_1[iVar5 + 0x2d]) + unused_stack_0;
  }
  else {
    unused_stack_0 = (param_1[0x2a] - param_1[iVar5 + 0x2d]) + unused_stack_4;
  }
  lVar7 = __ftol((float10)unused_stack_0 / (float10)*(double *)(param_1 + 0x1c) -
                 (float10)_DAT_0054dd60);
  iVar4 = (int)lVar7;
  if (iVar4 == 0) {
    return 1;
  }
  if (iVar4 < 0) {
    iVar2 = 0;
    if (-1 < iVar5) {
      piVar3 = param_1 + 5;
      iVar6 = iVar5 + 1;
      do {
        iVar1 = *piVar3;
        piVar3 = piVar3 + 1;
        iVar2 = iVar2 + iVar1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = -iVar4;
    if (-iVar2 != iVar4 && iVar2 <= -iVar4) {
      iVar6 = iVar2;
    }
    param_1[iVar5 + 6] = param_1[iVar5 + 6] + iVar6;
    iVar5 = param_1[0x34];
    if (-1 < iVar5) {
      piVar3 = param_1 + iVar5 + 5;
      do {
        if (iVar6 <= *piVar3) {
          param_1[iVar5 + 5] = param_1[iVar5 + 5] - iVar6;
          FUN_004eb910(param_1);
          return 1;
        }
        iVar6 = iVar6 - *piVar3;
        *piVar3 = 0;
        iVar5 = iVar5 + -1;
        piVar3 = piVar3 + -1;
      } while (-1 < iVar5);
      FUN_004eb910(param_1);
      return 1;
    }
  }
  else {
    iVar6 = 0;
    iVar2 = iVar2 + 1;
    if (iVar5 + 1 < iVar2) {
      piVar3 = param_1 + iVar5 + 6;
      iVar2 = iVar2 - (iVar5 + 1);
      do {
        iVar1 = *piVar3;
        piVar3 = piVar3 + 1;
        iVar6 = iVar6 + iVar1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (iVar6 < iVar4) {
      iVar4 = iVar6;
    }
    param_1[iVar5 + 5] = param_1[iVar5 + 5] + iVar4;
    iVar5 = param_1[0x34] + 1;
    if (iVar5 < *param_1 + 1) {
      piVar3 = param_1 + param_1[0x34] + 6;
      while (*piVar3 < iVar4) {
        iVar4 = iVar4 - *piVar3;
        *piVar3 = 0;
        iVar5 = iVar5 + 1;
        piVar3 = piVar3 + 1;
        if (*param_1 + 1 <= iVar5) {
          FUN_004eb910(param_1);
          return 1;
        }
      }
      param_1[iVar5 + 5] = param_1[iVar5 + 5] - iVar4;
    }
  }
  FUN_004eb910(param_1);
  return 1;
}


