
void __cdecl op_addmissiletype(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  uint uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint auStack_1c [7];
  
  FUN_004af120(&uStack_34);
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_3c = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_38 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_3c = 0;
  }
  iVar2 = FUN_004026a0(&uStack_3c,auStack_1c,&uStack_40,(float *)&vm);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_24 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_20 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_24 = 0;
    uStack_20 = uStack_38;
  }
  if ((char)uStack_24 != '\0') {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_2c = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      uStack_28 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 6;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      uStack_2c = 0;
      uStack_28 = uStack_38;
    }
    if ((char)uStack_2c != '\0') {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar2 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar2;
        uStack_34 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
        uStack_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
      }
      else {
        *(undefined4 *)((int)this + 0x90) = 6;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        uStack_34 = 0;
        uStack_30 = uStack_38;
      }
      if ((char)uStack_34 != '\0') {
        iVar2 = FUN_004af4d0(&DAT_005cd2f8,&uStack_34);
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
          *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
          *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
        }
        if (iVar2 < 0) {
          FUN_004d41c0(this,s_addmissiletype_failed_0055ccd4);
        }
      }
    }
  }
  return;
}


