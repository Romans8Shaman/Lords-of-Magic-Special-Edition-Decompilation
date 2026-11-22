
void __fastcall FUN_004843d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  char *pcVar5;
  
  DAT_00583560 = 0;
  if (DAT_005d1e84 != 0) {
    *(undefined4 *)(DAT_005d1e84 + 0xd8) = 1;
  }
  FUN_004b4a50(0x5cd358);
  pvVar3 = DAT_005a7b78;
  uVar1 = *(undefined4 *)(param_1 + 0x4fb4);
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  else {
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
    iVar2 = *(int *)((int)pvVar3 + 0x50);
    *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
  }
  FUN_004d05e0(DAT_005a7b78,*(uint *)(param_1 + 0x4fb8),*(int **)(param_1 + 0x4fbc));
  FUN_005000f0(&DAT_00584ae8,2);
  FUN_00484220(param_1);
  FUN_0048cdb0();
  DAT_00584aa4 = 0;
  pcVar5 = FUN_00505110(&DAT_00584ae8,5,0xffffffff);
  FUN_0053a790(pcVar5);
  return;
}


