
void __cdecl op_getterraintypename(void *vm)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  float fStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
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
      fStack_4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar3 != 4) {
        FUN_00404ab0(vm,0xe);
        return;
      }
      lVar5 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar5;
    }
  }
  iVar1 = FUN_00508f70(&DAT_005aea30,(int)fStack_4);
  if (iVar1 == 0) {
    FUN_004d41c0(vm,s_invalid_terraintype_00572950);
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar2 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar2;
      iVar1 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 8;
      *(undefined1 **)(iVar1 + 4 + iVar2 * 8) = &DAT_00579274;
      return;
    }
  }
  else if (*(int *)((int)vm + 0x54) != 0) {
    iVar4 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar4;
    iVar2 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar2 + iVar4 * 8) = 8;
    *(int *)(iVar2 + 4 + iVar4 * 8) = iVar1;
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 3;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}


