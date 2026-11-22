
void __cdecl op_numturnstoreachcity(void *vm)

{
  void *this;
  int iVar1;
  undefined4 *this_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_10,&uStack_c,(float *)&vm);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_c,(float *)&vm);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  this_00 = FUN_00485080(&DAT_005aa12c,uStack_14,0x2f);
  if (this_00 == (undefined4 *)0x0) {
    FUN_004d41c0(this,s_army_not_found_005577cc);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar2 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar2;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
      return;
    }
  }
  else {
    vm = (void *)FUN_00482ac0(&DAT_005aa12c,uStack_10,3);
    if (vm != (void *)0x0) {
      uVar3 = this_00[0x15];
      iVar1 = *(int *)((int)vm + 0x1c);
      iVar2 = this_00[7];
      if ((uVar3 & 0x100000) == 0) {
        if (((uVar3 & 0x40000) == 0) || ((uVar3 & 0x80000) == 0)) {
          if ((uVar3 & 0x40000) == 0) {
            if ((uVar3 & 0x80000) != 0) {
              uVar3 = FUN_004acea0(&DAT_005aef04,iVar2,iVar1);
              goto LAB_0051df39;
            }
          }
          else {
            if (DAT_005af0bc == 0) {
              FUN_004c6660(&DAT_005aef04);
            }
            if ((((-1 < iVar2) && (-1 < iVar1)) && (iVar2 < DAT_005aef10)) && (iVar1 < DAT_005aef10)
               ) {
              uVar3 = (uint)(*(short *)(DAT_005aef04 + 2 + iVar2 * 6) ==
                            *(short *)(DAT_005aef04 + 2 + iVar1 * 6));
              goto LAB_0051df39;
            }
          }
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 1;
      }
LAB_0051df39:
      if (uVar3 == 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = FUN_0051bd60(this_00,*(int *)((int)vm + 0x1c),0,0);
      }
      if (*(int *)((int)this + 0x54) == 0) {
        FUN_00404ab0(this,3);
        return;
      }
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      iVar2 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(int *)(iVar2 + 4 + iVar4 * 8) = iVar1;
      return;
    }
    FUN_004d41c0(this,s_city_not_found_00573e84);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar2 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar2;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 3;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


