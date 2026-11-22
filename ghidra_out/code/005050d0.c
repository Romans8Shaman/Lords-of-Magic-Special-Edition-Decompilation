
void __fastcall FUN_005050d0(void *param_1)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)((int)param_1 + 0x4d488);
  do {
    if ((iVar2 != 0) && (*piVar3 != 0)) {
      pcVar1 = FUN_00505110(param_1,iVar2,0xffffffff);
      FUN_0053a790(pcVar1);
      *piVar3 = 0;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 8);
  return;
}


