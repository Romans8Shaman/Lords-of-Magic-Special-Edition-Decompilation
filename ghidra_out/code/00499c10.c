
void __cdecl op_getplayergroupintoformation(void *vm)

{
  void *this;
  int iVar1;
  undefined *puVar2;
  int iVar3;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  float fStack_10;
  float fStack_c;
  uint auStack_8 [2];
  
  this = vm;
  FUN_0040adb0(vm,auStack_8);
  iVar1 = FUN_004026a0(auStack_8,&uStack_1c,(uint *)&fStack_c,&fStack_10);
  if (iVar1 != 0) {
    FUN_0040adb0(this,auStack_8);
    iVar1 = FUN_004026a0(auStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
    if (iVar1 != 0) {
      FUN_0040adb0(this,auStack_8);
      iVar1 = FUN_004026a0(auStack_8,&uStack_24,(uint *)&fStack_10,&fStack_c);
      if (iVar1 != 0) {
        FUN_0040adb0(this,auStack_8);
        iVar1 = FUN_004026a0(auStack_8,&uStack_20,(uint *)&fStack_10,&fStack_c);
        if (iVar1 != 0) {
          FUN_0040adb0(this,auStack_8);
          iVar1 = FUN_004026a0(auStack_8,&uStack_2c,(uint *)&fStack_10,&fStack_c);
          if (iVar1 != 0) {
            FUN_0040adb0(this,auStack_8);
            iVar1 = FUN_004026a0(auStack_8,&uStack_28,(uint *)&fStack_10,&fStack_c);
            if (iVar1 != 0) {
              FUN_0040adb0(this,auStack_8);
              iVar1 = FUN_004026a0(auStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
              if (iVar1 != 0) {
                FUN_0040adb0(this,auStack_8);
                iVar1 = FUN_004026a0(auStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
                if (iVar1 != 0) {
                  if (((int)vm < 0) || (0xf < (int)vm)) {
                    puVar2 = (undefined *)0x0;
                  }
                  else {
                    puVar2 = &DAT_005af194 + (int)vm * 0x1d84;
                  }
                  if (puVar2 == (undefined *)0x0) {
                    FUN_004d41c0(this,s_no_player_0055c710);
                    return;
                  }
                  if (puVar2 + 0x15e0 != (undefined *)0x0) {
                    iVar1 = FUN_004a51c0(&DAT_005ae958,uStack_28,uStack_2c);
                    iVar3 = FUN_004a51c0(&DAT_005ae958,uStack_20,uStack_24);
                    FUN_00498900(puVar2 + 0x15e0,uStack_14,iVar1,iVar3,uStack_18,uStack_1c);
                  }
                  return;
                }
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


