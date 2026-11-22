
undefined4 __thiscall FUN_004a8580(void *this,int param_1)

{
  LPCSTR pCVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = &DAT_005572ec;
  pCVar1 = (LPCSTR)FUN_004a4810();
  piVar2 = (int *)FUN_00539610(pCVar1,pcVar4);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  if ((param_1 == 0) && (iVar3 = 0, 0 < *(int *)((int)this + 0x68))) {
    do {
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*(int *)((int)this + 100) + -8 + iVar3 * 8) = 0;
    } while (iVar3 < *(int *)((int)this + 0x68));
  }
  DAT_005aa12c = DAT_0055b1b0;
  FUN_004f73e0((void *)((int)this + 0x1c),piVar2,param_1);
  FUN_005394d0(piVar2);
  return 1;
}


