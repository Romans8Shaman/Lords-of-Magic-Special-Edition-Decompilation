
undefined4 __thiscall FUN_004869d0(void *this,undefined4 param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 in_EAX;
  int iVar3;
  undefined4 uVar4;
  
  pvVar2 = DAT_005a7b78;
  uVar4 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)((int)this + 0x23064));
  if (*(char *)((int)this + 0x23064) != '\0') {
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
    uVar4 = FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x23064),*(int **)((int)this + 0x23068))
    ;
  }
  return uVar4;
}


