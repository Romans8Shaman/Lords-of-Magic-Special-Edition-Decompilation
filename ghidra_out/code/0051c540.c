
void __fastcall FUN_0051c540(void *param_1)

{
  int *this;
  int iVar1;
  uint uVar2;
  
  if (DAT_00573be4 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00482ac0(&DAT_005aa12c,DAT_00573be4,3);
  }
  this = (int *)FUN_0051bd20(uVar2);
  if (this == (int *)0x0) {
    DAT_00573be4 = 0xffffffff;
    FUN_0051c6b0((int)param_1);
    return;
  }
  do {
    iVar1 = (/*IC:0051c570*/**(code **)(*this + 0x3c))(this);
    if (iVar1 == *(int *)((int)param_1 + 0x68)) {
      DAT_00573be4 = this[10];
      FUN_0051c4c0(param_1,(int)this);
      return;
    }
    this = (int *)FUN_0051bd20((int)this);
  } while (this != (int *)0x0);
  DAT_00573be4 = 0xffffffff;
  FUN_0051c6b0((int)param_1);
  return;
}


