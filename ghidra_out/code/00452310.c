
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00452310(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int aiStack_14 [5];
  
  piVar3 = param_1;
  FUN_004fd4b0(param_1);
  _DAT_00583468 = 0xfffffffe;
  _DAT_0058345c = *(undefined4 *)((int)this + 0x1c);
  uVar6 = 0;
  puVar5 = (undefined4 *)((int)this + 0xc4);
  param_1 = (int *)0x9;
  do {
    FUN_0043bac0(&DAT_00583440,puVar5);
    _DAT_0058348c = (/*IC:00452354*/**(code **)(*(int *)this + 0x3c))();
    iVar1 = FUN_00441000(&DAT_00583440,aiStack_14);
    if (iVar1 != 0) {
      iVar1 = 5;
      piVar2 = piVar3;
      do {
        *piVar2 = *piVar2 + *(int *)(((int)aiStack_14 - (int)piVar3) + (int)piVar2);
        piVar2 = piVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      uVar6 = 1;
    }
    puVar5 = puVar5 + 0x11;
    param_1 = (int *)((int)param_1 + -1);
  } while (param_1 != (int *)0x0);
  if (*(int **)((int)this + 0x44) != (int *)0x0) {
    iVar1 = (/*IC:004523a8*/**(code **)(**(int **)((int)this + 0x44) + 0x40))(aiStack_14);
    if (iVar1 != 0) {
      iVar1 = 5;
      piVar2 = piVar3;
      do {
        *piVar2 = *piVar2 + *(int *)((int)piVar2 + ((int)aiStack_14 - (int)piVar3));
        piVar2 = piVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      uVar6 = 1;
    }
  }
  iVar1 = FUN_00453190((int)this,aiStack_14);
  if (iVar1 != 0) {
    iVar1 = (int)aiStack_14 - (int)piVar3;
    iVar4 = 5;
    do {
      *piVar3 = *piVar3 + *(int *)((int)piVar3 + iVar1);
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar6 = 1;
  }
  return uVar6;
}


