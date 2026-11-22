
void __cdecl op_singlerand(void *vm)

{
  void *this;
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  void *pvStack_4;
  
  uStack_10 = FUN_0053a110();
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    pvVar4 = pvStack_4;
  }
  else if (uVar1 == 2) {
    pvVar4 = (void *)((int)pvStack_4 >> 8);
  }
  else if (uVar1 == 4) {
    lVar5 = __ftol((float10)(float)pvStack_4);
    pvVar4 = (void *)lVar5;
  }
  else {
    FUN_00404ab0(this,0xe);
    pvVar4 = vm;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_c,(float *)&vm);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  iVar2 = (int)pvVar4 + (1 - uStack_14);
  if (1 < iVar2) {
    uStack_14 = (int)uStack_10 % iVar2 + uStack_14;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar3 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar3;
  iVar2 = *(int *)((int)this + 0x50);
  *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
  *(uint *)(iVar2 + 4 + iVar3 * 8) = uStack_14;
  return;
}


