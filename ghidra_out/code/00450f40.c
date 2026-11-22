
void __cdecl op_setcitydata(void *vm)

{
  void *this;
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uStack_20;
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uVar4 = 0;
  }
  if ((char)uVar4 == '\0') {
    return;
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
  iVar1 = FUN_004026a0(&uStack_10,&uStack_20,(uint *)&fStack_14,&fStack_18);
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
    iVar1 = FUN_004026a0(&uStack_10,&uStack_1c,(uint *)&fStack_18,&fStack_14);
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
      iVar1 = FUN_004026a0(&uStack_10,(uint *)&vm,(uint *)&fStack_18,&fStack_14);
      if (iVar1 != 0) {
        if (vm == (void *)0xfffffffd) {
          piVar2 = DAT_005ae94c;
        }
        else {
          piVar2 = (int *)FUN_00485460(&DAT_005aa12c,(int)vm,3);
        }
        if (piVar2 == (int *)0x0) {
          FUN_004d41c0(this,s_no_city_005574d0);
          return;
        }
        if (*(int *)((int)this + 0x54) == 0) {
          *(undefined4 *)((int)this + 0x90) = 3;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
        }
        else {
          iVar1 = *(int *)((int)this + 0x50);
          iVar3 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar3;
          *(undefined4 *)(iVar1 + iVar3 * 8) = uVar4;
          *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = uStack_4;
        }
        FUN_00450800(piVar2,uStack_1c,uStack_20,this);
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


