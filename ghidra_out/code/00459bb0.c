
void __cdecl op_getgatearmy(void *vm)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_00455850(&DAT_005ae8e8,&uStack_4,&uStack_8,&iStack_c,&uStack_14,&uStack_10);
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar2;
  iVar1 = *(int *)((int)vm + 0x50);
  *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
  *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uStack_14;
  return;
}


