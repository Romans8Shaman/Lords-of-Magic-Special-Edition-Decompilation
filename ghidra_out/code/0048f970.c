
void __cdecl op_dialoginfo(void *vm)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  void *this_00;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  puVar1 = (undefined4 *)FUN_0040adb0(vm,&uStack_8);
  uStack_18 = *puVar1;
  uStack_14 = puVar1[1];
  if ((char)uStack_18 != '\0') {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_20 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      uStack_1c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_1c = uStack_4;
      uStack_20 = 0;
    }
    if ((char)uStack_20 != '\0') {
      puVar1 = (undefined4 *)FUN_0040adb0(this,&uStack_8);
      uStack_10 = *puVar1;
      uStack_c = puVar1[1];
      if ((char)uStack_10 != '\0') {
        if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
          iVar2 = *(int *)((int)this + 0x54) + 1;
          *(int *)((int)this + 0x54) = iVar2;
          uVar4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
          uVar5 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
        }
        else {
          FUN_00404ab0(this,6);
          uVar4 = 0;
          uVar5 = uStack_4;
        }
        if ((char)uVar4 != '\0') {
          FUN_0040adb0(this,&uStack_8);
          iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_24,&fStack_28);
          if (iVar2 != 0) {
            FUN_0040adb0(this,&uStack_8);
            iVar2 = FUN_004026a0(&uStack_8,&uStack_30,(uint *)&fStack_28,&fStack_24);
            if (iVar2 != 0) {
              FUN_0040adb0(this,&uStack_8);
              iVar2 = FUN_004026a0(&uStack_8,&uStack_2c,(uint *)&fStack_28,&fStack_24);
              if (iVar2 != 0) {
                FUN_0040adb0(this,&uStack_8);
                iVar2 = FUN_004026a0(&uStack_8,&uStack_34,(uint *)&fStack_28,&fStack_24);
                if (iVar2 != 0) {
                  iVar2 = FUN_00505750(&DAT_00584ae8,uStack_34);
                  if (iVar2 != 0) {
                    DAT_005aa128 = 1;
                  }
                  this_00 = (void *)FUN_005005f0(&DAT_00584ae8,uStack_34);
                  if (this_00 == (void *)0x0) {
                    FUN_004d41c0(this,s_bad_dialog_identifier_0055c384);
                    return;
                  }
                  iVar2 = FUN_0048d760(this_00,uStack_2c,uStack_30,(int)vm,uVar4,uVar5,uStack_10,
                                       uStack_c,uStack_20,uStack_1c,uStack_18,uStack_14);
                  if (iVar2 == 0) {
                    FUN_004d41c0(this,s_dialoginfo_failed_0055c3a8);
                    return;
                  }
                  if (*(void **)((int)this_00 + 0x78) == (void *)0x0) {
                    return;
                  }
                  puVar3 = (uint *)FUN_0048d810(*(void **)((int)this_00 + 0x78),
                                                *(int *)((int)this_00 + 0x7c));
                  if (puVar3 == (uint *)0x0) {
                    return;
                  }
                  uStack_30 = *puVar3;
                  vm = (void *)puVar3[1];
                  FUN_0048ea90(this_00,*(int *)(*(int *)((int)this_00 + 0x78) + 0x3c) + uStack_30);
                  FUN_0048eb00(this_00,*(int *)(*(int *)((int)this_00 + 0x78) + 0x40) + (int)vm);
                  return;
                }
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
  }
  return;
}


