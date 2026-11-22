
undefined4 __fastcall FUN_0041bdb0(int param_1)

{
  void *this;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    this = (void *)(param_1 + 0xc4);
    do {
      FUN_00428630(this,*(undefined4 *)(param_1 + 0x28),iVar1);
      iVar1 = iVar1 + 1;
      this = (void *)((int)this + 0x4c);
    } while (iVar1 < *(int *)(param_1 + 0x4c));
  }
  return 1;
}


