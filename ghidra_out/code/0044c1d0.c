
void __cdecl op_findunitwithname(void *vm)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iStack_8;
  byte *pbStack_4;
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    cVar5 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    pbStack_4 = *(byte **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    cVar5 = '\0';
  }
  iVar3 = FUN_0041da00((int)pvVar2);
  if (iVar3 == 0) {
    if (cVar5 == '\b') goto LAB_0044c236;
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  pbStack_4 = (byte *)0x0;
LAB_0044c236:
  if (pbStack_4 != (byte *)0x0) {
    iVar3 = FUN_0044c120(pbStack_4,(int *)&vm,&iStack_8);
    if (iVar3 == 0) {
      if (*(int *)((int)pvVar2 + 0x54) == 0) {
        *(undefined4 *)((int)pvVar2 + 0x90) = 3;
        FUN_004d4550(pvVar2);
        *(undefined4 *)((int)pvVar2 + 0x90) = 0;
        *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)pvVar2 + 0x50);
        iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar4;
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0xffffffff;
      }
      if (*(int *)((int)pvVar2 + 0x54) != 0) {
        iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar4;
        iVar3 = *(int *)((int)pvVar2 + 0x50);
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0xffffffff;
        return;
      }
    }
    else {
      uVar1 = *(undefined4 *)((int)vm + 0x28);
      if (*(int *)((int)pvVar2 + 0x54) == 0) {
        *(undefined4 *)((int)pvVar2 + 0x90) = 3;
        FUN_004d4550(pvVar2);
        *(undefined4 *)((int)pvVar2 + 0x90) = 0;
        *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)pvVar2 + 0x50);
        iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar4;
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
      }
      if (*(int *)((int)pvVar2 + 0x54) != 0) {
        iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar4;
        iVar3 = *(int *)((int)pvVar2 + 0x50);
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(int *)(iVar3 + 4 + iVar4 * 8) = iStack_8;
        return;
      }
    }
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  return;
}


