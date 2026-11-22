
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_ne(void *vm)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  bool bVar8;
  longlong lVar9;
  void *pvStack_1c;
  void *pvStack_18;
  void *pvStack_14;
  float fStack_10;
  void *pvStack_c;
  uint uStack_8;
  void *pvStack_4;
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar5 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pvVar7 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar5 = 0;
    pvVar7 = pvStack_4;
  }
  pvStack_c = pvVar7;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uStack_8 = 0;
  }
  if ((uVar5 == uStack_8) && (pvVar7 == pvStack_4)) {
    bVar8 = true;
    goto LAB_004cbe37;
  }
  uVar6 = uVar5 & 0xff;
  if ((uVar6 == 5) && ((char)uStack_8 == (char)uVar5)) {
    bVar8 = pvVar7 == pvStack_4;
    goto LAB_004cbe37;
  }
  if (uVar6 == 1) {
    pvStack_1c = (void *)(float)(int)pvStack_c;
    vm = (void *)((int)pvVar7 << 8);
    pvVar3 = pvVar7;
LAB_004cbdc4:
    iVar2 = FUN_004026a0(&uStack_8,(uint *)&pvStack_18,(uint *)&pvStack_14,&fStack_10);
    if (iVar2 != 0) {
      if ((uVar6 != 4) && ((uStack_8 & 0xff) != 4)) {
        if ((uVar6 == 2) || ((uStack_8 & 0xff) == 2)) {
          bVar8 = vm == pvStack_14;
        }
        else {
          bVar8 = pvVar3 == pvStack_18;
        }
        goto LAB_004cbe37;
      }
      if ((NAN((float)pvStack_1c) || NAN(fStack_10)) || (float)pvStack_1c == fStack_10) {
        bVar8 = true;
        goto LAB_004cbe37;
      }
    }
  }
  else {
    if (uVar6 == 2) {
      pvStack_1c = (void *)((float)(int)pvStack_c * (float)_DAT_0054dd18);
      pvVar3 = (void *)((int)pvVar7 >> 8);
      vm = pvVar7;
      goto LAB_004cbdc4;
    }
    if (uVar6 == 4) {
      pvStack_1c = pvStack_c;
      lVar9 = __ftol((float10)(float)pvStack_c * (float10)_DAT_0054dd10);
      vm = (void *)lVar9;
      lVar9 = __ftol((float10)(float)pvStack_c);
      pvVar3 = (void *)lVar9;
      goto LAB_004cbdc4;
    }
  }
  bVar8 = false;
LAB_004cbe37:
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    return;
  }
  iVar4 = *(int *)((int)pvVar1 + 0x54) + -1;
  *(int *)((int)pvVar1 + 0x54) = iVar4;
  iVar2 = *(int *)((int)pvVar1 + 0x50);
  *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
  *(uint *)(iVar2 + 4 + iVar4 * 8) = bVar8 - 1;
  return;
}


