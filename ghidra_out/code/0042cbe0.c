
void __cdecl op_getartifactwithcastablespell(void *vm)

{
  int *this;
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_18;
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
  iVar2 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
  }
  else {
    iVar2 = FUN_0041bf10(pvVar1,&iStack_18,(int *)&vm);
    if (iVar2 == 0) {
      return;
    }
    for (this = *(int **)(iStack_18 + 0xe0 + (int)vm * 0x4c); this != (int *)0x0;
        this = (int *)this[5]) {
      iVar2 = FUN_00427b80(*this);
      if ((*(uint *)(iVar2 + 8) == uStack_14) &&
         (iVar2 = FUN_0042c500(this,*(int *)(iStack_18 + 0x28),(int)vm,1), iVar2 != 0)) {
        iVar2 = this[3];
        if (*(int *)((int)pvVar1 + 0x54) != 0) {
          iVar3 = *(int *)((int)pvVar1 + 0x50);
          iVar4 = *(int *)((int)pvVar1 + 0x54) + -1;
          *(int *)((int)pvVar1 + 0x54) = iVar4;
          *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
          *(int *)(iVar3 + 4 + iVar4 * 8) = iVar2;
          return;
        }
        goto LAB_0042cce4;
      }
    }
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar3;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
      return;
    }
LAB_0042cce4:
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
  }
  FUN_004d4550(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  return;
}


