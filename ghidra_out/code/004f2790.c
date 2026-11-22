
undefined4 __thiscall FUN_004f2790(void *this,int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  float local_4;
  
  iVar3 = FUN_004efe80(&DAT_005aee6c,*(int *)this);
  pvVar2 = DAT_005a7b78;
  if ((iVar3 != 0) && (((-1 < param_1 || (-1 < param_2)) && (*(char *)(iVar3 + 0x9c) != '\0')))) {
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
      iVar5 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar5 + iVar4 * 8) = 1;
      *(int *)(iVar5 + 4 + iVar4 * 8) = param_1;
    }
    pvVar2 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
      *(undefined4 *)(iVar5 + iVar4 * 8) = 1;
      *(int *)(iVar5 + 4 + iVar4 * 8) = param_2;
    }
    pvVar2 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
      *(undefined4 *)(iVar5 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar5 + 4 + iVar4 * 8) = param_3;
    }
    puVar7 = &DAT_00584c1c;
    for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *(undefined4 *)this;
      this = (undefined4 *)((int)this + 4);
      puVar7 = puVar7 + 1;
    }
    FUN_004d09a0(DAT_005a7b78,*(uint *)(iVar3 + 0x9c),*(int **)(iVar3 + 0xa0),-2);
    pvVar2 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
      uVar6 = *(uint *)(*piVar1 + -8 + iVar3 * 8);
      local_4 = *(float *)(*piVar1 + -4 + iVar3 * 8);
    }
    else {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
      uVar6 = 0;
    }
    uVar6 = uVar6 & 0xff;
    if (uVar6 == 1) {
      return local_4;
    }
    if (uVar6 == 2) {
      return (int)local_4 >> 8;
    }
    if (uVar6 == 4) {
      lVar8 = __ftol((float10)local_4);
      return (int)lVar8;
    }
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  return 0;
}


