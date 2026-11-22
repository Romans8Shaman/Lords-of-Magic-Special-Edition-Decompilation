
void __cdecl op_numturnstoreachsprite(void *vm)

{
  uint uVar1;
  void *this;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uStack_14;
  float fStack_10;
  uint uStack_c;
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
  iVar2 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    goto LAB_0051e182;
  }
  iVar2 = FUN_0041be40(this,&vm);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_004f6000(&DAT_005ae974,uStack_14);
  if (iVar2 == 0) {
    FUN_004d41c0(this,s_sprite_not_found_00573e94);
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
    iVar3 = *(int *)(iVar2 + 0x1c);
    uVar1 = *(uint *)((int)vm + 0x54);
    iVar4 = *(int *)((int)vm + 0x1c);
    if ((uVar1 & 0x100000) == 0) {
      if (((uVar1 & 0x40000) == 0) || ((uVar1 & 0x80000) == 0)) {
        if ((uVar1 & 0x40000) == 0) {
          if ((uVar1 & 0x80000) != 0) {
            if (DAT_005af0bc == 0) {
              FUN_004c6660(&DAT_005aef04);
            }
            if ((((-1 < iVar4) && (-1 < iVar3)) && (iVar4 < DAT_005aef10)) && (iVar3 < DAT_005aef10)
               ) {
              bVar5 = *(short *)(DAT_005aef04 + 4 + iVar4 * 6) ==
                      *(short *)(DAT_005aef04 + 4 + iVar3 * 6);
              goto LAB_0051e13a;
            }
          }
        }
        else {
          if (DAT_005af0bc == 0) {
            FUN_004c6660(&DAT_005aef04);
          }
          if (((-1 < iVar4) && (-1 < iVar3)) && ((iVar4 < DAT_005aef10 && (iVar3 < DAT_005aef10))))
          {
            bVar5 = *(short *)(DAT_005aef04 + 2 + iVar4 * 6) ==
                    *(short *)(DAT_005aef04 + 2 + iVar3 * 6);
            goto LAB_0051e13a;
          }
        }
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
    }
    else {
      bVar5 = true;
    }
LAB_0051e13a:
    if (bVar5) {
      iVar2 = FUN_0051bd60(vm,*(int *)(iVar2 + 0x1c),0,0);
    }
    else {
      iVar2 = -1;
    }
    if (*(int *)((int)this + 0x54) != 0) {
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      iVar3 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(int *)(iVar3 + 4 + iVar4 * 8) = iVar2;
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 3;
LAB_0051e182:
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


