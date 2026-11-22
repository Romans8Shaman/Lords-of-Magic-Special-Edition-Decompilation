
void __cdecl op_nsetunitdata(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  float fStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uVar4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar3 = 0;
    uVar4 = uStack_4;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_10 = 0;
    uStack_c = uStack_4;
  }
  iVar1 = FUN_004026a0(&uStack_10,&uStack_20,(uint *)&fStack_14,(float *)&vm);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      uStack_c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_10 = 0;
      uStack_c = uStack_4;
    }
    iVar1 = FUN_004026a0(&uStack_10,&uStack_1c,(uint *)&fStack_14,(float *)&vm);
    if (iVar1 != 0) {
      vm = (void *)0x0;
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
      iVar1 = FUN_004026a0(&uStack_8,&uStack_18,&uStack_10,&fStack_14);
      if (iVar1 != 0) {
        if ((int)uStack_18 < -7) {
LAB_0041c877:
          FUN_0041ca40(uStack_18,uStack_1c,uStack_20,uVar3,uVar4);
          return;
        }
        if ((int)uStack_18 < -3) {
          FUN_004d41c0(this,s_Cannot_set_this_army_005559b0);
        }
        else {
          if (uStack_18 != 0xfffffffd) goto LAB_0041c877;
          vm = DAT_005ae950;
        }
        if (*(int *)((int)this + 0x54) == 0) {
          *(undefined4 *)((int)this + 0x90) = 3;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
        }
        else {
          iVar1 = *(int *)((int)this + 0x50);
          iVar2 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar2;
          *(undefined4 *)(iVar1 + iVar2 * 8) = uVar3;
          *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uVar4;
        }
        FUN_0041de50(vm,uStack_1c,uStack_20,this);
        return;
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


