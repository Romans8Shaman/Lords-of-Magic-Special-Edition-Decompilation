
void __cdecl op_closecitygate(void *vm)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  longlong lVar4;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 auStack_c [2];
  void *pvStack_4;
  
  pvVar3 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    pvVar3 = pvStack_4;
  }
  else if (uVar2 == 2) {
    pvVar3 = (void *)((int)pvStack_4 >> 8);
  }
  else {
    if (uVar2 != 4) {
      *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      return;
    }
    lVar4 = __ftol((float10)(float)pvStack_4);
    pvVar3 = (void *)lVar4;
  }
  FUN_00455850(&DAT_005ae8e8,auStack_c,&uStack_10,&iStack_14,&uStack_18,&vm);
  if (pvVar3 == vm) {
    FUN_00457970(&DAT_005ae958);
  }
  return;
}


