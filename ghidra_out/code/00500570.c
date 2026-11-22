
undefined4 __thiscall FUN_00500570(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_005005f0(this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0048d740(iVar1);
  iVar1 = *(int *)((int)this + 0x25598) + -1;
  if (-1 < iVar1) {
    iVar3 = iVar1 * 0x80;
    do {
      iVar2 = FUN_0048d730(*(int *)((int)this + 0x255a0) + iVar3);
      if (iVar2 != 0) {
        *(int *)((int)this + 0x25598) = iVar1 + 1;
        return 1;
      }
      iVar1 = iVar1 + -1;
      iVar3 = iVar3 + -0x80;
    } while (-1 < iVar1);
  }
  *(undefined4 *)((int)this + 0x25598) = 0;
  return 1;
}


