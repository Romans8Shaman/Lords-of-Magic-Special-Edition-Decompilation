
void __cdecl op_enumaiterrainsprites(void *vm)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack_8;
  int *piStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_0041da00((int)vm);
  if (iVar3 == 0) {
    if (((char)uStack_8 == '\x06') && ((uStack_8 & 0x100) == 0)) goto LAB_004fd2ec;
    FUN_00404ab0(vm,0x12);
  }
  uStack_8 = 0;
LAB_004fd2ec:
  iVar3 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar3 == 0) {
    iVar3 = FUN_004fbe60(&DAT_005ae974,0,1);
    do {
      do {
        iVar2 = iVar3;
        if (iVar2 == 0) {
          return;
        }
        iVar3 = FUN_004fbe60(&DAT_005ae974,iVar2,1);
      } while ((*(int *)(iVar2 + 0x54) < 0) ||
              (((*(byte *)(iVar2 + 0x30) & 0x80) != 0 && (iVar4 = FUN_0050c7f0(iVar2), iVar4 == 0)))
              );
      uVar1 = *(undefined4 *)(iVar2 + 0x28);
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
      FUN_004d05e0(vm,uStack_8,piStack_4);
      iVar2 = *(int *)((int)vm + 0x6c);
      *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
    } while (iVar2 == 0);
  }
  return;
}


