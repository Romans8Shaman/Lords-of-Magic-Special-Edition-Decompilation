
void __cdecl op_resetcombatflag(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  longlong lVar6;
  void *pvStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uVar5 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar5 = 0;
  }
  uVar5 = uVar5 & 0xff;
  iVar3 = DAT_005ae98c;
  iVar1 = DAT_005ae998;
  pvVar4 = pvStack_4;
  if (uVar5 != 1) {
    if (uVar5 == 2) {
      pvVar4 = (void *)((int)pvStack_4 >> 8);
    }
    else {
      if (uVar5 != 4) {
        FUN_00404ab0(vm,0xe);
        return;
      }
      lVar6 = __ftol((float10)(float)pvStack_4);
      iVar3 = DAT_005ae98c;
      iVar1 = DAT_005ae998;
      pvVar4 = (void *)lVar6;
    }
  }
  for (; vm = pvVar4, iVar2 = DAT_005ae98c, iVar1 <= DAT_005ae98c; iVar1 = iVar1 + 1) {
    DAT_005ae98c = iVar3;
    pvVar4 = (void *)FUN_004f6000(&DAT_005ae974,iVar1);
    if (((pvVar4 != (void *)0x0) && (*(int *)((int)pvVar4 + 4) == 0)) &&
       (*(void **)((int)pvVar4 + 0x48) == vm)) {
      FUN_004176d0(pvVar4,0);
      *(undefined1 *)((int)pvVar4 + 0x78) = 0;
    }
    iVar3 = DAT_005ae98c;
    pvVar4 = vm;
    DAT_005ae98c = iVar2;
  }
  DAT_005ae98c = iVar3;
  return;
}


