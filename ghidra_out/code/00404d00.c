
void __thiscall FUN_00404d00(void *this,void *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0xc),0);
  if (uVar1 != 0) {
    FUN_004aeff0(param_1,uVar1);
    uVar2 = FUN_0047c9e0(&DAT_005aa12c,*(int *)(uVar1 + 0x48));
    if (uVar2 != 0) {
      FUN_00404ae0((void *)(uVar1 + 0x68),(int)param_1,uVar1);
    }
  }
  return;
}


