
void __cdecl op_enumallarmies(void *vm)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar6 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uVar6 = 0;
  }
  iVar2 = FUN_0041da00((int)vm);
  if (iVar2 == 0) {
    if (((char)uVar6 != '\x06') || ((uVar6 & 0x100) != 0)) {
      *(undefined4 *)((int)vm + 0x90) = 0x12;
      FUN_004d4550(vm);
      uVar6 = 0;
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
    }
  }
  else {
    uVar6 = 0;
  }
  if ((char)uVar6 != '\0') {
    puVar3 = FUN_004fbed0(&DAT_005ae974,0);
    do {
      if (puVar3 == (undefined4 *)0x0) {
        return;
      }
      puVar4 = FUN_004fbed0(&DAT_005ae974,(int)puVar3);
      uVar1 = puVar3[10];
      if (*(int *)((int)vm + 0x54) == 0) {
        *(undefined4 *)((int)vm + 0x90) = 3;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
      }
      else {
        iVar2 = *(int *)((int)vm + 0x50);
        iVar5 = *(int *)((int)vm + 0x54) + -1;
        *(int *)((int)vm + 0x54) = iVar5;
        *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = uVar1;
      }
      FUN_004d05e0(vm,uVar6,piStack_4);
      iVar2 = *(int *)((int)vm + 0x6c);
      *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
      puVar3 = puVar4;
    } while (iVar2 == 0);
  }
  return;
}


