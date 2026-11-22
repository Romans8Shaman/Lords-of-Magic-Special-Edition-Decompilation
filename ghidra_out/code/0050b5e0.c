
void __cdecl op_getpromisedata(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  uint uStack_14;
  float fStack_10;
  uint uStack_c;
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_c,&fStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    iVar1 = *(int *)((int)this + 0x90);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    if (iVar1 != 0) {
      FUN_004d41c0(this,s_getpromisedata___bad_args_00573a60);
      return;
    }
    if (DAT_005d2cd8 == (void *)0x0) {
      FUN_004d41c0(this,s_getpromisedata___no_current_prom_00573a3c);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        iVar1 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
        return;
      }
    }
    else {
      vm = (void *)0x0;
      iVar1 = FUN_0050a030(DAT_005d2cd8,uStack_14,&vm);
      if (iVar1 == 0) {
        FUN_004d41c0(this,s_getpromisedata___invalid_data_id_00573a18);
      }
      if (*(int *)((int)this + 0x54) != 0) {
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        iVar1 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(void **)(iVar1 + 4 + iVar2 * 8) = vm;
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


