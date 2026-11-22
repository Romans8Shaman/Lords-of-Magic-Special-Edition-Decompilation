
void __cdecl op_numparties(void *vm)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
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
      lVar6 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar6;
    }
  }
  if (((int)fStack_4 < 0) || (0xf < (int)fStack_4)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &DAT_005af194 + (int)fStack_4 * 0x1d84;
  }
  if (puVar4 != (undefined *)0x0) {
    iVar2 = FUN_004bded0((int)puVar4);
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar5 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar5;
      iVar1 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar5 * 8) = iVar2;
      return;
    }
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  return;
}


