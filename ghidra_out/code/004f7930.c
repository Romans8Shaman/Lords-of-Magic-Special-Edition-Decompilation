
void __fastcall FUN_004f7930(int param_1)

{
  int *this;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 <= *(int *)(param_1 + 0x18)) {
    do {
      this = *(int **)(*(int *)(param_1 + 8) + iVar1 * 4);
      if (this != (int *)0x0) {
        (/*IC:004f794a*/**(code **)(*this + 0x4c))(this);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= *(int *)(param_1 + 0x18));
  }
  return;
}


