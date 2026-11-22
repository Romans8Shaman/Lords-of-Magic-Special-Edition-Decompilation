
void __cdecl op_numturnstoreacharmy(void *vm)

{
  uint uVar1;
  void *this;
  int iVar2;
  undefined4 *this_00;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
    if (iVar2 == 0) {
      FUN_00404ab0(this,0xe);
      return;
    }
    this_00 = FUN_00485080(&DAT_005aa12c,(int)vm,0x2f);
    if (this_00 == (undefined4 *)0x0) {
      FUN_004d41c0(this,s_army_not_found_005577cc);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        iVar2 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
        return;
      }
    }
    else {
      puVar4 = FUN_00485080(&DAT_005aa12c,uStack_14,0x2f);
      if (puVar4 == (undefined4 *)0x0) {
        FUN_004d41c0(this,s_target_army_not_found_00573ea8);
        if (*(int *)((int)this + 0x54) != 0) {
          iVar3 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar3;
          iVar2 = *(int *)((int)this + 0x50);
          *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
          *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
          return;
        }
      }
      else {
        uVar1 = this_00[0x15];
        if ((uVar1 & 0x100000) == 0) {
          if (((uVar1 & 0x40000) == 0) || ((uVar1 & 0x80000) == 0)) {
            if ((uVar1 & 0x40000) == 0) {
              if ((uVar1 & 0x80000) == 0) {
                iVar2 = 0;
              }
              else {
                iVar2 = FUN_004acea0(&DAT_005aef04,this_00[7],puVar4[7]);
              }
            }
            else {
              iVar2 = FUN_00521c70(&DAT_005aef04,this_00[7],puVar4[7]);
            }
          }
          else {
            iVar2 = 1;
          }
        }
        else {
          iVar2 = 1;
        }
        if (iVar2 == 0) {
          iVar2 = -1;
        }
        else {
          iVar2 = FUN_0051bd60(this_00,puVar4[7],0,0);
        }
        if (*(int *)((int)this + 0x54) != 0) {
          iVar5 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar5;
          iVar3 = *(int *)((int)this + 0x50);
          *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
          *(int *)(iVar3 + 4 + iVar5 * 8) = iVar2;
          return;
        }
      }
    }
    *(undefined4 *)((int)this + 0x90) = 3;
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


