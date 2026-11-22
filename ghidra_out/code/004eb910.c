
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004eb910(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int local_8;
  
  iVar1 = 0;
  iVar3 = 0;
  if ((*(byte *)(param_1 + 0x35) & 1) == 0) {
    local_8 = 1;
    param_1[0x2c] = param_1[1] + param_1[0x54];
    if (0 < *param_1) {
      piVar2 = param_1 + 0x2d;
      do {
        iVar1 = iVar1 + piVar2[-0x28];
        lVar4 = __ftol((float10)iVar1 * (float10)*(double *)(param_1 + 0x1c) -
                       (float10)_DAT_0054dd60);
        *piVar2 = (int)lVar4 + iVar3 + param_1[1] + param_1[0x54];
        iVar3 = iVar3 + *(int *)(param_1[0xc] + 0xc);
        local_8 = local_8 + 1;
        piVar2 = piVar2 + 1;
      } while (local_8 <= *param_1);
    }
    iVar3 = param_1[3] + param_1[1];
    iVar1 = param_1[0x54];
  }
  else {
    local_8 = 1;
    param_1[0x2c] = param_1[0x55] + param_1[2];
    if (0 < *param_1) {
      piVar2 = param_1 + 0x2d;
      do {
        iVar1 = iVar1 + piVar2[-0x28];
        lVar4 = __ftol((float10)iVar1 * (float10)*(double *)(param_1 + 0x1c) -
                       (float10)_DAT_0054dd60);
        *piVar2 = (int)lVar4 + iVar3 + param_1[0x55] + param_1[2];
        iVar3 = iVar3 + *(int *)(param_1[0xc] + 0x10);
        local_8 = local_8 + 1;
        piVar2 = piVar2 + 1;
      } while (local_8 <= *param_1);
    }
    iVar3 = param_1[4] + param_1[0x55];
    iVar1 = param_1[2];
  }
  param_1[local_8 + 0x2c] = iVar3 + -1 + iVar1;
  return;
}


