
void __cdecl op_connectedbywater(void *vm)

{
  void *this;
  void *pvVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  pvVar1 = vm;
  if (DAT_005af0bc == 0) {
    FUN_004c6660(&DAT_005aef04);
  }
  if (((((int)uStack_14 < 0) || ((int)pvVar1 < 0)) || (DAT_005aef10 <= (int)uStack_14)) ||
     (DAT_005aef10 <= (int)pvVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = *(short *)(DAT_005aef04 + 4 + uStack_14 * 6) ==
            *(short *)(DAT_005aef04 + 4 + (int)pvVar1 * 6);
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
  *(uint *)(iVar2 + 4 + iVar3 * 8) = -(uint)bVar4;
  return;
}


