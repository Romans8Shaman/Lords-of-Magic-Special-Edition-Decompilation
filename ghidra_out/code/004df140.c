
void __cdecl op_isvalidterraintype_q(void *vm)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  float fStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
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
  if ((((int)fStack_4 < 0) || (DAT_005aea44 <= (int)fStack_4)) || (DAT_005aea50 == 0)) {
    bVar1 = false;
  }
  else {
    if (DAT_005aea30 == 0) {
      FUN_005091c0(&DAT_005aea30);
    }
    bVar1 = 0 < *(int *)(DAT_005aea50 + (int)fStack_4 * 4);
  }
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar4 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar4;
  iVar2 = *(int *)((int)vm + 0x50);
  *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
  *(uint *)(iVar2 + 4 + iVar4 * 8) = -(uint)bVar1;
  return;
}


