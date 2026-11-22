
void __fastcall FUN_004cfd60(void *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int *local_18;
  int *local_14;
  int *local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_18 = *(int **)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_14 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    local_18 = (int *)0x0;
    local_14 = local_4;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    uVar4 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar4 = 0;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    piVar2 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar3 = 0;
    piVar2 = local_4;
  }
  iVar1 = *(int *)((int)param_1 + 0x90);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  if (iVar1 == 0) {
    uVar3 = uVar3 & 0xff;
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        piVar2 = (int *)((int)piVar2 >> 8);
      }
      else if (uVar3 == 4) {
        lVar5 = __ftol((float10)(float)piVar2);
        piVar2 = (int *)lVar5;
      }
      else {
        *(undefined4 *)((int)param_1 + 0x90) = 0xe;
        FUN_004d4550(param_1);
        *(undefined4 *)((int)param_1 + 0x90) = 0;
        *(undefined4 *)((int)param_1 + 0xa4) = 0;
        piVar2 = local_18;
      }
    }
    if (piVar2 != (int *)0x0) {
      FUN_004d05e0(param_1,uVar4,local_4);
      return;
    }
    FUN_004d05e0(param_1,(uint)local_18,local_14);
  }
  return;
}


