
void __cdecl op_researchpossiblehere_q(void *vm)

{
  void *this;
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  uint uStack_14;
  float fStack_10;
  uint uStack_c;
  uint auStack_8 [2];
  
  this = vm;
  iVar1 = FUN_004bdce0(vm,&vm);
  if (iVar1 != 0) {
    FUN_0040adb0(this,auStack_8);
    iVar1 = FUN_004026a0(auStack_8,&uStack_14,&uStack_c,&fStack_10);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    uVar2 = FUN_00482ac0(&DAT_005aa12c,uStack_14,2);
    if ((((uVar2 != 0) && (*(int *)(uVar2 + 0x58) == 0xe)) &&
        (*(int *)(uVar2 + 0x4c) == *(int *)((int)vm + 0x15a8))) && (0 < *(int *)(uVar2 + 0x5c))) {
      uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)(uVar2 + 0x80),2);
      if (((uVar2 != 0) && (*(int *)(uVar2 + 0x58) == 9)) &&
         ((*(int *)(uVar2 + 0x4c) == *(int *)((int)vm + 0x15a8) &&
          ((0 < *(int *)(uVar2 + 0x5c) && (iVar1 = 0, 0 < DAT_005aee6c)))))) {
        do {
          iVar3 = FUN_004beef0((void *)((int)vm + 0x34),iVar1);
          if (iVar3 == 0) {
            pbVar4 = (byte *)FUN_004efe80(&DAT_005aee6c,iVar1);
            if (((-1 < *(int *)(pbVar4 + 0x10)) && (*(int *)(pbVar4 + 0x10) < 4)) &&
               ((*pbVar4 & 0xc) == 0)) {
              uVar5 = 0xffffffff;
              goto LAB_0044699b;
            }
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < DAT_005aee6c);
      }
      uVar5 = 0;
LAB_0044699b:
      if (*(int *)((int)this + 0x54) == 0) {
        *(undefined4 *)((int)this + 0x90) = 3;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        return;
      }
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = uVar5;
      return;
    }
    if (*(int *)((int)this + 0x54) != 0) {
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0;
      return;
    }
    FUN_00404ab0(this,3);
  }
  return;
}


