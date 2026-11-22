
void __cdecl op_prisonerandescort(void *vm)

{
  void *this;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  void *pvStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    pvVar4 = pvStack_4;
  }
  else if (uVar3 == 2) {
    pvVar4 = (void *)((int)pvStack_4 >> 8);
  }
  else {
    if (uVar3 != 4) {
      FUN_00404ab0(this,0xe);
      return;
    }
    lVar5 = __ftol((float10)(float)pvStack_4);
    pvVar4 = (void *)lVar5;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    pvStack_4 = *(void **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if (vm == pvVar4) {
    FUN_004d41c0(this,s_prisoner___escort_cannot_be_same_0055d92c);
    return;
  }
  uVar3 = FUN_00482ac0(&DAT_005aa12c,(int)vm,0);
  puVar2 = FUN_00485080(&DAT_005aa12c,(int)pvVar4,0x2f);
  if ((uVar3 != 0) && (puVar2 != (undefined4 *)0x0)) {
    FUN_004c1b40((int)vm,(int)pvVar4);
  }
  return;
}


