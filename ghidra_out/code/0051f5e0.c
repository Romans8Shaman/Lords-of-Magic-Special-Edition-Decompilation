
void __cdecl op_longmoveevent(void *vm)

{
  void *this;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvStack_1c;
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_c,&fStack_10);
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
    iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
    if (iVar1 != 0) {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar1 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar1;
        uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
        uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
      }
      else {
        *(undefined4 *)((int)this + 0x90) = 6;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        uStack_8 = 0;
      }
      iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
      if (iVar1 != 0) {
        iVar1 = FUN_0041be40(this,&pvStack_1c);
        if (iVar1 != 0) {
          puVar2 = FUN_00485080(&DAT_005aa12c,(int)vm,0x2f);
          iVar1 = FUN_004f6000(&DAT_005ae974,(int)vm);
          if (pvStack_1c != (void *)0x0) {
            if (puVar2 != (undefined4 *)0x0) {
              uVar4 = puVar2[10];
              iVar1 = puVar2[7];
LAB_0051f792:
              uVar3 = 0x40;
              if (-1 < (int)uStack_18) {
                uVar3 = 0x20040;
              }
              if ((iVar1 < 0) || (DAT_005ae9c0 <= iVar1)) {
                FUN_004d41c0(this,s_invalid_destination_00573ee8);
                return;
              }
              FUN_00420b80(pvStack_1c,iVar1,uVar3,uStack_14,uVar4,uStack_18,0);
              return;
            }
            if (iVar1 != 0) {
              iVar1 = *(int *)(iVar1 + 0x1c);
              uVar4 = 0xffffffff;
              goto LAB_0051f792;
            }
          }
          FUN_004d41c0(this,s_army_and_or_target_not_found_00573f18);
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


