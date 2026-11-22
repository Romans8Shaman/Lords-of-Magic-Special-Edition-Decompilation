
void __thiscall FUN_00473870(void *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  if ((((*(int *)((int)this + 0x40) != 0) && (*(int *)((int)this + 0x48) != 0)) &&
      (*(int *)((int)this + 0x38) == 0)) && (param_1 != -1)) {
    *(int *)((int)this + 0x30) = param_1;
    pvVar2 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
      iVar1 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar3 * 8) = param_1;
    }
    if (DAT_005aa08c != 0) {
      FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x48),*(int **)((int)this + 0x4c));
      return;
    }
    FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x40),*(int **)((int)this + 0x44));
  }
  return;
}


