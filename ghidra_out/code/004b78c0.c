
int __fastcall FUN_004b78c0(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *(int *)((int)param_1 + 0x100);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  if (iVar1 < 2) {
    return 1;
  }
  iVar1 = 1;
  while( true ) {
    iVar2 = *(int *)((int)param_1 + 0x100);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    if (iVar2 < iVar1) break;
    iVar2 = FUN_004b7890(param_1,iVar1);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) && (*(int *)(iVar2 + 0x21) == 0)) {
      iVar3 = iVar3 + 1;
    }
    iVar1 = iVar1 + 1;
  }
  return iVar3;
}


