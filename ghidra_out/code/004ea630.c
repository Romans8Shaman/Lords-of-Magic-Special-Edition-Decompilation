
void __cdecl op_setselectionbox(void *vm)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uStack_20;
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_4;
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(uint *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    uVar3 = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  if (*(int *)((int)pvVar2 + 0x54) < *(int *)((int)pvVar2 + 0x58)) {
    iVar1 = *(int *)((int)pvVar2 + 0x54) + 1;
    *(int *)((int)pvVar2 + 0x54) = iVar1;
    uStack_10 = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -8 + iVar1 * 8);
    uStack_c = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar2 + 0x90) = 6;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    uStack_10 = 0;
    uStack_c = uStack_4;
  }
  iVar1 = FUN_004026a0(&uStack_10,&uStack_20,(uint *)&fStack_14,&fStack_18);
  if (iVar1 != 0) {
    if (*(int *)((int)pvVar2 + 0x54) < *(int *)((int)pvVar2 + 0x58)) {
      iVar1 = *(int *)((int)pvVar2 + 0x54) + 1;
      *(int *)((int)pvVar2 + 0x54) = iVar1;
      uStack_10 = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -8 + iVar1 * 8);
      uStack_c = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)pvVar2 + 0x90) = 6;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
      uStack_10 = 0;
      uStack_c = uStack_4;
    }
    iVar1 = FUN_004026a0(&uStack_10,&uStack_1c,(uint *)&fStack_18,&fStack_14);
    if (iVar1 != 0) {
      if (*(int *)((int)pvVar2 + 0x54) < *(int *)((int)pvVar2 + 0x58)) {
        iVar1 = *(int *)((int)pvVar2 + 0x54) + 1;
        *(int *)((int)pvVar2 + 0x54) = iVar1;
        uStack_10 = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -8 + iVar1 * 8);
        uStack_c = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -4 + iVar1 * 8);
      }
      else {
        *(undefined4 *)((int)pvVar2 + 0x90) = 6;
        FUN_004d4550(pvVar2);
        *(undefined4 *)((int)pvVar2 + 0x90) = 0;
        *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
        uStack_10 = 0;
        uStack_c = uStack_4;
      }
      iVar1 = FUN_004026a0(&uStack_10,(uint *)&vm,(uint *)&fStack_18,&fStack_14);
      if (iVar1 != 0) {
        pvVar2 = (void *)FUN_00492820(&DAT_005a7b50,(int)vm);
        if (pvVar2 != (void *)0x0) {
          FUN_004ea340(pvVar2,uStack_1c,uStack_20,uVar3,uStack_4);
        }
        return;
      }
    }
  }
  *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
}


