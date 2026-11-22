
undefined4 __thiscall FUN_00420340(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x24);
  if (*(int *)((int)this + 0x18) < iVar3) {
    return 1;
  }
  while ((((iVar1 = *(int *)(*(int *)((int)this + 8) + iVar3 * 4), iVar1 == 0 ||
           (*(int *)(iVar1 + 4) != 0)) || (*(int *)(iVar1 + 0x48) != param_1)) ||
         ((((~*(uint *)(iVar1 + 0x30) & 0x100) == 0 || (iVar2 = FUN_00407d50(iVar1), iVar2 != 0)) ||
          ((iVar2 = FUN_00420620(iVar1), iVar2 != 0 || ((*(uint *)(iVar1 + 0x30) & 0x4000000) != 0))
          ))))) {
    iVar3 = iVar3 + 1;
    if (*(int *)((int)this + 0x18) < iVar3) {
      return 1;
    }
  }
  return 0;
}


