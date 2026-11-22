
void __cdecl op_getselectionbox(void *vm)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *this;
  int iVar3;
  void *this_00;
  int iVar4;
  undefined4 *puVar5;
  uint uStack_18;
  uint uStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_c,&fStack_10);
  if (iVar3 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar3 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar3;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar3 * 8);
      uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar3 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar3 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
    if (iVar3 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar3 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar3;
        uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar3 * 8);
        uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar3 * 8);
      }
      else {
        FUN_00404ab0(this,6);
        uStack_8 = 0;
      }
      iVar3 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
      if (iVar3 == 0) {
        *(undefined4 *)((int)this + 0x90) = 0xe;
      }
      else {
        this_00 = (void *)FUN_00492820(&DAT_005a7b50,(int)vm);
        if (this_00 == (void *)0x0) {
          FUN_004d41c0(this,s_no_selectionbox_00572af0);
          if (*(int *)((int)this + 0x54) != 0) {
            iVar4 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar4;
            iVar3 = *(int *)((int)this + 0x50);
            *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
            *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
            return;
          }
        }
        else {
          puVar5 = FUN_004ea470(this_00,&uStack_8,uStack_14,uStack_18);
          uVar1 = *puVar5;
          uVar2 = puVar5[1];
          if (*(int *)((int)this + 0x54) != 0) {
            iVar4 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar4;
            iVar3 = *(int *)((int)this + 0x50);
            *(undefined4 *)(iVar3 + iVar4 * 8) = uVar1;
            *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar2;
            return;
          }
        }
        *(undefined4 *)((int)this + 0x90) = 3;
      }
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


