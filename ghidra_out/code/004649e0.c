
void __cdecl op_newplay(void *vm)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  float fStack_4;
  
  if ((DAT_005577c8 < 0) || (0xf < DAT_005577c8)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_005af194 + DAT_005577c8 * 0x1d84;
  }
  if ((puVar2 != (undefined *)0x0) && (puVar1 = puVar2 + 0x15e0, puVar1 != (undefined *)0x0)) {
    *(undefined4 *)(puVar2 + 0x1bc0) = 0;
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar3 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar3;
      uVar5 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
      fVar4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 6;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      uVar5 = 0;
      fVar4 = fStack_4;
    }
    *(undefined4 *)(puVar2 + 0x1bb8) = uVar5;
    *(float *)(puVar2 + 0x1bbc) = fVar4;
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar3 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar3;
      uVar6 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
      fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 6;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      uVar6 = 0;
    }
    uVar6 = uVar6 & 0xff;
    if (uVar6 != 1) {
      if (uVar6 == 2) {
        *(int *)(puVar2 + 0x15f0) = (int)fStack_4 >> 8;
        FUN_00462e10((int)puVar1);
        return;
      }
      if (uVar6 == 4) {
        lVar7 = __ftol((float10)fStack_4);
        *(int *)(puVar2 + 0x15f0) = (int)lVar7;
        FUN_00462e10((int)puVar1);
        return;
      }
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      return;
    }
    *(float *)(puVar2 + 0x15f0) = fStack_4;
    FUN_00462e10((int)puVar1);
  }
  return;
}


