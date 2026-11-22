
void __cdecl op_slider(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  uint auStack_4c [4];
  uint auStack_3c [6];
  uint auStack_24 [6];
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  this = vm;
  puVar3 = auStack_4c;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_0040adb0(vm,&uStack_54);
  iVar2 = FUN_004026a0(&uStack_54,auStack_4c + 3,&uStack_58,(float *)&vm);
  if (iVar2 != 0) {
    FUN_0040adb0(this,&uStack_54);
    iVar2 = FUN_004026a0(&uStack_54,&uStack_4,&uStack_58,(float *)&vm);
    if (iVar2 != 0) {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar2 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar2;
        uStack_c = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
        uStack_50 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
      }
      else {
        *(undefined4 *)((int)this + 0x90) = 6;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        uStack_c = 0;
      }
      uStack_8 = uStack_50;
      if (5 < (int)auStack_4c[3]) {
        FUN_004d41c0(this,s_slider__max_controls_exceeded_00573044);
        if (*(int *)((int)this + 0x54) == 0) {
          FUN_00404ab0(this,3);
          return;
        }
        iVar1 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar1;
        iVar2 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar2 + iVar1 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar1 * 8) = 0xffffffff;
        return;
      }
      if (-1 < (int)auStack_4c[3]) {
        puVar3 = auStack_24 + auStack_4c[3];
        uVar4 = auStack_4c[3];
        do {
          FUN_0040adb0(this,&uStack_54);
          iVar2 = FUN_004026a0(&uStack_54,puVar3,&uStack_58,(float *)&vm);
          if (iVar2 == 0) goto LAB_004ec62a;
          uVar4 = uVar4 + -1;
          puVar3 = puVar3 + -1;
        } while (-1 < (int)uVar4);
        if (-1 < (int)auStack_4c[3]) {
          puVar3 = auStack_3c + auStack_4c[3];
          uVar4 = auStack_4c[3];
          do {
            FUN_0040adb0(this,&uStack_54);
            iVar2 = FUN_004026a0(&uStack_54,puVar3,&uStack_58,(float *)&vm);
            if (iVar2 == 0) goto LAB_004ec62a;
            uVar4 = uVar4 + -1;
            puVar3 = puVar3 + -1;
          } while (-1 < (int)uVar4);
        }
      }
      FUN_0040adb0(this,&uStack_54);
      iVar2 = FUN_004026a0(&uStack_54,auStack_4c + 2,&uStack_58,(float *)&vm);
      if (iVar2 != 0) {
        FUN_0040adb0(this,&uStack_54);
        iVar2 = FUN_004026a0(&uStack_54,auStack_4c + 1,&uStack_58,(float *)&vm);
        if (iVar2 == 0) {
          FUN_00404ab0(this,0xe);
          return;
        }
        FUN_0040adb0(this,&uStack_54);
        iVar2 = FUN_004026a0(&uStack_54,auStack_4c,&uStack_58,(float *)&vm);
        if (iVar2 == 0) {
          FUN_00404ab0(this,0xe);
          return;
        }
        iVar2 = FUN_00492100(&DAT_005a7b50,auStack_4c,auStack_4c);
        FUN_004ecc30(this,iVar2);
        return;
      }
LAB_004ec62a:
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


