
void __cdecl op_setdifficultylevel(void *vm)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  void *pvStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      pvStack_4 = (void *)((int)pvStack_4 >> 8);
    }
    else if (uVar2 == 4) {
      lVar3 = __ftol((float10)(float)pvStack_4);
      pvStack_4 = (void *)lVar3;
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      pvStack_4 = vm;
    }
  }
  if (((int)pvStack_4 < 0) || (2 < (int)pvStack_4)) {
    FUN_004d41c0(vm,s_invalid_difficulty_level_0055b46c);
    return;
  }
  DAT_005af0f4 = pvStack_4;
  return;
}


