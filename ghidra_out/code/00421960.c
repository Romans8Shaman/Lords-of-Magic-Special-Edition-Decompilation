
int __thiscall FUN_00421960(void *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    do {
      iVar1 = FUN_005221f0(*(undefined4 *)((int)this + 0x28),iVar3);
      iVar2 = iVar2 + iVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x4c));
  }
  return iVar2;
}


