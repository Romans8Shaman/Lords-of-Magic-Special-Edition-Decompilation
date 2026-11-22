
void __cdecl op_getplayeraistatus(void *vm)

{
  uint uVar1;
  void *this;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  float fStack_10;
  uint uStack_c;
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
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    if (((int)vm < 0) || (0xf < (int)vm)) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = &DAT_005af194 + (int)vm * 0x1d84;
    }
    if (puVar3 == (undefined *)0x0) {
      FUN_004d41c0(this,s_getplayeraistatus___no_such_play_0055d7d0);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar4 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar4;
        iVar2 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0;
        return;
      }
    }
    else {
      uVar1 = *(uint *)(puVar3 + 0x15d8);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar4 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar4;
        iVar2 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
        *(uint *)(iVar2 + 4 + iVar4 * 8) = uVar1 >> 1 & 1;
        return;
      }
    }
    *(undefined4 *)((int)this + 0x90) = 3;
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


