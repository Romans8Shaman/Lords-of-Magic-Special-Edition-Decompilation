
void __cdecl op_addspelleffect(void *vm)

{
  void *this;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uStack_50;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  uint auStack_3c [12];
  uint auStack_c [3];
  
  this = vm;
  puVar2 = &DAT_00584c1c;
  puVar3 = auStack_3c;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_44 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_40 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_44 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_44,auStack_c,(uint *)&fStack_48,&fStack_4c);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_44 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      uStack_40 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_44 = 0;
    }
    iVar1 = FUN_004026a0(&uStack_44,auStack_3c,(uint *)&fStack_4c,&fStack_48);
    if (iVar1 != 0) {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar1 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar1;
        uStack_44 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
        uStack_40 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
      }
      else {
        *(undefined4 *)((int)this + 0x90) = 6;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        uStack_44 = 0;
      }
      iVar1 = FUN_004026a0(&uStack_44,(uint *)&vm,(uint *)&fStack_4c,&fStack_48);
      if (iVar1 != 0) {
        if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
          iVar1 = *(int *)((int)this + 0x54) + 1;
          *(int *)((int)this + 0x54) = iVar1;
          uStack_44 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
          uStack_40 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
        }
        else {
          *(undefined4 *)((int)this + 0x90) = 6;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
          uStack_44 = 0;
        }
        iVar1 = FUN_004026a0(&uStack_44,&uStack_50,(uint *)&fStack_4c,&fStack_48);
        if (iVar1 != 0) {
          auStack_3c[1] = FUN_004a51c0(&DAT_005ae958,uStack_50,(int)vm);
          FUN_004f0780(auStack_3c);
          return;
        }
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


