
void __cdecl op_requestleader(void *vm)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  void *pvStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      pvStack_4 = (void *)((int)pvStack_4 >> 8);
    }
    else if (uVar3 == 4) {
      lVar5 = __ftol((float10)(float)pvStack_4);
      pvStack_4 = (void *)lVar5;
    }
    else {
      FUN_00404ab0(vm,0xe);
      pvStack_4 = vm;
    }
  }
  uVar2 = FUN_004b6af0(&DAT_005cd358,pvStack_4);
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar4 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar4;
  iVar1 = *(int *)((int)vm + 0x50);
  *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
  *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = uVar2;
  return;
}


