
void __cdecl op_cancastspell_q(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  void *pvStack_54;
  int iStack_50;
  float fStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  void *pvStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_44 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_40 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_44 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_44,(uint *)&vm,&uStack_48,&fStack_4c);
  if (iVar2 == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
  }
  else {
    iVar2 = FUN_0041bf10(pvVar1,(int *)&pvStack_54,&iStack_50);
    if (iVar2 == 0) {
      return;
    }
    pvStack_3c = vm;
    uStack_38 = 0xffffffff;
    uStack_34 = 0xffffffff;
    uStack_30 = 0xffffffff;
    uStack_2c = 0xffffffff;
    uStack_28 = 0xffffffff;
    uStack_24 = 0xffffffff;
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffffffff;
    uStack_10 = 0xffffffff;
    uStack_c = 0xffffffff;
    uStack_8 = 0xffffffff;
    uStack_4 = 0xffffffff;
    uStack_18 = *(undefined4 *)((int)pvStack_54 + 0x28);
    iStack_14 = iStack_50;
    iVar2 = FUN_0041cdf0(pvStack_54,(int *)&pvStack_3c);
    if (iVar2 == 0) {
      if (*(int *)((int)pvVar1 + 0x54) != 0) {
        iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
        *(int *)((int)pvVar1 + 0x54) = iVar3;
        iVar2 = *(int *)((int)pvVar1 + 0x50);
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0;
        return;
      }
    }
    else if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar3;
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
      return;
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
  }
  FUN_004d4550(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  return;
}


