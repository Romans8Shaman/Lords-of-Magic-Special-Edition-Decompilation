
int __fastcall FUN_004bdf10(int param_1)

{
  int *this;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (this = FUN_004fbed0(&DAT_005ae974,0); this != (int *)0x0;
      this = FUN_004fbed0(&DAT_005ae974,(int)this)) {
    iVar1 = (/*IC:004bdf2c*/**(code **)(*this + 0x3c))(this);
    if (iVar1 == *(int *)(param_1 + 0x15a8)) {
      iVar2 = iVar2 + this[0x13];
    }
  }
  return iVar2;
}


