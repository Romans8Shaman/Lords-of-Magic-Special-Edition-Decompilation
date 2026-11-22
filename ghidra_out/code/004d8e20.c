
void __cdecl op_testarmyimp(void *vm)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uStack_18;
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
    iVar1 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
    if (iVar1 != 0) {
      iVar1 = FUN_0041be40(this,&vm);
      if (iVar1 != 0) {
        FUN_004f5b70(vm,uStack_18);
        FUN_004b0310((void *)((int)vm + 0x55c),uStack_18);
        if (*(void **)((int)vm + 0x58c) != (void *)0x0) {
          FUN_0049dcc0(*(void **)((int)vm + 0x58c),uStack_18);
        }
        if (*(void **)((int)vm + 0x598) != (void *)0x0) {
          FUN_0049dcc0(*(void **)((int)vm + 0x598),uStack_18);
        }
        (/*IC:004d8f79*/**(code **)(*(int *)vm + 0x30))(vm,uStack_14,1);
        uVar2 = FUN_0047d680(uStack_14);
        FUN_004b02c0((void *)((int)vm + 0x55c),uVar2);
        FUN_00411b50(vm,uStack_14);
      }
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


