
void __fastcall FUN_004cf320(void *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar5 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar5;
    uVar3 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar5 * 8);
    local_4 = *(char **)(*(int *)((int)param_1 + 0x50) + -4 + iVar5 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar3 = 0;
  }
  iVar5 = *(int *)((int)param_1 + 0x90);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  if (iVar5 != 0) {
    return;
  }
  switch(uVar3 & 0xff) {
  case 3:
    iVar5 = *(int *)((int)param_1 + (int)local_4 * 8);
    if (iVar5 == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 0x14;
      break;
    }
    uVar3 = FUN_00548ec0(iVar5);
    FUN_00548e10(uVar3);
  default:
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
    break;
  case 6:
  case 7:
    iVar5 = *(int *)(local_4 + 4);
    goto LAB_004cf3b2;
  case 8:
    uVar3 = 0xffffffff;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *local_4;
      local_4 = local_4 + 1;
    } while (cVar1 != '\0');
    iVar5 = ~uVar3 - 1;
LAB_004cf3b2:
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar4 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar4;
      iVar2 = *(int *)((int)param_1 + 0x50);
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(int *)(iVar2 + 4 + iVar4 * 8) = iVar5;
      return;
    }
    *(undefined4 *)((int)param_1 + 0x90) = 3;
  }
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
}


