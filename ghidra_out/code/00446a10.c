
void __cdecl op_enumpossibleresearchtopics(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uStack_24;
  float fStack_20;
  uint uStack_1c;
  uint uStack_18;
  int *piStack_14;
  uint uStack_10;
  int *piStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_18 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_14 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_18 = 0;
    piStack_14 = piStack_c;
  }
  if ((char)uStack_18 != '\0') {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      piStack_c = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_10 = 0;
    }
    iVar2 = FUN_004026a0(&uStack_10,&uStack_24,&uStack_1c,&fStack_20);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    iVar2 = FUN_004bdce0(this,&vm);
    if (iVar2 != 0) {
      uVar5 = 0;
      uStack_10 = 0xffffffff;
      piStack_c = (int *)0xffffffff;
      uStack_8 = 0xffffffff;
      uStack_4 = 0xffffffff;
      if (0 < DAT_005aee6c) {
        do {
          iVar2 = FUN_004beef0((void *)((int)vm + 0x34),uVar5);
          if (iVar2 == 0) {
            pbVar3 = (byte *)FUN_004efe80(&DAT_005aee6c,uVar5);
            iVar2 = *(int *)(pbVar3 + 0x10);
            if ((((-1 < iVar2) && (iVar2 < 4)) && ((*pbVar3 & 0xc) == 0)) &&
               ((*(uint *)(pbVar3 + 8) == uStack_24 && ((int)(&uStack_10)[iVar2] < 0)))) {
              (&uStack_10)[iVar2] = uVar5;
            }
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < DAT_005aee6c);
      }
      iVar2 = 0;
      puVar6 = &uStack_10;
      do {
        uVar5 = *puVar6;
        if (-1 < (int)uVar5) {
          if (*(int *)((int)this + 0x54) == 0) {
            *(undefined4 *)((int)this + 0x90) = 3;
            FUN_004d4550(this);
            *(undefined4 *)((int)this + 0x90) = 0;
            *(undefined4 *)((int)this + 0xa4) = 0;
          }
          else {
            iVar1 = *(int *)((int)this + 0x50);
            iVar4 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar4;
            *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
            *(uint *)(iVar1 + 4 + iVar4 * 8) = uVar5;
          }
          FUN_004d05e0(this,uStack_18,piStack_14);
          iVar1 = *(int *)((int)this + 0x6c);
          *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x70);
          if (iVar1 != 0) {
            return;
          }
        }
        iVar2 = iVar2 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar2 < 4);
    }
  }
  return;
}


