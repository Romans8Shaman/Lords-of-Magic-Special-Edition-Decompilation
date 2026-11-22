
void __cdecl op_setunittypesound(void *vm)

{
  void *this;
  int iVar1;
  void *this_00;
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
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_c,&fStack_10);
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
    iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
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
        if ((((int)uStack_18 < 0) || (DAT_005cd2f0 <= (int)uStack_18)) || (DAT_005cd2f4 == 0)) {
          this_00 = (void *)0x0;
        }
        else {
          this_00 = (void *)(DAT_005cd2f4 + uStack_18 * 1000);
        }
        if (this_00 == (void *)0x0) {
          FUN_004d41c0(this,s_setunittypesound___no_such_unit_t_005741a4);
          return;
        }
        if (uStack_14 == 0x17) {
          iVar1 = FUN_00525190(this_00,vm);
          if (iVar1 == 0) {
            FUN_004d41c0(this,s_setunittypesound_failed_0057418c);
            return;
          }
        }
        else if (uStack_14 == 0x18) {
          iVar1 = FUN_005251c0(this_00,vm);
          if (iVar1 == 0) {
            FUN_004d41c0(this,s_setunittypesound_failed_0057418c);
            return;
          }
        }
        else if (uStack_14 == 0x19) {
          iVar1 = FUN_005251f0(this_00,vm);
          if (iVar1 == 0) {
            FUN_004d41c0(this,s_setunittypesound_failed_0057418c);
            return;
          }
        }
        else {
          if ((-1 < (int)uStack_14) && ((int)uStack_14 < 0x1a)) {
            *(void **)((int)this_00 + uStack_14 * 4 + 0x290) = vm;
            return;
          }
          FUN_004d41c0(this,s_setunittypesound_failed_0057418c);
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


