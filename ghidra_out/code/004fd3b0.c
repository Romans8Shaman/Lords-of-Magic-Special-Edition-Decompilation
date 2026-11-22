
void __cdecl op_enumspelleffects(void *vm)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uVar5 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uVar5 = 0;
  }
  iVar3 = FUN_0041da00((int)vm);
  if (iVar3 == 0) {
    if (((char)uVar5 == '\x06') && ((uVar5 & 0x100) == 0)) goto LAB_004fd411;
    FUN_00404ab0(vm,0x12);
  }
  uVar5 = 0;
LAB_004fd411:
  iVar3 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar3 == 0) {
    for (iVar3 = FUN_004fbe60(&DAT_005ae974,0,4); iVar3 != 0;
        iVar3 = FUN_004fbe60(&DAT_005ae974,iVar3,4)) {
      uVar1 = *(undefined4 *)(iVar3 + 0x28);
      if (*(int *)((int)vm + 0x54) == 0) {
        *(undefined4 *)((int)vm + 0x90) = 3;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
      }
      else {
        iVar2 = *(int *)((int)vm + 0x50);
        iVar4 = *(int *)((int)vm + 0x54) + -1;
        *(int *)((int)vm + 0x54) = iVar4;
        *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
      }
      FUN_004d05e0(vm,uVar5,piStack_4);
      iVar2 = *(int *)((int)vm + 0x6c);
      *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
      if (iVar2 != 0) {
        return;
      }
    }
  }
  return;
}


