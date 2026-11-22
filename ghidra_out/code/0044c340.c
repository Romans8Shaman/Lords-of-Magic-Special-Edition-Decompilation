
void __cdecl op_getunitmana(void *vm)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iStack_4;
  
  pvVar2 = vm;
  iVar3 = FUN_0041bf10(vm,&iStack_4,(int *)&vm);
  if (iVar3 != 0) {
    uVar4 = FUN_00529140((int *)(iStack_4 + 0xc4 + (int)vm * 0x4c));
    if (uVar4 == 0) {
      if (*(int *)((int)pvVar2 + 0x54) != 0) {
        iVar5 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar5;
        iVar3 = *(int *)((int)pvVar2 + 0x50);
        *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = 0xffffffff;
        return;
      }
    }
    else {
      uVar4 = FUN_00529180((int *)(iStack_4 + 0xc4 + (int)vm * 0x4c));
      if (uVar4 == 0) {
        if (*(int *)((int)pvVar2 + 0x54) != 0) {
          iVar5 = *(int *)((int)pvVar2 + 0x54) + -1;
          *(int *)((int)pvVar2 + 0x54) = iVar5;
          iVar3 = *(int *)((int)pvVar2 + 0x50);
          *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
          *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = 0xffffffff;
          return;
        }
      }
      else {
        uVar1 = *(undefined4 *)(uVar4 + 0x14);
        if (*(int *)((int)pvVar2 + 0x54) != 0) {
          iVar5 = *(int *)((int)pvVar2 + 0x54) + -1;
          *(int *)((int)pvVar2 + 0x54) = iVar5;
          iVar3 = *(int *)((int)pvVar2 + 0x50);
          *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
          *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar1;
          return;
        }
      }
    }
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  return;
}


