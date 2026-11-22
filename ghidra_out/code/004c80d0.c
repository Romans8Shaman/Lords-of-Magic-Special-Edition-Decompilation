
void __cdecl op_getregionfaiths(void *vm)

{
  void *pvVar1;
  int iVar2;
  void *this;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  float fStack_4;
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar5 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar5 = 0;
  }
  uVar5 = uVar5 & 0xff;
  if (uVar5 != 1) {
    if (uVar5 == 2) {
      fStack_4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar5 != 4) {
        FUN_00404ab0(vm,0xe);
        return;
      }
      lVar6 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar6;
    }
  }
  this = (void *)FUN_004c5ec0(&DAT_005aef04,(int)fStack_4);
  vm = (void *)0x0;
  iVar2 = 0;
  do {
    iVar3 = FUN_004c52c0(this,(byte)iVar2);
    if (iVar3 != 0) {
      if (*(int *)((int)pvVar1 + 0x54) == 0) {
        *(undefined4 *)((int)pvVar1 + 0x90) = 3;
        FUN_004d4550(pvVar1);
        *(undefined4 *)((int)pvVar1 + 0x90) = 0;
        *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)pvVar1 + 0x50);
        iVar4 = *(int *)((int)pvVar1 + 0x54) + -1;
        *(int *)((int)pvVar1 + 0x54) = iVar4;
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(int *)(iVar3 + 4 + iVar4 * 8) = iVar2;
      }
      vm = (void *)((int)vm + 1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)((int)pvVar1 + 0x50);
  iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
  *(int *)((int)pvVar1 + 0x54) = iVar3;
  *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
  *(void **)(iVar2 + 4 + iVar3 * 8) = vm;
  return;
}


