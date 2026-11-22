
void __cdecl op_bargraph(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  uint auStack_28 [4];
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  puVar4 = auStack_28;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  FUN_0040adb0(vm,&uStack_30);
  iVar2 = FUN_004026a0(&uStack_30,&uStack_c,&uStack_34,(float *)&vm);
  if (iVar2 != 0) {
    FUN_0040adb0(this,&uStack_30);
    iVar2 = FUN_004026a0(&uStack_30,&uStack_10,&uStack_34,(float *)&vm);
    if (iVar2 != 0) {
      FUN_0040adb0(this,&uStack_30);
      iVar2 = FUN_004026a0(&uStack_30,&uStack_14,&uStack_34,(float *)&vm);
      if (iVar2 != 0) {
        FUN_0040adb0(this,&uStack_30);
        iVar2 = FUN_004026a0(&uStack_30,&uStack_18,&uStack_34,(float *)&vm);
        if (iVar2 != 0) {
          FUN_0040adb0(this,&uStack_30);
          iVar2 = FUN_004026a0(&uStack_30,auStack_28 + 3,&uStack_34,(float *)&vm);
          if (iVar2 != 0) {
            if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
              iVar2 = *(int *)((int)this + 0x54) + 1;
              *(int *)((int)this + 0x54) = iVar2;
              uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
              uStack_2c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
            }
            else {
              *(undefined4 *)((int)this + 0x90) = 6;
              FUN_004d4550(this);
              *(undefined4 *)((int)this + 0x90) = 0;
              *(undefined4 *)((int)this + 0xa4) = 0;
              uStack_8 = 0;
            }
            uStack_4 = uStack_2c;
            FUN_0040adb0(this,&uStack_30);
            iVar2 = FUN_004026a0(&uStack_30,auStack_28 + 1,&uStack_34,(float *)&vm);
            if (iVar2 == 0) {
              FUN_00404ab0(this,0xe);
              return;
            }
            FUN_0040adb0(this,&uStack_30);
            iVar2 = FUN_004026a0(&uStack_30,auStack_28,&uStack_34,(float *)&vm);
            if (iVar2 == 0) {
              FUN_00404ab0(this,0xe);
              return;
            }
            if (((char)uStack_8 == '\x06') && ((uStack_8 & 0x100) == 0)) {
              auStack_28[2] = 0;
            }
            else {
              iVar2 = FUN_004026a0(&uStack_8,auStack_28 + 2,&uStack_34,(float *)&vm);
              if (iVar2 == 0) {
                FUN_004d41c0(this,s_bargraph___invalid_amount_type_00555f80);
                return;
              }
            }
            iVar2 = FUN_004921c0(&DAT_005a7b50,auStack_28,auStack_28);
            if (*(int *)((int)this + 0x54) == 0) {
              FUN_00404ab0(this,3);
              return;
            }
            iVar3 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar3;
            iVar1 = *(int *)((int)this + 0x50);
            *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
            *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
            return;
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


