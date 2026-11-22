
int __fastcall FUN_004bfdf0(int param_1)

{
  int *this;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (this = (int *)FUN_004fbe60(&DAT_005ae974,0,3); this != (int *)0x0;
      this = (int *)FUN_004fbe60(&DAT_005ae974,(int)this,3)) {
    iVar1 = (/*IC:004bfe0e*/**(code **)(*this + 0x3c))(this);
    if (iVar1 == *(int *)(param_1 + 0x15a8)) {
      iVar2 = iVar2 + this[0x38];
    }
  }
  return iVar2;
}


