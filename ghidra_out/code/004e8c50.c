
void __cdecl op_combat_enumgrouparmies(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int *piStack_10;
  uint uStack_c;
  uint uStack_8;
  int *piStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_0041da00((int)this);
  if (iVar2 == 0) {
    if (((char)uStack_8 == '\x06') && ((uStack_8 & 0x100) == 0)) goto LAB_004e8cbe;
    FUN_00404ab0(this,0x12);
  }
  uStack_8 = 0;
LAB_004e8cbe:
  if ((char)uStack_8 != '\0') {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_14 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      piStack_10 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_14 = 0;
      piStack_10 = piStack_4;
    }
    iVar2 = FUN_004026a0(&uStack_14,&uStack_18,&uStack_c,(float *)&vm);
    if (iVar2 == 0) {
      FUN_00404ab0(this,0xe);
      return;
    }
    iVar2 = FUN_0041be40(this,&iStack_20);
    if (iVar2 != 0) {
      iVar2 = FUN_004e7300(iStack_20);
      if ((-1 < (int)uStack_18) && ((int)uStack_18 <= iVar2)) {
        uVar6 = uStack_18 * 5;
        uStack_c = DAT_005ae98c;
        iVar2 = DAT_005ae998;
        uStack_14 = uVar6;
        if (DAT_005ae998 <= (int)DAT_005ae98c) {
          do {
            iStack_1c = iVar2;
            iVar3 = FUN_004f6000(&DAT_005ae974,iVar2);
            if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) &&
                (*(int *)(iStack_20 + 0x48) == *(int *)(iVar3 + 0x48))) &&
               ((~*(uint *)(iVar3 + 0x30) & 0x100) != 0)) {
              iVar4 = FUN_00407d50(iVar3);
              if (iVar4 == 0) {
                iVar4 = FUN_00420620(iVar3);
                if (iVar4 == 0) {
                  if ((int)uVar6 < (int)(uVar6 + 5)) {
                    vm = &DAT_00584690 + uVar6;
                    iVar2 = (uVar6 + 5) - uVar6;
                    do {
                      if ((int)*(char *)(iVar3 + 0x5ac) == *(int *)vm) {
                        uVar1 = *(undefined4 *)(iVar3 + 0x28);
                        if (*(int *)((int)this + 0x54) == 0) {
                          *(undefined4 *)((int)this + 0x90) = 3;
                          FUN_004d4550(this);
                          *(undefined4 *)((int)this + 0x90) = 0;
                          *(undefined4 *)((int)this + 0xa4) = 0;
                        }
                        else {
                          iVar4 = *(int *)((int)this + 0x50);
                          iVar5 = *(int *)((int)this + 0x54) + -1;
                          *(int *)((int)this + 0x54) = iVar5;
                          *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
                          *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = uVar1;
                          uVar6 = uStack_14;
                        }
                        FUN_004d05e0(this,uStack_8,piStack_4);
                      }
                      vm = (void *)((int)vm + 4);
                      iVar2 = iVar2 + -1;
                    } while (iVar2 != 0);
                  }
                  iVar2 = iStack_1c;
                }
              }
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 <= (int)uStack_c);
        }
      }
    }
  }
  return;
}


