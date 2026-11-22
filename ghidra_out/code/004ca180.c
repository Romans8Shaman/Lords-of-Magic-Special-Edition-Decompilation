
void __cdecl op_def(void *vm)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puStack_14;
  int iStack_10;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  puVar6 = (uint *)0x0;
  puStack_14 = (uint *)0x0;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(uint *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uStack_8 = 0;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    iStack_10 = *(int *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_c = *(uint *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    iStack_10 = 0;
    uStack_c = uStack_4;
  }
  if (*(int *)((int)vm + 0x60) < *(int *)((int)vm + 100) + -1) {
    if (iStack_10 == 0x105) {
      iVar2 = 0;
      piVar1 = *(int **)(*(int *)((int)vm + 0x5c) + *(int *)((int)vm + 0x60) * 4);
      if (0 < piVar1[1]) {
        iVar5 = 0;
        do {
          if (puVar6 != (uint *)0x0) goto LAB_004ca2e7;
          puVar3 = (uint *)(*piVar1 + iVar5);
          if ((*puVar3 & 0xff) == 0) {
            if (puStack_14 == (uint *)0x0) {
              puStack_14 = puVar3;
            }
          }
          else if ((puVar3[1] == uStack_c) && ((*puVar3 & 0xff) == 5)) {
            puVar6 = puVar3;
          }
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + 0x10;
        } while (iVar2 < piVar1[1]);
      }
      if ((puVar6 == (uint *)0x0) && (puVar6 = puStack_14, puStack_14 == (uint *)0x0)) {
        *(undefined4 *)((int)vm + 0x90) = 0xd;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
LAB_004ca2e7:
      *puVar6 = 0x105;
      puVar6[2] = uStack_8;
      puVar6[1] = uStack_c;
      puVar6[3] = uStack_4;
      iVar2 = *(int *)(*(int *)((int)vm + 0x5c) + *(int *)((int)vm + 0x60) * 4);
      uVar4 = *(uint *)(iVar2 + 8);
      if ((int)uStack_c <= (int)uVar4) {
        uVar4 = uStack_c;
      }
      *(uint *)(iVar2 + 8) = uVar4;
      iVar2 = *(int *)(*(int *)((int)vm + 0x5c) + *(int *)((int)vm + 0x60) * 4);
      uVar4 = *(uint *)(iVar2 + 0xc);
      if ((int)uVar4 < (int)uStack_c) {
        uVar4 = uStack_c;
      }
      *(uint *)(iVar2 + 0xc) = uVar4;
      return;
    }
    *(undefined4 *)((int)vm + 0x90) = 0xe;
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 7;
  }
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}


