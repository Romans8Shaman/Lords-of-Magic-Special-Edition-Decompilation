
void __thiscall FUN_004876c0(void *this,undefined4 param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar2 = DAT_005a7b78;
  if (*(char *)this != '\0') {
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
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = param_1;
    }
    FUN_004d05e0(DAT_005a7b78,*(uint *)this,*(int **)((int)this + 4));
  }
  return;
}


