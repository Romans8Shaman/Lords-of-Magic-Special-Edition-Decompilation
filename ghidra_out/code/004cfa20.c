
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004cfa20(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    iVar3 = *(int *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    iVar3 = 0;
  }
  iVar1 = *(int *)((int)param_1 + 0x90);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  if (iVar1 != 0) {
    return;
  }
  if ((iVar3 == 1) || (iVar3 == 2)) {
    if ((int)local_4 < 0) {
      local_4 = (float)-(int)local_4;
    }
  }
  else {
    if (iVar3 != 4) {
      *(undefined4 *)((int)param_1 + 0x90) = 0xe;
      goto LAB_004cfaee;
    }
    if ((NAN(local_4) || NAN(_DAT_0054dd20)) || local_4 < _DAT_0054dd20) {
      local_4 = -local_4;
    }
  }
  if (*(int *)((int)param_1 + 0x54) != 0) {
    iVar2 = *(int *)((int)param_1 + 0x54) + -1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    iVar1 = *(int *)((int)param_1 + 0x50);
    *(int *)(iVar1 + iVar2 * 8) = iVar3;
    *(float *)(iVar1 + 4 + iVar2 * 8) = local_4;
    return;
  }
  *(undefined4 *)((int)param_1 + 0x90) = 3;
LAB_004cfaee:
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
}


