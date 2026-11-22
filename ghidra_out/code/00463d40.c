
void __cdecl op_distractorder(void *vm)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  longlong lVar5;
  uint uStack_14;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  void *pvStack_4;
  
  pvVar4 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  pvVar3 = pvStack_4;
  if (uVar1 == 1) {
LAB_00463db5:
    vm = pvVar3;
  }
  else {
    if (uVar1 == 2) {
      pvVar3 = (void *)((int)pvStack_4 >> 8);
      goto LAB_00463db5;
    }
    if (uVar1 != 4) goto LAB_00463ef3;
    lVar5 = __ftol((float10)(float)pvStack_4);
    vm = (void *)lVar5;
  }
  if (*(int *)((int)pvVar4 + 0x54) < *(int *)((int)pvVar4 + 0x58)) {
    iVar2 = *(int *)((int)pvVar4 + 0x54) + 1;
    *(int *)((int)pvVar4 + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)pvVar4 + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)pvVar4 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar4 + 0x90) = 6;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)pvVar4 + 0x90) = 0xe;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)pvVar4 + 0x54) < *(int *)((int)pvVar4 + 0x58)) {
    iVar2 = *(int *)((int)pvVar4 + 0x54) + 1;
    *(int *)((int)pvVar4 + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)pvVar4 + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)pvVar4 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar4 + 0x90) = 6;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    pvVar4 = pvStack_4;
  }
  else if (uVar1 == 2) {
    pvVar4 = (void *)((int)pvStack_4 >> 8);
  }
  else {
    if (uVar1 != 4) {
LAB_00463ef3:
      FUN_00404ab0(pvVar4,0xe);
      return;
    }
    lVar5 = __ftol((float10)(float)pvStack_4);
    pvVar4 = (void *)lVar5;
  }
  iVar2 = FUN_0045a620(&DAT_00579458,(int)pvVar4,(int *)&uStack_14,(int *)&vm);
  if (iVar2 != 0) {
    iVar2 = FUN_004a51c0(&DAT_005ae958,uStack_14,(int)vm);
    FUN_00407550(&DAT_005aa12c,(int)pvVar4,iVar2);
  }
  return;
}


