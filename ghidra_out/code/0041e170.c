
undefined4 __thiscall FUN_0041e170(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x4c);
  iVar3 = 0;
  uVar2 = 1;
  if (0 < iVar1) {
    do {
      if ((param_1 & uVar2) == 0) {
        iVar3 = iVar3 + 1;
      }
      else {
        FUN_004164e0(this,iVar3,1);
      }
      uVar2 = uVar2 * 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 1;
}


