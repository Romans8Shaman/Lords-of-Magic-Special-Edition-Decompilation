
void __cdecl op_enumarmiesinradius(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uStack_18;
  uint uStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  int *piStack_4;
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piVar4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uVar3 = 0;
    piVar4 = piStack_4;
  }
  if (*(int *)((int)pvVar1 + 0x54) < *(int *)((int)pvVar1 + 0x58)) {
    iVar2 = *(int *)((int)pvVar1 + 0x54) + 1;
    *(int *)((int)pvVar1 + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)pvVar1 + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)pvVar1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar1 + 0x90) = 6;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    uStack_8 = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_c,&fStack_10);
  if (iVar2 != 0) {
    if (*(int *)((int)pvVar1 + 0x54) < *(int *)((int)pvVar1 + 0x58)) {
      iVar2 = *(int *)((int)pvVar1 + 0x54) + 1;
      *(int *)((int)pvVar1 + 0x54) = iVar2;
      uStack_8 = *(uint *)(*(int *)((int)pvVar1 + 0x50) + -8 + iVar2 * 8);
      piStack_4 = *(int **)(*(int *)((int)pvVar1 + 0x50) + -4 + iVar2 * 8);
    }
    else {
      *(undefined4 *)((int)pvVar1 + 0x90) = 6;
      FUN_004d4550(pvVar1);
      *(undefined4 *)((int)pvVar1 + 0x90) = 0;
      uStack_8 = 0;
      *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    }
    iVar2 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
    if (iVar2 != 0) {
      if (*(int *)((int)pvVar1 + 0x54) < *(int *)((int)pvVar1 + 0x58)) {
        iVar2 = *(int *)((int)pvVar1 + 0x54) + 1;
        *(int *)((int)pvVar1 + 0x54) = iVar2;
        uStack_8 = *(uint *)(*(int *)((int)pvVar1 + 0x50) + -8 + iVar2 * 8);
        piStack_4 = *(int **)(*(int *)((int)pvVar1 + 0x50) + -4 + iVar2 * 8);
      }
      else {
        *(undefined4 *)((int)pvVar1 + 0x90) = 6;
        FUN_004d4550(pvVar1);
        *(undefined4 *)((int)pvVar1 + 0x90) = 0;
        uStack_8 = 0;
        *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      }
      iVar2 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
      if (iVar2 != 0) {
        FUN_00406510(&DAT_005ae958,uStack_14,uStack_18,(int)vm,uVar3,piVar4,pvVar1);
        return;
      }
    }
  }
  *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
  FUN_004d4550(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  return;
}


