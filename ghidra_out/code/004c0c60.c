
void __cdecl op_getplayernumbercontact(void *vm)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  float fStack_4;
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  if (uVar4 != 1) {
    if (uVar4 == 2) {
      fStack_4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar4 != 4) {
        *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
        goto LAB_004c0d11;
      }
      lVar6 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar6;
    }
  }
  iVar2 = FUN_004bdce0(pvVar1,&vm);
  if (iVar2 == 0) {
    return;
  }
  uVar3 = FUN_004bcb60(vm,(int)fStack_4);
  if (*(int *)((int)pvVar1 + 0x54) != 0) {
    iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
    *(int *)((int)pvVar1 + 0x54) = iVar5;
    iVar2 = *(int *)((int)pvVar1 + 0x50);
    *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = uVar3;
    return;
  }
  *(undefined4 *)((int)pvVar1 + 0x90) = 3;
LAB_004c0d11:
  FUN_004d4550(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  return;
}


