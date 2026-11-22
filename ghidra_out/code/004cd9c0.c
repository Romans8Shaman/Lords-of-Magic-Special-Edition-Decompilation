
void __fastcall FUN_004cd9c0(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_8;
  int *local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar3 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar3;
    local_8 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar3 * 8);
    local_4 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    local_8 = 0;
  }
  if ((char)local_8 == '\x06') {
    iVar3 = 0;
    if (0 < local_4[1]) {
      do {
        uVar1 = *(undefined4 *)(*local_4 + iVar3 * 8);
        uVar2 = *(undefined4 *)(*local_4 + 4 + iVar3 * 8);
        if (*(int *)((int)param_1 + 0x54) == 0) {
          *(undefined4 *)((int)param_1 + 0x90) = 3;
          FUN_004d4550(param_1);
          *(undefined4 *)((int)param_1 + 0x90) = 0;
          *(undefined4 *)((int)param_1 + 0xa4) = 0;
        }
        else {
          iVar5 = *(int *)((int)param_1 + 0x50);
          iVar4 = *(int *)((int)param_1 + 0x54) + -1;
          *(int *)((int)param_1 + 0x54) = iVar4;
          *(undefined4 *)(iVar5 + iVar4 * 8) = uVar1;
          *(undefined4 *)(iVar5 + 4 + iVar4 * 8) = uVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_4[1]);
    }
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar3 = *(int *)((int)param_1 + 0x50);
      iVar5 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar5;
      *(undefined4 *)(iVar3 + iVar5 * 8) = local_8;
      *(int **)(iVar3 + 4 + iVar5 * 8) = local_4;
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


