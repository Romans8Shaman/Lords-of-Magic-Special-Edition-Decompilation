
void __thiscall FUN_00402a10(void *this,void *param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x28),0);
  if ((pvVar1 != (void *)0x0) && (pvVar1 != param_1)) {
    iVar2 = FUN_00506110(param_1,(int)pvVar1);
    if (iVar2 != 0) {
      iVar2 = FUN_004a8b50(&DAT_005ae958,*(int *)((int)param_1 + 0x1c),*(int *)((int)pvVar1 + 0x1c))
      ;
      if (*(int *)((int)param_1 + 0x44) != iVar2) {
        FUN_004193e0(param_1,iVar2);
        return;
      }
    }
  }
  if (pvVar1 != (void *)0x0) {
    iVar2 = FUN_00506110(param_1,(int)pvVar1);
    if (iVar2 != 0) {
      iVar2 = FUN_0041cdf0(param_1,(int *)((int)this + 0x1c));
      if (iVar2 != 0) {
        FUN_004f20e0((int *)((int)this + 0x1c));
        return;
      }
    }
  }
  FUN_004010d0(this,(int)param_1);
  return;
}


