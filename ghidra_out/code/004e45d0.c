
void __cdecl op_locktest(void *vm)

{
  void *pvVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uStack_14;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  void *pvStack_4;
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
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
    vm = pvStack_4;
  }
  else if (uVar4 == 2) {
    vm = (void *)((int)pvStack_4 >> 8);
  }
  else {
    if (uVar4 != 4) {
      FUN_00404ab0(vm,0xe);
      return;
    }
    lVar6 = __ftol((float10)(float)pvStack_4);
    vm = (void *)lVar6;
  }
  if (*(int *)((int)pvVar1 + 0x54) < *(int *)((int)pvVar1 + 0x58)) {
    iVar2 = *(int *)((int)pvVar1 + 0x54) + 1;
    *(int *)((int)pvVar1 + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)pvVar1 + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)pvVar1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar1 + 0x90) = 6;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
  }
  else {
    fStack_10 = (float)GetTickCount();
    iVar2 = 0;
    if (0 < (int)uStack_14) {
      do {
        if (vm != (void *)0x0) {
          (/*IC:004e46f0*/**(code **)(*DAT_00585170 + 100))(DAT_00585170,0,&DAT_00585238,1,0);
          (/*IC:004e4702*/**(code **)(*DAT_00585170 + 0x80))(DAT_00585170,DAT_00585170,DAT_0058525c);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uStack_14);
    }
    DVar3 = GetTickCount();
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar5;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
      *(DWORD *)(iVar2 + 4 + iVar5 * 8) = DVar3 - (int)fStack_10;
      return;
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
  }
  FUN_004d4550(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  return;
}


