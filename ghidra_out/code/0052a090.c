
void __cdecl op_getunitlevelrange(void *vm)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 *puStack_c;
  uint uStack_8;
  int iStack_4;
  
  iVar1 = FUN_0041bf10(vm,(int *)&puStack_c,(int *)&vm);
  if (iVar1 != 0) {
    piVar6 = &iStack_4;
    puVar5 = &uStack_8;
    pvVar4 = vm;
    uVar2 = FUN_004852e0(puStack_c);
    FUN_00529e40(puStack_c + (int)vm * 0x13 + 0x31,uVar2,(float)pvVar4,puVar5,piVar6);
    pvVar4 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar4);
      *(undefined4 *)((int)pvVar4 + 0x90) = 0;
      *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
    }
    else {
      iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
      iVar1 = *(int *)((int)pvVar4 + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar3 * 8) = uStack_8;
    }
    pvVar4 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) != 0) {
      iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
      iVar1 = *(int *)((int)pvVar4 + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar3 * 8) = iStack_4;
      return;
    }
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  return;
}


