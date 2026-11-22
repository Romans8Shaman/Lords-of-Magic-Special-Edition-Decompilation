
void __fastcall FUN_004f6730(int param_1)

{
  int *this;
  int iVar1;
  
  if ((*(int *)(param_1 + 8) != 0) && (iVar1 = 0, -1 < *(int *)(param_1 + 0x18))) {
    do {
      this = *(int **)(*(int *)(param_1 + 8) + iVar1 * 4);
      if (this != (int *)0x0) {
        (/*IC:004f6750*/**(code **)(*this + 0x1c))(this);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= *(int *)(param_1 + 0x18));
  }
  return;
}


