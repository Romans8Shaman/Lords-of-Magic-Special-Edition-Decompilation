
void __cdecl op_stayputatloc(void *vm)

{
  int iVar1;
  void *pvVar2;
  uint uStack_18;
  uint uStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_c,&fStack_10);
  if (iVar1 != 0) {
    if (*(int *)((int)pvVar2 + 0x54) < *(int *)((int)pvVar2 + 0x58)) {
      iVar1 = *(int *)((int)pvVar2 + 0x54) + 1;
      *(int *)((int)pvVar2 + 0x54) = iVar1;
      uStack_8 = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -8 + iVar1 * 8);
      uStack_4 = *(undefined4 *)(*(int *)((int)pvVar2 + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(pvVar2,6);
      uStack_8 = 0;
    }
    iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
    if (iVar1 != 0) {
      if (*(int *)((int)pvVar2 + 0x54) < *(int *)((int)pvVar2 + 0x58)) {
        iVar1 = *(int *)((int)pvVar2 + 0x54) + 1;
        *(int *)((int)pvVar2 + 0x54) = iVar1;
        uStack_8 = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -8 + iVar1 * 8);
        uStack_4 = *(undefined4 *)(*(int *)((int)pvVar2 + 0x50) + -4 + iVar1 * 8);
      }
      else {
        *(undefined4 *)((int)pvVar2 + 0x90) = 6;
        FUN_004d4550(pvVar2);
        *(undefined4 *)((int)pvVar2 + 0x90) = 0;
        *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
        uStack_8 = 0;
      }
      iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
      if (iVar1 != 0) {
        pvVar2 = (void *)FUN_00482ac0(&DAT_005aa12c,(int)vm,0);
        if (pvVar2 != (void *)0x0) {
          iVar1 = FUN_004a51c0(&DAT_005ae958,uStack_14,uStack_18);
          iVar1 = FUN_00413530(pvVar2,iVar1);
          if (iVar1 != -1) {
            FUN_00404f30((int)pvVar2,(short)iVar1);
          }
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


