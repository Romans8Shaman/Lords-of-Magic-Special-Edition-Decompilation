
void __cdecl op_bind(void *vm)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uStack_10;
  int *piStack_c;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_10 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_c = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uStack_10 = 0;
  }
  if (((char)uStack_10 == '\x06') && ((uStack_10 & 0x100) == 0)) {
    iVar2 = 0;
    piVar1 = *(int **)(*(int *)((int)vm + 0x5c) + -4 + *(int *)((int)vm + 100) * 4);
    if (0 < piStack_c[1]) {
      do {
        iVar4 = *piStack_c;
        uVar5 = *(uint *)(iVar4 + iVar2 * 8);
        puVar3 = (uint *)(iVar4 + iVar2 * 8);
        if ((uVar5 & 0x100) == 0) {
          uVar5 = uVar5 & 0xff;
          if (uVar5 == 5) {
            puVar3 = FUN_004d31b0(vm,piVar1,*puVar3,*(uint *)(iVar4 + 4 + iVar2 * 8));
            if (puVar3 != (uint *)0x0) {
              iVar4 = *piStack_c;
              *(uint *)(iVar4 + iVar2 * 8) = puVar3[2];
              *(uint *)(iVar4 + 4 + iVar2 * 8) = puVar3[3];
            }
          }
          else if (uVar5 == 6) {
            FUN_004d35a0(vm,*puVar3,(int *)puVar3[1]);
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < piStack_c[1]);
    }
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)((int)vm + 0x50);
  iVar4 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar4;
  *(uint *)(iVar2 + iVar4 * 8) = uStack_10;
  *(int **)(iVar2 + 4 + iVar4 * 8) = piStack_c;
  return;
}


