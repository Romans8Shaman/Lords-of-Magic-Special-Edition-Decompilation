
void __cdecl op_getquestdefinition(void *vm)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  pvVar2 = vm;
  uStack_10 = 0xffffffff;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,&uStack_10,&uStack_c,(float *)&vm);
  if (iVar3 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    if (*(int *)((int)pvVar2 + 0x54) != 0) {
      iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
      *(int *)((int)pvVar2 + 0x54) = iVar4;
      iVar3 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
      return;
    }
  }
  else {
    iVar3 = FUN_004c3b60(&DAT_005cd2e0,uStack_10);
    if (iVar3 == 0) {
      if (*(int *)((int)pvVar2 + 0x54) != 0) {
        iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar4;
        iVar3 = *(int *)((int)pvVar2 + 0x50);
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
        return;
      }
    }
    else {
      puVar5 = (undefined4 *)FUN_004c3b00(&DAT_005cd2e0,uStack_10);
      if (puVar5 == (undefined4 *)0x0) {
        if (*(int *)((int)pvVar2 + 0x54) != 0) {
          iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
          *(int *)((int)pvVar2 + 0x54) = iVar4;
          iVar3 = *(int *)((int)pvVar2 + 0x50);
          *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
          return;
        }
      }
      else {
        uVar1 = *puVar5;
        if (*(int *)((int)pvVar2 + 0x54) != 0) {
          iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
          *(int *)((int)pvVar2 + 0x54) = iVar4;
          iVar3 = *(int *)((int)pvVar2 + 0x50);
          *(undefined4 *)(iVar3 + iVar4 * 8) = 8;
          *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
          return;
        }
      }
    }
  }
  *(undefined4 *)((int)pvVar2 + 0x90) = 3;
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
}


