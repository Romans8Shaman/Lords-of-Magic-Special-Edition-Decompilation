
void __cdecl op_setplayeraistatus(void *vm)

{
  void *this;
  int iVar1;
  undefined *puVar2;
  uint uStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_c,&fStack_10);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
    if (iVar1 != 0) {
      if (((int)vm < 0) || (0xf < (int)vm)) {
        puVar2 = (undefined *)0x0;
      }
      else {
        puVar2 = &DAT_005af194 + (int)vm * 0x1d84;
      }
      if (puVar2 == (undefined *)0x0) {
        FUN_004d41c0(this,s_setplayeraistatus___no_such_play_0055d7ac);
        return;
      }
      if (uStack_14 == 0) {
        *(uint *)(puVar2 + 0x15d8) = *(uint *)(puVar2 + 0x15d8) & 0xfffffffd;
        return;
      }
      *(uint *)(puVar2 + 0x15d8) = *(uint *)(puVar2 + 0x15d8) | 2;
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


