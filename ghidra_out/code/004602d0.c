
void __cdecl op_startcombat(void *vm)

{
  void *this;
  int iVar1;
  int *this_00;
  uint uVar2;
  longlong lVar3;
  float fStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      fStack_4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar2 != 4) {
        *(undefined4 *)((int)this + 0x90) = 0xe;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        return;
      }
      lVar3 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar3;
    }
  }
  this_00 = (int *)FUN_004f6000(&DAT_005ae974,(int)fStack_4);
  iVar1 = FUN_0041be40(this,&vm);
  if (iVar1 != 0) {
    if (vm == (void *)0x0) {
      FUN_004d41c0(this,s_no_attacker_00557780);
      return;
    }
    if ((*(uint *)((int)vm + 0x30) & 0x1c00000) != 0) {
      FUN_004d41c0(this,s_attacker_inside__0055776c);
      return;
    }
    if (this_00 == (int *)0x0) {
      FUN_004d41c0(this,s_no_defender_00557760);
      return;
    }
    if (*(int *)((int)vm + 0x28) == this_00[10]) {
      FUN_004d41c0(this,s_attacking_self__00557750);
      return;
    }
    iVar1 = (/*IC:004603d2*/**(code **)(*this_00 + 0x3c))(this_00);
    if (*(int *)((int)vm + 0x48) == iVar1) {
      FUN_004d41c0(this,s_attacking_own_player_s_army_00557734);
      return;
    }
    FUN_0045c5e0(&DAT_005aa12c,*(undefined4 *)((int)vm + 0x28),this_00[10]);
  }
  return;
}


