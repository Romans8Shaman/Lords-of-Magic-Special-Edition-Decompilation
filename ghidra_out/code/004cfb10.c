
void __fastcall FUN_004cfb10(void *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    uVar5 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(uint *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    uVar5 = 0;
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  iVar2 = *(int *)((int)param_1 + 0x60);
  if (iVar2 < *(int *)((int)param_1 + 100)) {
    do {
      puVar3 = FUN_004d31b0(param_1,*(int **)(*(int *)((int)param_1 + 0x5c) + iVar2 * 4),uVar5,
                            local_4);
      if (puVar3 != (uint *)0x0) {
        uVar5 = puVar3[2];
        uVar1 = puVar3[3];
        if (*(int *)((int)param_1 + 0x54) != 0) {
          iVar4 = *(int *)((int)param_1 + 0x54) + -1;
          *(int *)((int)param_1 + 0x54) = iVar4;
          iVar2 = *(int *)((int)param_1 + 0x50);
          *(uint *)(iVar2 + iVar4 * 8) = uVar5;
          *(uint *)(iVar2 + 4 + iVar4 * 8) = uVar1;
          return;
        }
        *(undefined4 *)((int)param_1 + 0x90) = 3;
        goto LAB_004cfbc8;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)param_1 + 100));
  }
  *(uint *)((int)param_1 + 0x9c) = uVar5;
  *(uint *)((int)param_1 + 0xa0) = local_4;
  *(undefined4 *)((int)param_1 + 0x90) = 0x11;
LAB_004cfbc8:
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
}


