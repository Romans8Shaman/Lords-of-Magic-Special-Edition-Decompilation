
void __cdecl op_combat_playerdeadtarget(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
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
  iVar2 = FUN_004026a0(&uStack_8,&uStack_1c,&uStack_10,(float *)&vm);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  FUN_0040adb0(this,&uStack_8);
  iVar2 = FUN_004026a0(&uStack_8,&uStack_c,&uStack_10,(float *)&vm);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    FUN_0040adb0(this,&uStack_8);
    iVar2 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_10,(float *)&vm);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      FUN_0040adb0(this,&uStack_8);
      iVar2 = FUN_004026a0(&uStack_8,&uStack_18,&uStack_10,(float *)&vm);
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0x90) = 0xe;
      }
      else {
        iVar2 = -1;
        iVar5 = 99;
        uStack_10 = DAT_005ae98c;
        vm = DAT_005ae998;
        if ((int)DAT_005ae998 <= (int)DAT_005ae98c) {
          do {
            iVar3 = FUN_004f6000(&DAT_005ae974,(int)vm);
            if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) &&
                (*(uint *)(iVar3 + 0x48) == uStack_1c)) &&
               ((((~*(uint *)(iVar3 + 0x30) & 0x100) == 0 && (*(uint *)(iVar3 + 0x28) != uStack_18))
                && (*(uint *)(iVar3 + 0x28) != uStack_14)))) {
              iVar4 = FUN_004e91a0(iVar3);
              if (iVar4 == 0) {
                uVar1 = *(undefined4 *)(iVar3 + 0x28);
                if (*(int *)((int)this + 0x54) == 0) {
                  *(undefined4 *)((int)this + 0x90) = 3;
                  FUN_004d4550(this);
                  *(undefined4 *)((int)this + 0x90) = 0;
                  *(undefined4 *)((int)this + 0xa4) = 0;
                  return;
                }
                iVar2 = *(int *)((int)this + 0x50);
                iVar5 = *(int *)((int)this + 0x54) + -1;
                *(int *)((int)this + 0x54) = iVar5;
                *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
                *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = uVar1;
                return;
              }
              if (iVar2 == -1) {
                iVar2 = *(int *)(iVar3 + 0x28);
                iVar5 = iVar4;
              }
              else {
                iVar4 = FUN_004e91a0(iVar3);
                if (iVar4 < iVar5) {
                  iVar2 = *(int *)(iVar3 + 0x28);
                  iVar5 = iVar4;
                }
              }
            }
            vm = (void *)((int)vm + 1);
          } while ((int)vm <= (int)uStack_10);
        }
        if (*(int *)((int)this + 0x54) != 0) {
          iVar5 = *(int *)((int)this + 0x50);
          iVar3 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar3;
          *(undefined4 *)(iVar5 + iVar3 * 8) = 1;
          *(int *)(iVar5 + 4 + iVar3 * 8) = iVar2;
          return;
        }
        *(undefined4 *)((int)this + 0x90) = 3;
      }
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


