
undefined4 __fastcall FUN_00417890(int param_1)

{
  void *this;
  int iVar1;
  int *this_00;
  int iVar2;
  
  this = (void *)(param_1 + 0x4848);
  iVar1 = FUN_004fbe60(this,0,0);
  while( true ) {
    if (iVar1 == 0) {
      this_00 = (int *)FUN_004fbe60(this,0,3);
      if (this_00 == (int *)0x0) {
        return 0;
      }
      while ((iVar1 = FUN_00451bc0((int)this_00), iVar1 < 1 ||
             (iVar1 = *(int *)(param_1 + 0x228a8), iVar2 = (/*IC:004178f6*/**(code **)(*this_00 + 0x3c))(this_00),
             iVar2 != iVar1))) {
        this_00 = (int *)FUN_004fbe60(this,(int)this_00,3);
        if (this_00 == (int *)0x0) {
          return 0;
        }
      }
      return 1;
    }
    if (((*(uint *)(iVar1 + 0x30) & 0x40000) != 0) &&
       (*(int *)(iVar1 + 0x48) == *(int *)(param_1 + 0x228a8))) break;
    iVar1 = FUN_004fbe60(this,iVar1,0);
  }
  return 1;
}


