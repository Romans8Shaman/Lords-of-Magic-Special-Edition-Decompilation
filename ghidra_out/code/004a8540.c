
undefined4 __fastcall FUN_004a8540(int param_1)

{
  LPCSTR pCVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = &DAT_00556168;
  pCVar1 = (LPCSTR)FUN_004a4810();
  piVar2 = (int *)FUN_00539610(pCVar1,pcVar3);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  FUN_004f6c60((void *)(param_1 + 0x1c),piVar2);
  FUN_005394d0(piVar2);
  return 1;
}


