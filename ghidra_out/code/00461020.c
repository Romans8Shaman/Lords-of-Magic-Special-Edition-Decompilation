
undefined4 __thiscall FUN_00461020(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_00460fb0((int)this);
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *(uint *)((int)this + 0x5028) = ~uVar2;
    FUN_00460eb0(this,param_1[2]);
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        *(uint *)((int)this + 0x5028) =
             *(uint *)((int)this + 0x5028) & ~(1 << ((byte)param_1[1] & 0x1f));
        return 1;
      }
      return 0;
    }
    uVar3 = *(uint *)((int)this + 0x5028) | 1 << ((byte)param_1[1] & 0x1f);
    *(uint *)((int)this + 0x5028) = uVar3;
    if ((uVar2 & uVar3) == uVar2) {
      FUN_00460eb0(this,0);
      return 1;
    }
  }
  return 1;
}


