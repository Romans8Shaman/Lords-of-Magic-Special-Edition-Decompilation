
undefined4 __thiscall FUN_00483f30(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (*(int *)((int)this + 0x5034) != 0) {
    if (DAT_005d1e84 == 0) {
      bVar3 = true;
    }
    else {
      iVar1 = *(int *)(DAT_005d1e84 + 0x390);
      iVar2 = FUN_004b7dd0(DAT_005d1e84);
      bVar3 = iVar1 == iVar2;
    }
    if (bVar3) {
      if ((param_1[1] != DAT_00583ad4) || (param_1[2] != DAT_00583ad8)) {
        FUN_004b7410(&DAT_005cd358,'M',*param_1,-1);
        return 1;
      }
      *(uint *)((int)this + 0x5038) =
           *(uint *)((int)this + 0x5038) & ~(1 << ((byte)*param_1 & 0x1f));
      *(uint *)((int)this + 0x503c) =
           *(uint *)((int)this + 0x503c) & ~(1 << ((byte)*param_1 & 0x1f));
    }
  }
  return 1;
}


