
void __cdecl op_mod(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  uint uStack_10;
  void *pvStack_c;
  uint uStack_8;
  void *pvStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_10 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pvStack_c = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_10 = 0;
    pvStack_c = pvStack_4;
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
    uStack_8 = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_1c,(uint *)&fStack_14,&fStack_18);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    iVar1 = FUN_004026a0(&uStack_10,(uint *)&vm,(uint *)&fStack_18,&fStack_14);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      if ((uStack_10 & 0xff) == 1) {
        vm = pvStack_c;
      }
      else {
        if ((uStack_10 & 0xff) != 4) {
          *(undefined4 *)((int)this + 0x90) = 0xe;
          goto LAB_004cb36a;
        }
        lVar4 = __ftol((float10)(float)pvStack_c);
        vm = (void *)lVar4;
      }
      if (vm == (void *)0x0) {
        FUN_004d41c0(this,s_divide_by_zero_0055e1d4);
        pvVar3 = pvStack_4;
      }
      else {
        pvVar3 = (void *)((int)uStack_1c % (int)vm);
      }
      if (*(int *)((int)this + 0x54) != 0) {
        iVar1 = *(int *)((int)this + 0x50);
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(void **)(iVar1 + 4 + iVar2 * 8) = pvVar3;
        return;
      }
      *(undefined4 *)((int)this + 0x90) = 3;
    }
  }
LAB_004cb36a:
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


