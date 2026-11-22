
undefined4 __thiscall FUN_0043dde0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_005ae98c;
  iVar3 = DAT_005ae998;
  if (DAT_005ae98c < DAT_005ae998) {
    return 0xffffffff;
  }
  while ((((iVar2 = FUN_004f6000(&DAT_005ae974,iVar3), iVar2 == 0 || (*(int *)(iVar2 + 4) != 2)) ||
          (*(int *)(iVar2 + 0x80) != *(int *)((int)this + 0x28))) ||
         (*(int *)(iVar2 + 0x58) != param_1))) {
    iVar3 = iVar3 + 1;
    if (iVar1 < iVar3) {
      return 0xffffffff;
    }
  }
  return *(undefined4 *)(iVar2 + 0x28);
}


