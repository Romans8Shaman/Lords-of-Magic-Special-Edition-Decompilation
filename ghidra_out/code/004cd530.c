
void __fastcall FUN_004cd530(void *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    cVar3 = (char)*(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(int *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    cVar3 = '\0';
  }
  if (cVar3 == '\x03') {
    piVar1 = *(int **)((int)param_1 + local_4 * 8);
    if (piVar1 != (int *)0x0) {
      FUN_005394d0(piVar1);
      *(undefined4 *)((int)param_1 + local_4 * 8) = 0;
      return;
    }
    *(undefined4 *)((int)param_1 + 0x90) = 0x14;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
  }
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
}


