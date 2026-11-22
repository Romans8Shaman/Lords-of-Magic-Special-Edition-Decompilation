
void __fastcall FUN_004cfc00(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)param_1 + 0x54);
  iVar2 = *(int *)((int)param_1 + 0x58);
  if (iVar1 == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  iVar4 = iVar1 + -1;
  *(int *)((int)param_1 + 0x54) = iVar4;
  iVar3 = *(int *)((int)param_1 + 0x50);
  *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
  *(int *)(iVar3 + 4 + iVar4 * 8) = iVar2 - iVar1;
  return;
}


