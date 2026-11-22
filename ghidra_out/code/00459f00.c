
void __cdecl op_isplayerinsidecity_q(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack_14;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  pvVar1 = vm;
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
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar3;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0;
      return;
    }
  }
  else {
    fStack_10 = DAT_005ae98c;
    iVar2 = DAT_005ae998;
    if (DAT_005ae998 <= (int)DAT_005ae98c) {
      do {
        iVar3 = FUN_004f6000(&DAT_005ae974,iVar2);
        if (((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) && (*(void **)(iVar3 + 0x48) == vm)) {
          iVar4 = FUN_00407d50(iVar3);
          if (iVar4 == 0) {
            FUN_004a9a60(&DAT_005ae958,&uStack_14,*(int *)(iVar3 + 0x1c));
            if ((uStack_14 & 0x1000) != 0) {
              if (*(int *)((int)pvVar1 + 0x54) != 0) {
                iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
                *(int *)((int)pvVar1 + 0x54) = iVar3;
                iVar2 = *(int *)((int)pvVar1 + 0x50);
                *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
                *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
                return;
              }
              goto LAB_0045a034;
            }
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 <= (int)fStack_10);
    }
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar3;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0;
      return;
    }
  }
LAB_0045a034:
  *(undefined4 *)((int)pvVar1 + 0x90) = 3;
  FUN_004d4550(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  return;
}


