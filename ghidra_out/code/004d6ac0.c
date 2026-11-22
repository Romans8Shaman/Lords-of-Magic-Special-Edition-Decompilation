
void __cdecl op_enumrandonnumbers(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uStack_1b0;
  int *piStack_1ac;
  float fStack_1a8;
  uint uStack_1a4;
  int *piStack_1a0;
  uint uStack_19c;
  float fStack_198;
  uint uStack_194;
  uint auStack_190 [100];
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_1a4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piStack_1a0 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_1a4 = 0;
    piStack_1a0 = piStack_1ac;
  }
  if ((char)uStack_1a4 == '\0') {
    return;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_1b0 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piStack_1ac = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_1b0 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_1b0,&uStack_19c,(uint *)&fStack_198,&fStack_1a8);
  if (iVar1 != 0) {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar1 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar1;
      uStack_1b0 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
      piStack_1ac = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(vm,6);
      uStack_1b0 = 0;
    }
    iVar1 = FUN_004026a0(&uStack_1b0,&uStack_194,(uint *)&fStack_1a8,&fStack_198);
    if (iVar1 != 0) {
      puVar5 = auStack_190;
      for (iVar1 = 100; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      iVar1 = uStack_19c - uStack_194;
      uVar4 = uStack_194;
      if ((int)uStack_194 <= (int)uStack_19c) {
        do {
          do {
            iVar2 = FUN_00504f00(0,iVar1);
          } while (auStack_190[iVar2] != 0xffffffff);
          auStack_190[iVar2] = uVar4;
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 <= (int)uStack_19c);
      }
      fStack_1a8 = 0.0;
      if (iVar1 < 0) {
        return;
      }
      puVar5 = auStack_190;
      while( true ) {
        uVar4 = *puVar5;
        if (*(int *)((int)vm + 0x54) == 0) {
          *(undefined4 *)((int)vm + 0x90) = 3;
          FUN_004d4550(vm);
          *(undefined4 *)((int)vm + 0x90) = 0;
          *(undefined4 *)((int)vm + 0xa4) = 0;
        }
        else {
          iVar2 = *(int *)((int)vm + 0x50);
          iVar3 = *(int *)((int)vm + 0x54) + -1;
          *(int *)((int)vm + 0x54) = iVar3;
          *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
          *(uint *)(iVar2 + 4 + iVar3 * 8) = uVar4;
        }
        FUN_004d05e0(vm,uStack_1a4,piStack_1a0);
        iVar2 = *(int *)((int)vm + 0x6c);
        *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
        if (iVar2 != 0) break;
        puVar5 = puVar5 + 1;
        fStack_1a8 = (float)((int)fStack_1a8 + 1);
        if (iVar1 < (int)fStack_1a8) {
          return;
        }
      }
      return;
    }
  }
  *(undefined4 *)((int)vm + 0x90) = 0xe;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}


