
void __cdecl op_have_retreated(void *vm)

{
  byte bVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  pvVar3 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar4 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar4;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar4 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar4 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar4 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar4 == 0) {
    *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
  }
  else {
    uVar5 = FUN_00482ac0(&DAT_005aa12c,(int)vm,1);
    if (uVar5 == 0) {
      return;
    }
    bVar1 = *(byte *)(uVar5 + 0x44);
    uVar2 = *(undefined4 *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
    if (*(int *)((int)pvVar3 + 0x54) != 0) {
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      iVar6 = *(int *)((int)pvVar3 + 0x54) + -1;
      *(int *)((int)pvVar3 + 0x54) = iVar6;
      *(undefined4 *)(iVar4 + iVar6 * 8) = 1;
      *(uint *)(iVar4 + 4 + iVar6 * 8) = (uint)bVar1 & 1 << ((byte)uVar2 & 0x1f);
      return;
    }
    *(undefined4 *)((int)pvVar3 + 0x90) = 3;
  }
  FUN_004d4550(pvVar3);
  *(undefined4 *)((int)pvVar3 + 0x90) = 0;
  *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  return;
}


