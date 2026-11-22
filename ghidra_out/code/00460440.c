
void __thiscall FUN_00460440(void *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x24);
  if (iVar2 <= *(int *)((int)this + 0x18)) {
    do {
      iVar1 = FUN_004f6000(this,iVar2);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0)) {
        iVar1 = *(int *)(iVar1 + 0xc4);
        if ((iVar1 < 0) || ((DAT_005cd2f0 <= iVar1 || (DAT_005cd2f4 == 0)))) {
          iVar1 = 0;
        }
        else {
          iVar1 = DAT_005cd2f4 + iVar1 * 1000;
        }
        if (iVar1 != 0) {
          if (-1 < *(int *)(iVar1 + 0x29c)) {
            FUN_00478b80(&DAT_00585408,*(int *)(iVar1 + 0x29c));
          }
          if (-1 < *(int *)(iVar1 + 0x2a0)) {
            FUN_00478b80(&DAT_00585408,*(int *)(iVar1 + 0x2a0));
          }
          if (-1 < *(int *)(iVar1 + 0x2a4)) {
            FUN_00478b80(&DAT_00585408,*(int *)(iVar1 + 0x2a4));
          }
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)((int)this + 0x18));
  }
  return;
}


