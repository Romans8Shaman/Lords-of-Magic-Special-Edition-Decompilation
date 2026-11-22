
void __fastcall FUN_004d0e90(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  uint uVar7;
  uint local_20;
  uint local_1c;
  float local_18;
  float local_14;
  uint local_10;
  int *local_c;
  int *local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar4 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar4;
    uVar7 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar4 * 8);
    local_4 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar4 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    uVar7 = 0;
  }
  iVar4 = FUN_0041da00((int)param_1);
  if (iVar4 == 0) {
    if (((char)uVar7 == '\x06') && ((uVar7 & 0x100) == 0)) goto LAB_004d0eef;
    FUN_00404ab0(param_1,0x12);
  }
  uVar7 = 0;
LAB_004d0eef:
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar4 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar4;
    local_10 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar4 * 8);
    local_c = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar4 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_10 = 0;
    local_c = local_4;
  }
  iVar4 = FUN_004026a0(&local_10,&local_1c,(uint *)&local_14,&local_18);
  if (iVar4 == 0) {
    FUN_00404ab0(param_1,0xe);
    return;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar4 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar4;
    local_10 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar4 * 8);
    local_c = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar4 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_10 = 0;
    local_c = local_4;
  }
  iVar4 = FUN_004026a0(&local_10,&local_20,(uint *)&local_18,&local_14);
  if (iVar4 == 0) {
    FUN_00404ab0(param_1,0xe);
    return;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar4 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar4;
    cVar5 = (char)*(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar4 * 8);
    piVar6 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    cVar5 = '\0';
    piVar6 = local_4;
  }
  iVar4 = *(int *)((int)param_1 + 0x90);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  uVar3 = DAT_005845f4;
  uVar2 = DAT_005845f0;
  uVar1 = DAT_005845ec;
  if (iVar4 == 0) {
    if (cVar5 == '\x06') {
      if ((-1 < (int)local_20) && ((int)local_1c < piVar6[1])) {
        DAT_005845f4 = local_4;
        if ((int)local_20 < (int)local_1c) {
          DAT_005845ec = param_1;
          DAT_005845f0 = uVar7;
          FUN_0053a320((undefined1 *)(*piVar6 + local_20 * 8),(local_1c - local_20) + 1,8,
                       &LAB_004d0d40);
        }
        DAT_005845f0 = uVar2;
        DAT_005845f4 = (int *)uVar3;
        DAT_005845ec = (void *)uVar1;
        return;
      }
      *(undefined4 *)((int)param_1 + 0x90) = 0xf;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x90) = 0xe;
    }
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  return;
}


