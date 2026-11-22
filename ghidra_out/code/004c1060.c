
void __thiscall FUN_004c1060(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    bVar1 = false;
    iVar2 = 0;
    do {
      iVar3 = *(int *)(param_1 + iVar2 * 4);
      if (iVar3 != 0) {
        iVar3 = *(int *)((int)this + iVar2 * 4 + 0xcfc) + iVar3;
        *(int *)((int)this + iVar2 * 4 + 0xcfc) = iVar3;
        if (iVar3 < 0) {
          *(undefined4 *)((int)this + iVar2 * 4 + 0xcfc) = 0;
        }
        if (iVar2 == 1) {
          *(int *)((int)this + 0x3c) = *(int *)((int)this + 0x3c) + *(int *)(param_1 + 4);
        }
        bVar1 = true;
        *(uint *)((int)this + 0x15d8) = *(uint *)((int)this + 0x15d8) | 0x40;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
    if (bVar1) {
      FUN_004869d0(&DAT_005aa12c,*(undefined4 *)((int)this + 0x15a8));
    }
  }
  return;
}


