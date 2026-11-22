
void __cdecl op_getplayerindicatorcolor(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined2 extraout_var;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  pvVar1 = vm;
  iVar2 = FUN_004bdce0(vm,&vm);
  if (iVar2 != 0) {
    FUN_00474e70(&DAT_00584ae8,&uStack_c,&uStack_8,&uStack_4,
                 CONCAT22(extraout_var,*(undefined2 *)((int)vm + 0x24)));
    if (*(int *)((int)pvVar1 + 0x54) == 0) {
      *(undefined4 *)((int)pvVar1 + 0x90) = 3;
      FUN_004d4550(pvVar1);
      *(undefined4 *)((int)pvVar1 + 0x90) = 0;
      *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    }
    else {
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar3;
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(uint *)(iVar2 + 4 + iVar3 * 8) = uStack_c;
    }
    if (*(int *)((int)pvVar1 + 0x54) == 0) {
      *(undefined4 *)((int)pvVar1 + 0x90) = 3;
      FUN_004d4550(pvVar1);
      *(undefined4 *)((int)pvVar1 + 0x90) = 0;
      *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    }
    else {
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar3;
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(uint *)(iVar2 + 4 + iVar3 * 8) = uStack_8;
    }
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar3;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(uint *)(iVar2 + 4 + iVar3 * 8) = uStack_4;
      return;
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  return;
}


