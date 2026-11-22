
void __thiscall FUN_004f1650(void *this,undefined4 unused_stack_4,undefined4 param_p2)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = DAT_00583ac0;
  if (*(char *)((int)this + 0x74) != '\0') {
    DAT_00583ac0 = unused_stack_4;
    FUN_004d09a0(DAT_005a7b78,*(uint *)((int)this + 0x74),*(int **)((int)this + 0x78),1);
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
      uVar5 = *(uint *)(*piVar1 + -8 + iVar4 * 8);
    }
    else {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      uVar5 = 0;
    }
    uVar5 = uVar5 & 0xff;
    if (((uVar5 != 1) && (uVar5 != 2)) && (uVar5 != 4)) {
      *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
  }
  DAT_00583ac0 = uVar2;
  return;
}


