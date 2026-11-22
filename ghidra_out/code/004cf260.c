
void __fastcall FUN_004cf260(void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar2 = 0;
  }
  iVar1 = *(int *)((int)param_1 + 0x90);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  if (iVar1 == 0) {
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar3 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar3;
      iVar1 = *(int *)((int)param_1 + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar3 * 8) = ((uVar2 & 0x100) != 0) - 1;
      return;
    }
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  return;
}


