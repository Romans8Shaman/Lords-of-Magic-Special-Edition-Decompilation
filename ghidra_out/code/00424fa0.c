
void __cdecl op_enumcombatattackspells(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  void *pvStack_8;
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
  iVar2 = *(int *)((int)pvVar1 + 0x90);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  if (iVar2 == 0) {
    if (((char)uVar3 == '\x06') && ((uVar3 & 0x100) == 0)) goto LAB_0042502a;
    *(undefined4 *)((int)pvVar1 + 0x90) = 0x12;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  uVar3 = 0;
LAB_0042502a:
  if (((char)uVar3 == '\x06') && ((uVar3 & 0x100) == 0)) {
    iVar2 = FUN_00530200(&DAT_00584ae8,&pvStack_8,(int *)&vm);
    if (iVar2 != 0) {
      FUN_00424e20(pvStack_8,pvVar1,uVar3,piVar4,(int)vm);
    }
  }
  return;
}


