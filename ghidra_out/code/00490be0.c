
void __cdecl op_additem(void *vm)

{
  void *this;
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_18 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_14 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_18 = 0;
    uStack_14 = uStack_4;
  }
  if ((char)uStack_18 != '\0') {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_8 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      uVar3 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
      uVar3 = uStack_4;
    }
    if ((char)uStack_8 != '\0') {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar1 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar1;
        uVar2 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
        uVar4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
      }
      else {
        FUN_00404ab0(this,6);
        uVar2 = 0;
        uVar4 = uStack_4;
      }
      if ((char)uVar2 != '\0') {
        if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
          iVar1 = *(int *)((int)this + 0x54) + 1;
          *(int *)((int)this + 0x54) = iVar1;
          uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
          uStack_c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
        }
        else {
          FUN_00404ab0(this,6);
          uStack_10 = 0;
          uStack_c = uStack_4;
        }
        iVar1 = FUN_004026a0(&uStack_10,&uStack_2c,(uint *)&fStack_1c,&fStack_20);
        if (iVar1 == 0) {
          FUN_00404ab0(this,0xe);
          return;
        }
        FUN_0040adb0(this,&uStack_10);
        iVar1 = FUN_004026a0(&uStack_10,&uStack_28,(uint *)&fStack_20,&fStack_1c);
        if (iVar1 != 0) {
          FUN_0040adb0(this,&uStack_10);
          iVar1 = FUN_004026a0(&uStack_10,&uStack_24,(uint *)&fStack_20,&fStack_1c);
          if (iVar1 != 0) {
            FUN_0040adb0(this,&uStack_10);
            iVar1 = FUN_004026a0(&uStack_10,(uint *)&vm,(uint *)&fStack_20,&fStack_1c);
            if (iVar1 != 0) {
              this_00 = (void *)FUN_005005f0(&DAT_00584ae8,(uint)vm);
              if (this_00 == (void *)0x0) {
                FUN_004d41c0(this,s_bad_dialog_identifier_0055c384);
                return;
              }
              iVar1 = FUN_0048d970(this_00,uStack_24,uStack_28,uStack_2c,uVar2,uVar4,uStack_8,uVar3,
                                   uStack_18,uStack_14);
              if (iVar1 < 0) {
                if (iVar1 == -1) {
                  pcVar5 = s_additem_failed___max_exceeded_0055c4fc;
                }
                else if (iVar1 == -2) {
                  pcVar5 = s_duplicate_subdialogs_not_support_0055c4d8;
                }
                else if (iVar1 == -3) {
                  pcVar5 = s_cannot_add_open_dialog_as_an_ite_0055c4b4;
                }
                else if (iVar1 == -4) {
                  pcVar5 = s_duplicate_item_in_same_position_0055c494;
                }
                else {
                  pcVar5 = s_additem_failed_0055c484;
                }
                FUN_004d41c0(this,pcVar5);
                iVar1 = -1;
              }
              FUN_0041d1d0(this,1,iVar1);
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
    }
  }
  return;
}


