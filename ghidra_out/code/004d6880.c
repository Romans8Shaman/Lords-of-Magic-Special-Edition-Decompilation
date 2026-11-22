
void __cdecl op_army_en_route_q(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  float fStack_10;
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
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    iVar2 = FUN_004f6000(&DAT_005ae974,(int)vm);
    iVar1 = DAT_005cc9d4;
    if (iVar2 == 0) {
      FUN_004d41c0(this,s_no_sprite_00572584);
    }
    else {
      for (iVar3 = FUN_004fbe60(&DAT_005ae974,0,0); iVar3 != 0;
          iVar3 = FUN_004fbe60(&DAT_005ae974,iVar3,0)) {
        if (((*(void **)(iVar3 + 0x28) != vm) && (*(int *)(iVar3 + 0x548) == *(int *)(iVar2 + 0x1c))
            ) && (*(int *)(iVar3 + 0x48) == iVar1)) {
          if (*(int *)((int)this + 0x54) != 0) {
            iVar2 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar2;
            iVar1 = *(int *)((int)this + 0x50);
            *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
            *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
            return;
          }
          goto LAB_004d6938;
        }
      }
    }
    if (*(int *)((int)this + 0x54) != 0) {
      iVar2 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar2;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
      return;
    }
LAB_004d6938:
    *(undefined4 *)((int)this + 0x90) = 3;
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


