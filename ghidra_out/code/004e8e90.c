
void __cdecl op_combat_grouploc(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iStack_14;
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
  iVar2 = FUN_004026a0(&uStack_8,&uStack_10,&uStack_c,(float *)&vm);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  iVar2 = FUN_0041be40(this,&iStack_14);
  if (iVar2 != 0) {
    iVar2 = FUN_004e7300(iStack_14);
    if (((int)uStack_10 < 0) || (iVar2 < (int)uStack_10)) {
      if (*(int *)((int)this + 0x54) != 0) {
        iVar2 = *(int *)((int)this + 0x50);
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
        return;
      }
    }
    else {
      iVar2 = uStack_10 * 5;
      vm = DAT_005ae998;
      uStack_c = DAT_005ae98c;
      if ((int)DAT_005ae998 <= (int)DAT_005ae98c) {
        do {
          iVar3 = FUN_004f6000(&DAT_005ae974,(int)vm);
          if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) &&
              (*(int *)(iStack_14 + 0x48) == *(int *)(iVar3 + 0x48))) &&
             ((((~*(uint *)(iVar3 + 0x30) & 0x100) != 0 && (iVar4 = FUN_00407d50(iVar3), iVar4 == 0)
               ) && ((iVar4 = FUN_00420620(iVar3), iVar4 == 0 && (iVar2 < iVar2 + 5)))))) {
            piVar5 = &DAT_00584690 + uStack_10 * 5;
            iVar4 = iVar2;
            do {
              if ((int)*(char *)(iVar3 + 0x5ac) == *piVar5) {
                uVar1 = *(undefined4 *)(iVar3 + 0x1c);
                if (*(int *)((int)this + 0x54) == 0) {
                  *(undefined4 *)((int)this + 0x90) = 3;
                  FUN_004d4550(this);
                  *(undefined4 *)((int)this + 0x90) = 0;
                  *(undefined4 *)((int)this + 0xa4) = 0;
                  return;
                }
                iVar2 = *(int *)((int)this + 0x50);
                iVar3 = *(int *)((int)this + 0x54) + -1;
                *(int *)((int)this + 0x54) = iVar3;
                *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
                *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar1;
                return;
              }
              iVar4 = iVar4 + 1;
              piVar5 = piVar5 + 1;
            } while (iVar4 < iVar2 + 5);
          }
          vm = (void *)((int)vm + 1);
        } while ((int)vm <= (int)uStack_c);
      }
      if (*(int *)((int)this + 0x54) != 0) {
        iVar2 = *(int *)((int)this + 0x50);
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
        return;
      }
    }
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  return;
}


