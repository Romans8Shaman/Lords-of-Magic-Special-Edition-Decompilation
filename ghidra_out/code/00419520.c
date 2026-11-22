
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00419520(void *this,uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  
  uVar2 = param_1;
  puVar1 = FUN_004c6fc0();
  FUN_004a4c30(puVar1,uVar2);
  pvVar5 = this;
  puVar1 = FUN_004c6fc0();
  uVar2 = FUN_00531fb0(puVar1,param_1,(int)pvVar5);
  iVar3 = FUN_004c1c50((int)this);
  if (iVar3 == 1) {
    iVar3 = FUN_004c1cc0((int)this);
    if (iVar3 == 1) {
      lVar4 = __ftol((float10)(int)uVar2 * (float10)_DAT_0054d428);
      uVar2 = uVar2 + (int)lVar4;
    }
  }
  FUN_00419360(this,-uVar2);
  return;
}


