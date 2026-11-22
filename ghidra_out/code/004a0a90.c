
void __thiscall FUN_004a0a90(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_005ae98c;
  iVar4 = DAT_005ae998;
  if (DAT_005ae998 <= DAT_005ae98c) {
    while ((((iVar2 = FUN_004f6000(&DAT_005ae974,iVar4), iVar2 == 0 || (*(int *)(iVar2 + 4) != 0))
            || (*(int *)(iVar2 + 0x48) != param_1)) ||
           ((iVar3 = FUN_004abdc0(this,*(int *)(iVar2 + 0x1c),param_2), iVar3 != 0 ||
            (iVar3 = FUN_00416a30(iVar2), iVar3 != 0))))) {
      iVar4 = iVar4 + 1;
      if (iVar1 < iVar4) {
        return;
      }
    }
    FUN_004a9220(this,*(int *)(iVar2 + 0x1c),2,0,param_2);
  }
  return;
}


