
void __cdecl op_canhire_q(void *vm)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  float fStack_18;
  uint auStack_14 [5];
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    fStack_18 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  if (uVar4 != 1) {
    if (uVar4 == 2) {
      fStack_18 = (float)((int)fStack_18 >> 8);
    }
    else {
      if (uVar4 != 4) {
        *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
        goto LAB_00442cfa;
      }
      lVar6 = __ftol((float10)fStack_18);
      fStack_18 = (float)lVar6;
    }
  }
  iVar3 = FUN_004409e0(pvVar2,&vm);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_00441350(vm,(uint)fStack_18,1,auStack_14,1);
  if (*(int *)((int)pvVar2 + 0x54) != 0) {
    iVar5 = *(int *)((int)pvVar2 + 0x54) + -1;
    *(int *)((int)pvVar2 + 0x54) = iVar5;
    iVar1 = *(int *)((int)pvVar2 + 0x50);
    *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
    *(uint *)(iVar1 + 4 + iVar5 * 8) = -(uint)(iVar3 != 0);
    return;
  }
  *(undefined4 *)((int)pvVar2 + 0x90) = 3;
LAB_00442cfa:
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
}


