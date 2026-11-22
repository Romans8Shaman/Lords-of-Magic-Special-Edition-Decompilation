
void __fastcall FUN_004cdbe0(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  longlong lVar6;
  uint local_14;
  float local_10;
  uint local_c;
  uint local_8;
  float local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    uVar4 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  if (uVar4 == 1) {
    fVar5 = local_4;
  }
  else if (uVar4 == 2) {
    fVar5 = (float)((int)local_4 >> 8);
  }
  else {
    if (uVar4 != 4) {
      FUN_00404ab0(param_1,0xe);
      return;
    }
    lVar6 = __ftol((float10)local_4);
    fVar5 = (float)lVar6;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    local_8 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    local_8 = 0;
  }
  iVar2 = FUN_004026a0(&local_8,&local_14,&local_c,&local_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
  }
  else {
    if ((int)fVar5 < 1) {
      iVar2 = (int)local_14 >> (-SUB41(fVar5,0) & 0x1f);
    }
    else {
      iVar2 = local_14 << (SUB41(fVar5,0) & 0x1f);
    }
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar1 = *(int *)((int)param_1 + 0x50);
      iVar3 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar3;
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
      return;
    }
    *(undefined4 *)((int)param_1 + 0x90) = 3;
  }
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
}


