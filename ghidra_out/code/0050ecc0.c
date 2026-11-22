
int __fastcall FUN_0050ecc0(int param_1)

{
  int iVar1;
  int iVar2;
  int *this;
  
  iVar1 = FUN_004b0ee0(&DAT_005cd304,*(int *)(param_1 + 0x48));
  this = *(int **)(param_1 + 0x58);
  if (this == (int *)0x0) {
    return 0;
  }
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x1c);
    iVar2 = (/*IC:0050ece7*/**(code **)(*this + 0x38))(this);
    if (iVar2 < iVar1) {
      return iVar1;
    }
    this = *(int **)(param_1 + 0x58);
  }
  iVar1 = (/*IC:0050ecf8*/**(code **)(*this + 0x38))(this);
  return iVar1;
}


