
undefined4 __thiscall FUN_0043de80(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = DAT_005ae98c;
  iVar3 = DAT_005ae998;
  if (DAT_005ae98c < DAT_005ae998) {
    return 0xffffffff;
  }
  while (((uVar2 = FUN_00482ac0(&DAT_005aa12c,iVar3,2), uVar2 == 0 ||
          (*(int *)(uVar2 + 0x80) != *(int *)((int)this + 0x28))) ||
         (*(int *)(uVar2 + 0x58) != param_1))) {
    iVar3 = iVar3 + 1;
    if (iVar1 < iVar3) {
      return 0xffffffff;
    }
  }
  return *(undefined4 *)(uVar2 + 0x28);
}


