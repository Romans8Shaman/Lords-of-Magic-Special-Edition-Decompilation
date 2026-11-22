
void __cdecl op_findgreattemple(void *vm)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  void *this;
  int iVar4;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar3 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
  }
  else {
    for (this = (void *)FUN_004fbe60(&DAT_005ae974,0,1); this != (void *)0x0;
        this = (void *)FUN_004fbe60(&DAT_005ae974,(int)this,1)) {
      iVar3 = FUN_0050f7e0(this,(int)vm);
      if (iVar3 != 0) {
        uVar1 = *(undefined4 *)((int)this + 0x28);
        if (*(int *)((int)pvVar2 + 0x54) != 0) {
          iVar3 = *(int *)((int)pvVar2 + 0x50);
          iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
          *(int *)((int)pvVar2 + 0x54) = iVar4;
          *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
          return;
        }
        goto LAB_0050fe2c;
      }
    }
    if (*(int *)((int)pvVar2 + 0x54) != 0) {
      iVar3 = *(int *)((int)pvVar2 + 0x50);
      iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
      *(int *)((int)pvVar2 + 0x54) = iVar4;
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0xffffffff;
      return;
    }
LAB_0050fe2c:
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
  }
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
}


