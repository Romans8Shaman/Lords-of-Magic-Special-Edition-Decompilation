
void __cdecl op_getunitflag(void *vm)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  uint uStack_94;
  float fStack_90;
  uint uStack_8c;
  uint uStack_88;
  float fStack_84;
  uint auStack_80 [32];
  
  iVar6 = 0;
  uStack_8c = 0;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_90 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  if (uVar4 == 1) {
    fVar5 = fStack_90;
  }
  else if (uVar4 == 2) {
    fVar5 = (float)((int)fStack_90 >> 8);
  }
  else {
    if (uVar4 != 4) {
      FUN_00404ab0(vm,0xe);
      return;
    }
    lVar7 = __ftol((float10)fStack_90);
    fVar5 = (float)lVar7;
  }
  uVar4 = 0;
  if (0 < (int)fVar5) {
    puVar3 = auStack_80;
    do {
      if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
        iVar2 = *(int *)((int)vm + 0x54) + 1;
        *(int *)((int)vm + 0x54) = iVar2;
        uStack_94 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
        fStack_90 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
      }
      else {
        *(undefined4 *)((int)vm + 0x90) = 6;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        uStack_94 = 0;
      }
      iVar2 = FUN_004026a0(&uStack_94,puVar3,&uStack_88,&fStack_84);
      if (iVar2 == 0) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      iVar6 = iVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar6 < (int)fVar5);
    uVar4 = uStack_8c;
    if (0 < (int)fVar5) {
      puVar3 = auStack_80;
      do {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        uVar4 = uVar4 | uVar1;
        fVar5 = (float)((int)fVar5 + -1);
      } while (fVar5 != 0.0);
    }
  }
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar6 = *(int *)((int)vm + 0x50);
  iVar2 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar2;
  *(undefined4 *)(iVar6 + iVar2 * 8) = 1;
  *(uint *)(iVar6 + 4 + iVar2 * 8) = uVar4;
  return;
}


