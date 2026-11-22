
void __cdecl op_getarmyshare(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack_18;
  int iStack_14;
  uint uStack_10;
  uint uStack_c;
  uint auStack_8 [2];
  
  this = vm;
  iVar4 = 0;
  FUN_0040adb0(vm,auStack_8);
  iVar1 = FUN_004026a0(auStack_8,&uStack_10,&uStack_c,(float *)&vm);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    FUN_0040adb0(this,auStack_8);
    iVar1 = FUN_004026a0(auStack_8,&uStack_18,&uStack_c,(float *)&vm);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      if (*(int *)((int)this + 0x54) == 0) {
        FUN_00404ab0(this,3);
      }
      else {
        iVar1 = *(int *)((int)this + 0x50);
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(uint *)(iVar1 + 4 + iVar2 * 8) = uStack_18;
      }
      iVar1 = FUN_0041be40(this,&iStack_14);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = 0;
      if (0 < *(int *)(iStack_14 + 0x4c)) {
        vm = (void *)0x0;
        do {
          iVar2 = 0;
          iVar3 = *(int *)(iStack_14 + 0xc4 + (int)vm);
          if (iVar3 != -1) {
            if (((-1 < iVar3) && (iVar3 < DAT_005cd2f0)) && (DAT_005cd2f4 != 0)) {
              iVar2 = DAT_005cd2f4 + iVar3 * 1000;
            }
            iVar3 = FUN_005221f0(uStack_18,iVar1);
            if (uStack_10 == 0) {
              iVar2 = *(int *)(iVar2 + 0x140);
LAB_00460d71:
              iVar4 = iVar4 + (iVar2 * iVar3 * 0x100 >> 0x10);
            }
            else if (uStack_10 == 2) {
              iVar4 = iVar4 + (*(int *)(iVar2 + 0x144) * iVar3 * 0x100 >> 0x10);
            }
            else if (uStack_10 == 3) {
              iVar2 = *(int *)(iVar2 + 0x148);
              goto LAB_00460d71;
            }
          }
          iVar1 = iVar1 + 1;
          vm = (void *)((int)vm + 0x4c);
        } while (iVar1 < *(int *)(iStack_14 + 0x4c));
      }
      if (*(int *)((int)this + 0x54) != 0) {
        iVar1 = *(int *)((int)this + 0x50);
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(int *)(iVar1 + 4 + iVar2 * 8) = iVar4;
        return;
      }
      *(undefined4 *)((int)this + 0x90) = 3;
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


