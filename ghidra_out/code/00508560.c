
void __cdecl op_enumstolenresource(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  undefined *puVar7;
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  uint uStack_10;
  int *piStack_c;
  uint uStack_8;
  int *piStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_10 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_c = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_10 = 0;
    piStack_c = piStack_4;
  }
  uVar6 = uStack_10;
  if ((char)uStack_10 != '\0') {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      piStack_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_14,&fStack_18);
    if (iVar2 == 0) {
      FUN_00404ab0(this,0xe);
      return;
    }
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      piStack_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar2 = FUN_004026a0(&uStack_8,&uStack_1c,(uint *)&fStack_18,&fStack_14);
    if (iVar2 == 0) {
      FUN_00404ab0(this,0xe);
      return;
    }
    if (((int)uStack_1c < 0) || (0xf < (int)uStack_1c)) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = &DAT_005af194 + uStack_1c * 0x1d84;
    }
    if (puVar7 != (undefined *)0x0) {
      iVar2 = 0;
      pvVar5 = vm;
      do {
        iVar1 = *(int *)(puVar7 + (iVar2 + (int)pvVar5 * 0x32) * 4 + 0x68);
        if (iVar2 < 3) {
          if (0 < iVar1) {
            if (*(int *)((int)this + 0x54) == 0) {
              FUN_00404ab0(this,3);
            }
            else {
              iVar4 = *(int *)((int)this + 0x50);
              iVar3 = *(int *)((int)this + 0x54) + -1;
              *(int *)((int)this + 0x54) = iVar3;
              *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
              *(int *)(iVar4 + 4 + iVar3 * 8) = iVar1;
              uVar6 = uStack_10;
            }
            if (*(int *)((int)this + 0x54) == 0) {
LAB_00508765:
              FUN_00404ab0(this,3);
            }
            else {
              iVar1 = *(int *)((int)this + 0x50);
              iVar4 = *(int *)((int)this + 0x54) + -1;
              *(int *)((int)this + 0x54) = iVar4;
              *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
              *(int *)(iVar1 + 4 + iVar4 * 8) = iVar2;
            }
LAB_0050876e:
            FUN_004d05e0(this,uVar6,piStack_c);
            pvVar5 = vm;
          }
        }
        else if (iVar1 != -1) {
          if (*(int *)((int)this + 0x54) == 0) {
            FUN_00404ab0(this,3);
          }
          else {
            iVar4 = *(int *)((int)this + 0x50);
            iVar3 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar3;
            *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
            *(int *)(iVar4 + 4 + iVar3 * 8) = iVar1;
            uVar6 = uStack_10;
          }
          if (*(int *)((int)this + 0x54) == 0) goto LAB_00508765;
          iVar1 = *(int *)((int)this + 0x50);
          iVar4 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar4;
          *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
          *(int *)(iVar1 + 4 + iVar4 * 8) = iVar2;
          goto LAB_0050876e;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x32);
    }
  }
  return;
}


