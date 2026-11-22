
void __fastcall FUN_004cdac0(void *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_8;
  int *local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_8 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    local_8 = 0;
  }
  if ((char)local_8 == '\x06') {
    iVar1 = local_4[1] + -1;
    while (-1 < iVar1) {
      if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
        iVar2 = *(int *)((int)param_1 + 0x54) + 1;
        *(int *)((int)param_1 + 0x54) = iVar2;
        uVar4 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
        piVar3 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
      }
      else {
        *(undefined4 *)((int)param_1 + 0x90) = 6;
        FUN_004d4550(param_1);
        *(undefined4 *)((int)param_1 + 0x90) = 0;
        *(undefined4 *)((int)param_1 + 0xa4) = 0;
        uVar4 = 0;
        piVar3 = local_4;
      }
      iVar1 = iVar1 + -1;
      iVar2 = *local_4;
      *(undefined4 *)(iVar2 + 8 + iVar1 * 8) = uVar4;
      *(int **)(iVar2 + 0xc + iVar1 * 8) = piVar3;
    }
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar1 = *(int *)((int)param_1 + 0x50);
      iVar2 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar2;
      *(undefined4 *)(iVar1 + iVar2 * 8) = local_8;
      *(int **)(iVar1 + 4 + iVar2 * 8) = local_4;
      return;
    }
    *(undefined4 *)((int)param_1 + 0x90) = 3;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
  }
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
}


