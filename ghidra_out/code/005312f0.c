
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_playvideo(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  char cVar3;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  int iStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    iStack_4 = *(int *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_c,&fStack_10);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      cVar3 = (char)*(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      iVar1 = *(int *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      cVar3 = '\0';
      iVar1 = iStack_4;
    }
    iVar2 = *(int *)((int)this + 0x90);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    if (iVar2 == 0) {
      if (cVar3 != '\b') {
        *(undefined4 *)((int)this + 0x90) = 0xe;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0;
    }
    if (iVar1 == 0) {
      FUN_004d41c0(this,s_no_filename_0055cfb0);
      return;
    }
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      iStack_4 = *(int *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar2 = FUN_004026a0(&uStack_8,(uint *)&DAT_005869e0,(uint *)&fStack_10,&fStack_c);
    if (iVar2 != 0) {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar2 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar2;
        uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
        iStack_4 = *(int *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
      }
      else {
        FUN_00404ab0(this,6);
        uStack_8 = 0;
      }
      iVar2 = FUN_004026a0(&uStack_8,(uint *)&DAT_005869dc,(uint *)&fStack_10,&fStack_c);
      if (iVar2 != 0) {
        _DAT_005869e4 = 1;
        _DAT_005869f0 = 0xffffffff;
        iVar1 = FUN_00531120(&DAT_005867c0,iVar1,vm);
        if (iVar1 == 0) {
          FUN_004d41c0(this,s_ERROR__>_SF_playvideo_005743ec);
        }
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


