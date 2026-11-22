
void __fastcall FUN_004d3ed0(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 0x54) == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  iVar1 = *(int *)((int)param_1 + 0x50);
  iVar2 = *(int *)((int)param_1 + 0x54) + -1;
  *(int *)((int)param_1 + 0x54) = iVar2;
  *(undefined4 *)(iVar1 + iVar2 * 8) = *(undefined4 *)((int)param_1 + 0xa60);
  *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = *(undefined4 *)((int)param_1 + 0xa64);
  return;
}


