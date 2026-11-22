
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_setelevation(void *vm)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  uint uStack_18;
  float fStack_14;
  uint uStack_10;
  void *pvStack_c;
  uint uStack_8;
  void *pvStack_4;
  
  pvVar3 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pvStack_c = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar1 = 0;
    pvStack_c = pvStack_4;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    vm = (void *)(float)(int)pvStack_c;
  }
  else if (uVar1 == 2) {
    vm = (void *)((float)(int)pvStack_c * (float)_DAT_0054dd38);
  }
  else {
    if (uVar1 != 4) goto LAB_004dff19;
    vm = pvStack_c;
  }
  if (*(int *)((int)pvVar3 + 0x54) < *(int *)((int)pvVar3 + 0x58)) {
    iVar2 = *(int *)((int)pvVar3 + 0x54) + 1;
    *(int *)((int)pvVar3 + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)pvVar3 + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)pvVar3 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar3 + 0x90) = 6;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_18,&uStack_10,&fStack_14);
  if (iVar2 == 0) {
    *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)pvVar3 + 0x54) < *(int *)((int)pvVar3 + 0x58)) {
    iVar2 = *(int *)((int)pvVar3 + 0x54) + 1;
    *(int *)((int)pvVar3 + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)pvVar3 + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)pvVar3 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar3 + 0x90) = 6;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    pvVar3 = pvStack_4;
  }
  else if (uVar1 == 2) {
    pvVar3 = (void *)((int)pvStack_4 >> 8);
  }
  else {
    if (uVar1 != 4) {
LAB_004dff19:
      FUN_00404ab0(pvVar3,0xe);
      return;
    }
    lVar4 = __ftol((float10)(float)pvStack_4);
    pvVar3 = (void *)lVar4;
  }
  FUN_004a59d0(&DAT_005ae958,(int)pvVar3,uStack_18,(float)vm);
  return;
}


