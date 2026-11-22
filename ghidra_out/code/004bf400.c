
void __cdecl op_enumplayerspells(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int *piStack_4;
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uVar3 = 0;
  }
  iVar2 = *(int *)((int)pvVar1 + 0x90);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  if (iVar2 == 0) {
    if (((char)uVar3 == '\x06') && ((uVar3 & 0x100) == 0)) goto LAB_004bf48a;
    *(undefined4 *)((int)pvVar1 + 0x90) = 0x12;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  uVar3 = 0;
LAB_004bf48a:
  if (((char)uVar3 == '\x06') && ((uVar3 & 0x100) == 0)) {
    iVar2 = FUN_004bdce0(pvVar1,&vm);
    if (iVar2 != 0) {
      FUN_004bf000((void *)((int)vm + 0x34),pvVar1,uVar3,piStack_4);
    }
  }
  return;
}


