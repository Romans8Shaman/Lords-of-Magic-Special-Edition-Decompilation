
void __cdecl op_longmovemerge(void *vm)

{
  void *this;
  int iVar1;
  undefined4 *this_00;
  undefined4 *this_01;
  uint uVar2;
  uint uVar3;
  undefined *this_02;
  uint uVar4;
  int iVar5;
  float fVar6;
  uint uStack_20;
  uint uStack_1c;
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
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_1c,(uint *)&fStack_10,&fStack_c);
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_20,(uint *)&fStack_10,&fStack_c);
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  this_00 = FUN_00485080(&DAT_005aa12c,uStack_18,0x2f);
  this_01 = FUN_00485080(&DAT_005aa12c,uStack_14,0x2f);
  if ((this_00 == (undefined4 *)0x0) || (this_01 == (undefined4 *)0x0)) {
    FUN_004d41c0(this,s_army_not_found_005577cc);
  }
  else {
    uVar2 = FUN_004207b0(this_00,uStack_20);
    fStack_10 = (float)FUN_004207b0(this_01,uStack_1c);
    uVar3 = (uint)fStack_10 & uVar2;
    uVar4 = ((int)vm < 0) - 1 & 0x80000;
    if ((uVar3 & 0x100000) == 0) {
      if (((uVar3 & 0x40000) == 0) || ((uVar3 & 0x80000) == 0)) {
        if ((uVar3 & 0x40000) == 0) {
          if ((uVar3 & 0x80000) == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = FUN_004acea0(&DAT_005aef04,this_00[7],this_01[7]);
          }
        }
        else {
          iVar1 = FUN_00521c70(&DAT_005aef04,this_00[7],this_01[7]);
        }
      }
      else {
        iVar1 = 1;
      }
    }
    else {
      iVar1 = 1;
    }
    if (iVar1 == 0) {
      iVar1 = this_01[7];
      iVar5 = this_00[7];
      fVar6 = fStack_10;
      this_02 = FUN_004c6fc0();
      iVar1 = FUN_004aba70(this_02,iVar5,iVar1,uVar2,(uint)fVar6);
      if (iVar1 < 0) {
        OutputDebugStringA(s_no_connected_location__00573efc);
        return;
      }
      FUN_00420b80(this_00,iVar1,uVar4 | 0x108040,uStack_20,this_01[10],vm,0);
      FUN_00420b80(this_01,iVar1,uVar4 | 0x108040,uStack_1c,this_00[10],vm,0);
      return;
    }
    if (uStack_20 != 0) {
      FUN_00420b80(this_00,this_01[7],uVar4 | 0x8040,uStack_20,this_01[10],vm,0);
    }
    if (uStack_1c != 0) {
      FUN_00420b80(this_01,this_00[7],uVar4 | 0x8040,uStack_1c,this_00[10],vm,0);
      return;
    }
  }
  return;
}


