
int __fastcall FUN_00522870(int param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    this = (void *)(param_1 + 0xc4);
    do {
      iVar1 = FUN_005228b0(this,*(undefined4 *)(param_1 + 0x28),iVar3);
      iVar2 = iVar2 + iVar1;
      iVar3 = iVar3 + 1;
      this = (void *)((int)this + 0x4c);
    } while (iVar3 < *(int *)(param_1 + 0x4c));
  }
  return iVar2;
}


