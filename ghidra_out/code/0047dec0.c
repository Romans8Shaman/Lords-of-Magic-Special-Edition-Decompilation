
void __cdecl op_addfollower(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  uint uVar3;
  int *this_00;
  int iVar4;
  char *pcVar5;
  float fStack_28;
  float fStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  float fStack_c;
  uint auStack_8 [2];
  
  this = vm;
  FUN_0040adb0(vm,auStack_8);
  iVar2 = FUN_004026a0(auStack_8,(uint *)&fStack_c,&uStack_10,&fStack_28);
  if (iVar2 != 0) {
    FUN_0040adb0(this,auStack_8);
    iVar2 = FUN_004026a0(auStack_8,&uStack_10,(uint *)&fStack_c,&fStack_24);
    if (iVar2 != 0) {
      FUN_0040adb0(this,auStack_8);
      iVar2 = FUN_004026a0(auStack_8,&uStack_20,&uStack_10,&fStack_c);
      if (iVar2 != 0) {
        FUN_0040adb0(this,auStack_8);
        iVar2 = FUN_004026a0(auStack_8,&uStack_1c,&uStack_10,&fStack_c);
        if (iVar2 != 0) {
          FUN_0040adb0(this,auStack_8);
          iVar2 = FUN_004026a0(auStack_8,&uStack_18,&uStack_10,&fStack_c);
          if (iVar2 != 0) {
            FUN_0040adb0(this,auStack_8);
            iVar2 = FUN_004026a0(auStack_8,&uStack_14,&uStack_10,&fStack_c);
            if (iVar2 != 0) {
              FUN_0040adb0(this,auStack_8);
              iVar2 = FUN_004026a0(auStack_8,(uint *)&vm,&uStack_10,&fStack_c);
              if (iVar2 != 0) {
                uVar3 = FUN_00482ac0(&DAT_005aa12c,(int)vm,0);
                if (uVar3 == 0) {
                  pcVar5 = s_addfollower___no_such_army_0055b14c;
                }
                else {
                  this_00 = FUN_0047cc00((int)vm,uStack_14,uStack_18,uStack_1c,uStack_20,
                                         (int)fStack_24,(int)fStack_28);
                  if (this_00 != (int *)0x0) {
                    iVar2 = FUN_004a7d50(&DAT_005ae958,this_00,*(int *)(uVar3 + 0x1c));
                    (/*IC:0047e0c0*/**(code **)(*this_00 + 0x2c))(this_00);
                    if (*(int *)((int)this + 0x54) == 0) {
                      FUN_00404ab0(this,3);
                      return;
                    }
                    iVar1 = *(int *)((int)this + 0x50);
                    iVar4 = *(int *)((int)this + 0x54) + -1;
                    *(int *)((int)this + 0x54) = iVar4;
                    *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
                    *(int *)(iVar1 + 4 + iVar4 * 8) = iVar2;
                    return;
                  }
                  pcVar5 = s_Couldn_t_create_follower_0055b130;
                }
                FUN_004d41c0(this,pcVar5);
                FUN_0041d1d0(this,1,0xffffffff);
                return;
              }
            }
          }
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


